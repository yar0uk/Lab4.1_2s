#include "UserList.h"

void UserList::push_back(int data)
{
	if (GetHead() == nullptr)
		SetHead(new Node(data));
	else
	{
		Node* tmp = GetHead();
		while (tmp->next != nullptr)
			tmp = tmp->next;

		tmp->next = new Node(data);
	}
}

bool UserList::Search(int value)
{
	Node* tmp = GetHead();
	while (tmp != nullptr)
	{
		if (tmp->data == value)
			return true;
		tmp = tmp->next;
	}
	return false;
}

void UserList::Show()
{
	Node* tmp = GetHead();
	while (tmp != nullptr)
	{
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << endl;
}

void UserList::Remove(int value)
{
	if (GetHead()->data == value)
	{
		DeletHead();
		SetHead(GetHead()->next);
		return;
	}

	if (GetHead()->next == nullptr)
	{
		if (GetHead()->data == value)
		{
			DeletHead();
			SetHead(nullptr);
			return;
		}

		cout << "Value not found!" << endl;
		return;
	}

	Node* tmp = GetHead();
	while (tmp->next != nullptr)
	{
		if (tmp->next->data == value)
		{
			Node* tmp_ptr = tmp->next->next;
			delete tmp->next;
			tmp->next = tmp_ptr;
			return;
		}
		tmp = tmp->next;
	}

	cout << "Value not found" << endl;
}

void UserList::RemoveAll()
{
	if (GetHead()->next == nullptr)
	{
		SetHead(nullptr);
		return;
	}

	Node* tmp = GetHead()->next;
	while (tmp != nullptr)
	{
		GetHead()->next = tmp->next;
		tmp->next = nullptr;
		delete tmp;
		tmp = GetHead()->next;
	}
}
