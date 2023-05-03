#include <sstream>
#include "format_string.hpp"

std::string format_string(const People& people) {
  std::ostringstream oss;
  oss << "First name: " << people.first_name << ", Last name: " << people.last_name;
  return oss.str();
}

