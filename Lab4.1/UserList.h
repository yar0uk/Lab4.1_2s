#pragma once
#include "CustomList.h"

class UserList : public CustomList
{
public:
	UserList()
	{
		SetHead(nullptr);
	}

	UserList(int data)
	{
		SetHead(new Node(data));
	}

	virtual bool Search(int value) override;
	virtual void push_back(int data) override;
	virtual void Show() override;
	virtual void Remove(int value) override;
	virtual void RemoveAll() override;

	~UserList() override
	{
		SetHead(nullptr);
	}
};

