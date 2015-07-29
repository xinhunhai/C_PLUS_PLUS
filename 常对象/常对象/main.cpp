#include"coordinate.h"
#include<iostream>
using namespace std;

int main()
{
	const coordinate c1;
	cout << c1.get_x() << endl;
	cout << c1.get_y() << endl;
	
	return 0;
}