#include "email_check.hpp"

bool is_email(const std::string &str) {
  std::regex email_pattern{R"([a-z]+@[a-z]+\.com)"};
  return bool(std::regex_match(str, email_pattern));
}
