#include "email.hpp"
#include <map>

Email::Email(const std::string &str) {
  size_t delimiter_idx = str.find('@');
  if (delimiter_idx == std::string::npos)
    throw std::invalid_argument("invalid email format");
  user = str.substr(0, delimiter_idx);
  host = str.substr(delimiter_idx + 1, str.size() - delimiter_idx - 1);
}

std::string Email::to_string() {
  return user + "@" + host;
}

void EmailCounter::push_back(Email &&email) {
  emails.push_back(email);
}

void EmailCounter::push_back(const Email &email) {
  emails.push_back(email);
}

std::string EmailCounter::common_host() {
  std::map<std::string, unsigned int> counter;
  unsigned int max_count = 0;
  std::string ret;
  for (auto email : emails) {
     unsigned int count = (counter.find(email.host) == counter.end() ? 0 : counter[email.host]);
     counter[email.host] = count + 1;
     if (count + 1 > max_count) {
       max_count = count + 1;
       ret = email.host;
     }
  }

  return ret;
}

size_t EmailCounter::size() {
  return emails.size();
}