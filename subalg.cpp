#include <iostream>
# include <vector>
using namespace std;

void allocation(int l, int*& v) {
	//Descr: allocates memory for the elem of an array 
	//In: an array v and its length l
	//Out: an array v (its address)
	v = new int[l];
}

void deallocation(int*& v) {
	//Descr: frees memory for the elem of an array 
	//In: an array v 
	//Out:  - 
	if (v != NULL) {
		delete[] v;
		v = NULL;
	}
}

void read_vec(int& n, int* v)
//Descr: reads an array
//in: n(int), v(pointer)
//out: n(int), v(pointer)
{
	cout << "type the number of elements: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "type the element no:" << i << ":  ";
		cin >> v[i];
		cout << endl;
	}
}

void show_vec(int start, int finish, int* v)
{
	for (int i = start; i <= finish; i++)
	{
		cout << v[i] << "  ";
	}
	cout << "\n";
}

void menu()
{
	cout << "\n";
	cout << "MENU:\n";
	cout << "r. Read the array\n";
	cout << "p. Print the array\n";
	cout << "1. longest seq pb 1\n";
	cout << "8. longest seq pb 8\n";
	cout << "e. Exit\n";
}

void longest1(int& start, int& finish, int *v, int n)
{
	int crr_count = 1;
	int crr_start = 0;
	int lng_count = 1;
	int lng_start = 0;
	int i = 0;
	while (i < n - 1)
	{
		if (v[i] < v[i + 1])
		{
			crr_count++;
			i++;
		}
		else
		{
			if (crr_count > lng_count)
			{
				lng_start = crr_start;
				lng_count = crr_count;

			}
			i++;
			crr_start = i;
			crr_count = 1;
		}
	}
	if (crr_count > lng_count)
	{
		lng_start = crr_start;
		lng_count = crr_count;

	}
	if (lng_start == 0)
	{
		start = lng_start;
		finish = lng_count + start - 1;
	}
	else
	{
		start = lng_start;
		finish = lng_count + start - 1;
	}
}
void longest8(int& start, int& finish, int *v, int n)
{
	int crr_count = 1;
	int crr_start = 0;
	int lng_count = 1;
	int lng_start = 0;
	int i = 0;
	while (i < n - 1)
	{
		if ((v[i] * v[i + 1] < 0) or (v[i] == 0 and v[i + 1] < 0) or (v[i + 1] == 0 and v[i] < 0))
		{
			crr_count++;
			i++;
		}
		else
		{
				if (crr_count > lng_count)
				{
					lng_start = crr_start;
					lng_count = crr_count;

				}
				i++;
				crr_start = i;
				crr_count = 1;

		}
	}
	if (crr_count > lng_count)
	{
		lng_start = crr_start;
		lng_count = crr_count;

	}
	if (lng_start == 0)
	{
		start = lng_start;
		finish = lng_count + start - 1;
	}
	else {
		start = lng_start;
		finish = lng_count + start - 1;
	}
}