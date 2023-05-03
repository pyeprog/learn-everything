#pragma once

namespace pizza {
template <typename T> struct Node {
  T value;
  Node<T> *next;
  Node<T> *prev;
};

template <typename T> class LinkedList {
private:
  Node<T> *root_{nullptr};
  Node<T> *tail_{nullptr};
  unsigned int size_{0};

public:
  void push_back(T value);
  T pop_back();
  unsigned int size() { return size_; };
  virtual ~LinkedList();
};

#include "linked_list.cpp"
} // namespace pizza