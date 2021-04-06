//
// Created by юрий on 06/04/2021.
//

#include "SugCol.hpp"

#include <algorithm>

SuggestionsCollection::SuggestionsCollection() { suggestions = {}; }

void SuggestionsCollection::Update(json storage) {
  std::sort(storage.begin(), storage.end(),
            [](const json& a, const json& b) -> bool {
              return a.at("cost") < b.at("cost");
            });
  suggestions = storage;
}

json SuggestionsCollection::Suggest(const std::string& input) {
  json result;
  for (size_t i = 0, m = 0; i < suggestions.size(); ++i) {
    if (input == suggestions[i].at("id")) {
      json pos;
      pos["text"] = suggestions[i].at("name");
      pos["position"] = m++;
      result["suggestions"].push_back(pos);
    }
  }
  return result;
}