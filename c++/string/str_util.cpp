#include "str_util.hpp"
#include <algorithm>
#include <deque>
#include <map>
#include <regex>

std::string reverse(const std::string &str) {
  std::deque<char> chars;
  for (auto character : str) {
    chars.push_back(character);
  }
  return std::string{chars.rbegin(), chars.rend()};
}

std::string reverse(char *str) {
  std::deque<char> chars;
  for (size_t i = 0; i < strlen(str); ++i) {
    chars.push_front(str[i]);
  }
  return std::string{chars.begin(), chars.end()};
}

size_t count_vowels(const std::string &str) {
  bool vowels[256]{};
  vowels['a'] = true;
  vowels['e'] = true;
  vowels['i'] = true;
  vowels['o'] = true;
  vowels['u'] = true;

  unsigned int num_vowels = 0;
  for (auto character : str) {
    if (vowels[character])
      ++num_vowels;
  }

  return num_vowels;
}

std::string remove_space(const std::string &str) {
  std::deque<char> chars;
  for (const char &c : str) {
    if (c != ' ')
      chars.push_back(c);
  }
  return std::string{chars.begin(), chars.end()};
}

bool is_anagrams(const std::string &str0, const std::string &str1) {
  std::map<char, unsigned int> counter;
  for (const char &c : str0) {
    counter[c] = (counter.find(c) == counter.end() ? 0 : counter[c]) + 1;
  }

  for (const char &c : str1) {
    counter[c] = (counter.find(c) == counter.end() ? 0 : counter[c]) - 1;
  }

  return std::all_of(counter.begin(), counter.end(),
                     [](const auto &kv) { return kv.second == 0; });
}

std::vector<std::string> split(std::string str) {
  std::regex pattern{R"([a-zA-Z0-9]+)"};
  std::vector<std::string> ret;
  std::smatch match;
  while (std::regex_search(str, match, pattern)) {
    ret.push_back(match.str());
    str = match.suffix();
  }
  return ret;
}
