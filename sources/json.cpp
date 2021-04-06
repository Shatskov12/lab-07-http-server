//
// Created by юрий on 06/04/2021.
//

#include <exception>
#include <fstream>
#include <iostream>
//#include <sstream>
#include "json.hpp"

JsonStorage::JsonStorage(const std::string& filename) : filename(filename) {}

json JsonStorage::GetStorage() { return storage; }

void JsonStorage::Load() {
  try {
    std::ifstream in(filename);
    in >> storage;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
}
