// Copyright 2020 Your Name <your_email>

#ifndef INCLUDE_SUGCOL_HPP_
#define INCLUDE_SUGCOL_HPP_
#include <nlohmann/json.hpp>
#include <string>

using json = nlohmann::json;

class SuggestionsCollection {
 public:
  SuggestionsCollection();
  void Update(json storage);
  json Suggest(const std::string& input);

 private:
   json suggestions;
};

#endif  // INCLUDE_SUGCOL_HPP_
