// greatest common divisor.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n1, n2;

	cout << "������������: ";
	cin >> n1 >> n2;

	while (n1 != n2)
	{
		if (n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;
	}

	cout << "HCF = " << n1;
	return 0;
}


