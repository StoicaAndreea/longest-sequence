#include <iostream>
using namespace std;
#include "subalg.h"
#include "tests.h"
//#include <vector>
typedef int* vector;

int main()
{
	tests();
	cout << "testele au trecut" << endl;
	int n = 0;
	int* pv;
	pv = new int[10];
	char op;
	int start = 0;
	int finish = 0;
	int ok = 1;
	while (ok != 0)
	{

		menu();
		cout << "    operation:";
		cin >> op;
		switch (op)
		{
		case 'r':
			read_vec(n, pv);
			break;
		case 'p':
			start = 0;
			finish = n - 1;
			show_vec(start, finish, pv);
			break;
		case 'e':
			ok = 0;
			deallocation(pv);
			break;
		case '1':
			longest1(start, finish, pv, n);
			show_vec(start, finish, pv);
			break;
		case '8':
			longest8(start, finish, pv, n);
			show_vec(start, finish, pv);
			break;
		default:
			ok = 0;
			deallocation(pv);
		}
	}
	return 0;
}