#pragma once

#include <string>
#include <iostream>

using namespace std;

class LinkedList
{
private:
	struct Node {
		int value;
		Node* next;
	};
	Node* head;
public:
	LinkedList();
	~LinkedList();
	void push(int value);
	void insert(int value, int pos);
	int pop();
	int size() const;
	int count(int search_for) const;
	bool search_element(int value);
	int& operator[](const int& index);
	LinkedList& operator=(const LinkedList& list);
	friend ostream& operator<<(ostream& os, const LinkedList& rhs) {
		for (Node* curNode = rhs.head; curNode != nullptr; curNode = curNode->next)
		{
			os << curNode->value;
			if (curNode->next != nullptr)
				os << " ";
		}

		return os;
	}
};

