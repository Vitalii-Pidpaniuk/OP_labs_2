#pragma once
#include <iostream>
#include "multiset.h"
using namespace std;

template<typename T>
MultiSet<T>::MultiSet() : head(nullptr) {}

template<typename T>
void MultiSet<T>::insert(const T& element) {
    Node* newNode = new Node(element);

    if (head == nullptr)
        head = newNode;
    else if (element <= head->value) {
        newNode->next = head;
        head = newNode;
    }
    else {
        Node* current = head;
        while (current->next != nullptr && element > current->next->value)
            current = current->next;

        newNode->next = current->next;
        current->next = newNode;
    }
}

template<typename T>
bool MultiSet<T>::contains(const T& element) {
    Node* current = head;
    while (current != nullptr) {
        if (current->value == element)
            return true;
        current = current->next;
    }
    return false;
}

template<typename T>
void MultiSet<T>::merge(const MultiSet<T>& otherSet) {
    Node* current = otherSet.head;
    while (current != nullptr) {
        insert(current->value);
        current = current->next;
    }
}

template<typename T>
void MultiSet<T>::clear() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}

template<typename T>
MultiSet<T>::Iterator::Iterator(const MultiSet<T>& set) : multiSet(set), current(set.head) {}

template<typename T>
void MultiSet<T>::Iterator::begin() {
    current = multiSet.head;
}

template<typename T>
bool MultiSet<T>::Iterator::end() {
    return current == nullptr;
}

template<typename T>
const T& MultiSet<T>::Iterator::value() {
    return current->value;
}

template<typename T>
void MultiSet<T>::Iterator::next() {
    current = current->next;
}

template<typename T>
typename MultiSet<T>::Iterator MultiSet<T>::getIterator() const {
    return Iterator(*this);
}
