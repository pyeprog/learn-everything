#pragma once
#include <string>
#include <vector>

class Email {
public:
  std::string user;
  std::string host;

  Email(const std::string &str);
  std::string to_string();
};

class EmailCounter {
private:
  std::vector<Email> emails;

public:
  void push_back(const Email &email);
  void push_back(Email &&email);
  std::string common_host();
  size_t size();
};