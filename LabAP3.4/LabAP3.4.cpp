// Lab_03_4.cpp
// < �������, ��� ������ >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ����� ����
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	R = 2; 
	
	// ������������ � ����� ����
	if ((x <= 0 && y<=0 && y >= -x - 2 * R) ||
		(x >=0 && x<= 2 * R && y >= 0 && y <= 2 * R && (x * x + y * y) > R * R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}