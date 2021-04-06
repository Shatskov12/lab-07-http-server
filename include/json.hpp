//
// Created by юрий on 06/04/2021.
//
#ifndef INCLUDE_JSON_HPP_
#define INCLUDE_JSON_HPP_

#include <nlohmann/json.hpp>
#include <string>
using json = nlohmann::json;

class JsonStorage {
 public:
  explicit JsonStorage(const std::string& filename);
  json GetStorage();
  void Load();

 private:
  std::string filename;
  json storage;
};

#endif  // INCLUDE_JSON_HPP_
