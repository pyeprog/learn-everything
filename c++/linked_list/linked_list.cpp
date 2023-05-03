#include "linked_list.hpp"

template <typename T> void pizza::LinkedList<T>::push_back(T value) {
  auto *new_node = new pizza::Node<T>{value, nullptr, nullptr};
  ++this->size_;

  if (this->root_ == nullptr) {
    this->root_ = new_node;
    this->tail_ = this->root_;
  } else {
    this->tail_->next = new_node;
    new_node->prev = this->tail_;
    this->tail_ = new_node;
  }
}

template <typename T> T pizza::LinkedList<T>::pop_back() {
  if (this->size_ <= 0)
    throw "not enough element";

  auto tail = this->tail_;
  auto tail_val = tail->value;

  if (this->tail_ == this->root_) {
    this->root_ = nullptr;
    this->tail_ = nullptr;
  } else {
    this->tail_ = tail->prev;
    this->tail_->next = nullptr;
  }

  delete tail;
  --this->size_;

  return tail_val;
}

template <typename T> pizza::LinkedList<T>::~LinkedList() {
  while (this->root_ != nullptr) {
    auto next = this->root_->next;
    delete this->root_;
    this->root_ = next;
  }
  this->size_ = 0;
}