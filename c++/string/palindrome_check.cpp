#include "palindrome_check.hpp"

bool is_palindrome(const std::string &str) {
  size_t size = str.size();
  for (size_t i = 0; i < size / 2; ++i) {
    if (str[i] != str[size - 1 - i]) {
      return false;
    }
  }
  return true;
}