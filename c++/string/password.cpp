#include "password.hpp"
#include <random>
#include <vector>

PasswdCreator &PasswdCreator::set_alphabet(const std::string &alphabet) {
  _alphabet = alphabet;
  return *this;
}

PasswdCreator &PasswdCreator::set_length(size_t length) {
  _len = length;
  return *this;
}

std::string PasswdCreator::create() {
 std::random_device rd;
 std::mt19937 gen(rd());
 std::uniform_int_distribution<> dist(0, _alphabet.size() - 1);

 std::vector<char> chars;

 for (size_t i = 0; i < _len; ++i) {
   chars.push_back(_alphabet[dist(gen)]);
 }

return std::string{chars.begin(), chars.end()};
}