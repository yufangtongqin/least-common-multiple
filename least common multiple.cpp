// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n1, n2, max;

	cout << "����������: ";
	cin >> n1 >> n2;

	// ��ȡ������
	max = (n1 > n2) ? n1 : n2;

	do
	{
		if (max % n1 == 0 && max % n2 == 0)
		{
			cout << "LCM = " << max;
			break;
		}
		else
			++max;
	} while (true);

	return 0;
}
