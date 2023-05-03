#pragma once

#include <string>

struct People {
  std::string first_name;
  std::string last_name;
};

std::string format_string(const People& people);
