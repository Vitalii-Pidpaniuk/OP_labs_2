#pragma once
#include <iostream>
//#include <set>

using namespace std;

template<typename T>
class MultiSet {
private:
    struct Node {
        T value;
        Node *next;

        Node(const T &val) : value(val), next(nullptr) {}
    };

    Node *head;

public:
    MultiSet();

    void insert(const T &element);

    bool contains(const T &element);

    void merge(const MultiSet<T> &otherSet);

    void clear();

    class Iterator {
    private:
        const MultiSet<T> &multiSet;
        Node *current;

    public:
        Iterator(const MultiSet<T> &set);

        void begin();

        bool end();

        const T &value();

        void next();
    };

Iterator getIterator() const;
};