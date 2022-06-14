#include "UserList.h"
#include <vector>

int main()
{
	vector<CustomList*> vector =
	{
		new UserList(10),
		new UserList(20),
		new UserList(30),
		new UserList(40),
	};

	for(auto element: vector)
	{
		element->push_back(10);
		element->Show();
	}

	return 0;
}