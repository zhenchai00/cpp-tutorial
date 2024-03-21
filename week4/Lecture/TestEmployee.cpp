// main function
#include "Employee.hpp" // use personal header file 

int main ()
{
    // build static object
    Employee emp1; // using default constructor
    Employee emp2(1, "Hoo", "HR", 3500, "Executive"); 

    // build dynamic object
    Employee * emp3 = new Employee; // using the default constructor
    Employee * emp4 = new Employee(2, "Woo", "Finance", 5700, "Senior Executive");

    // access the method of static object
    emp1.display();
    emp2.display();

    // access the method of dynamic object
    emp3->display();
    emp4->display();

    // delete dynamic object before leave the program
    // delete emp3;
    // delete emp4;

    return 0;
}