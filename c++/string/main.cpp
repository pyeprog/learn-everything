#include "absl/strings/str_format.h"
#include "email.hpp"
#include "email_check.hpp"
#include "format_string.hpp"
#include "palindrome_check.hpp"
#include "password.hpp"
#include "simple_encrypt.hpp"
#include "str_util.hpp"
#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
  std::ifstream file{"data/sentence.txt"};
  std::ofstream output{"data/cipher.txt"};
  std::ofstream output_decrypt{"data/decrypt.txt"};
  std::string line;

  while (std::getline(file, line)) {
    SimpleEncrypt::encrypt(line);
    output << line << '\n';
    SimpleEncrypt::decrypt(line);
    output_decrypt << line << '\n';
  }

  return 0;
}
