#include <iostream>
#include <string>
#include <iomanip> //input output manipulation library
#include <cstdlib> //system choose random
#include <ctime>

using namespace std;

void exercise1()
{
	//learn how to use cin and cout, getline vs cin.ignore() and \n vs endl
	string name = ""; int age = 0;
	cout << "Enter your age: ";
	cin >> age;
	cin.ignore();
	cout << "Enter your name: ";
	//cin >> name;
	getline(cin, name);
	cout << "Your entered name : " << name << "\n" << endl;
}
void exercise2()
{
	//learn how to use the system pause, system clean screen, string() in visual studio C++
	cout << "hello world!" << endl;
	system("pause");
	cout << "Welcome to my class" << endl;
	system("pause");
	system("clean");
	cout << string(50, '-') << endl;
	cout << "I Like \"C++\"" << endl;
	cout << string(50, '-') << endl;
}

void exercise3()
{
	//learn how to use the constant, and control decimal point in display
	double circleArea = 0, radius = 0;
	cout << "Enter your circle radius in cm: ";
	cin >> radius;
	const double PI = 3.142;
	circleArea = PI * (radius * radius);
	cout << fixed << setprecision(3);
	cout << "Circle Area is " << circleArea << " cm^2. " << endl;

	cout << "Enter your circle radius in cm: ";
	cin >> radius;
	circleArea = PI * (radius * radius);
	cout << setprecision(4);
	cout << "Circle Area is " << circleArea << " cm^2. " << endl;
}


int main()
{
	exercise1();
	// exercise2();
	// exercise3();
	return 0;
}