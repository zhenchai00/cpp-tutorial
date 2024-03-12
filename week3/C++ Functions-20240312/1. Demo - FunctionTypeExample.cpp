//Exercise 1: learn the type of functions
#include <iostream>
using namespace std;

//declare function prototype
void sum1(); //function without return without parameter list
int sum2() //function with return without parameter list
{
	int a = 10;
	int b = 19;
	return a + b;
}
void sum3(int a, int b); //function without return with parameter list
int sum4(int a, int b); //function with return with parameter list

int main()
{
	sum1();
	cout << "The final values is " << sum2() << endl;
	return 0;
}

void sum1()
{
	int a = 8;
	int b = 9;
	cout << a << " + " << b << " = " << a + b << endl;
}