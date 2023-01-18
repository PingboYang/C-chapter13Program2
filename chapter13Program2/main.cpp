#include <iostream>

using namespace std;

class Employee{
public:
    string name;
    int idNumber;
    string department;
    string position;
    Employee(string x, int y, string z, string a){
        name=x;
        idNumber=y;
        department=z;
        position=a;
    }
};

int main() {
    Employee employeeObj1("Susan", 47899, "Accounting", "Vice President");
    Employee employeeObj2("Mark Jones", 39119, "IT", "Programmer");
    Employee employeeObj3("Joy Rpgers", 81774, "Manufacturing", "Engineer");
    cout <<employeeObj1.name <<" "<<employeeObj1.idNumber<<" "<<employeeObj1.department<<" "<<employeeObj1.position<< endl;
    cout <<employeeObj2.name <<" "<<employeeObj2.idNumber<<" "<<employeeObj2.department<<" "<<employeeObj2.position<< endl;
    cout <<employeeObj3.name <<" "<<employeeObj3.idNumber<<" "<<employeeObj3.department<<" "<<employeeObj3.position<< endl;
    return 0;
}
