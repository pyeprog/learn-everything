#include "simple_encrypt.hpp"

void SimpleEncrypt::encrypt(std::string &str) {
  for (size_t i = 0; i < str.size(); ++i) {
    str[i] = str[i] + 1;
  }
}

void SimpleEncrypt::decrypt(std::string &str) {
  for (size_t i = 0; i < str.size(); ++i) {
    str[i] = str[i] - 1;
  }
}