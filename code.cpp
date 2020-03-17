#include<iostream>
#include<cmath>
using namespace std;
void input(int& a, int& b, int& c)
{
	do
	{
		cout << "enter the length of a : ";
		cin >> a;
	} while (a <= 0);
	do
	{
		cout << "enter the length of b : ";
		cin >> b;
	} while (b <= 0);
	do
	{
		cout << "enter the length of c : ";
		cin >> c;
	} while (c <= 0);
}
bool is_Triangle(int a, int b, int c)
{
	if (a + b > c && a + c > b && c + b > a)	return true;
	return false;
}
void triangleType(int a, int b, int c)
{
	bool right = a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b;
	if (right && (a == b || a == c || b == c))
		cout << " this is a isosceles right triangle "<<endl;
	else if (right)
		cout << "this is a right triangle" << endl;
	else if (a == b || a == c || b == c)
		cout << " this is a isosceles triangle " << endl;
	else if (a == b == c)
		cout << "this is a equilateral triangle" << endl;
	else
		cout << "this is a scalene triangle " << endl;
	
}
int main()
{
	int a, b, c;
	input(a, b, c);
	if (is_Triangle)	triangleType(a, b, c);
	system("pause");
	return 0;
}
