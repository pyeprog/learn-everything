#pragma once

#include <string>
#include <cstring>
#include <vector>

std::string reverse(const std::string &str);

std::string reverse(char *str);

size_t count_vowels(const std::string &str);

std::string remove_space(const std::string &str);

bool is_anagrams(const std::string &str0, const std::string &str1);

std::vector<std::string> split(std::string str);