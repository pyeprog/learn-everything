#pragma once

#include <string>


class PasswdCreator {
private:
  size_t _len{5};
  std::string _alphabet{"abcdefghijklmn"};
public:
  PasswdCreator& set_length(size_t length);
  PasswdCreator& set_alphabet(const std::string &alphabet);
  std::string create();
};
