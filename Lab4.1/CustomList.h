#pragma once
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
	
	Node(int value) 
		: data(value), next(nullptr) 
	{ }
};

class CustomList
{
public:
	CustomList()
		: head(nullptr)
	{ }

	CustomList(int data)
	{
		head->data = data;
	}

	Node* GetHead() { return head; };
	void SetHead(Node* data) { head = data; };
	void DeletHead() { delete head; };

	virtual ~CustomList() { head = nullptr; }
	virtual void push_back(int data) = 0;
	virtual bool Search(int value) = 0;
	virtual void Show() = 0;
	virtual void Remove(int value) = 0;
	virtual void RemoveAll() = 0;
private:
	Node* head;
};
