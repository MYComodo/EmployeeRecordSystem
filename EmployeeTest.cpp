#include <iostream>
#include "Employee.cpp"
using namespace std;
using namespace Records;


int main(){
	
	cout << "Testing the Employee class." << endl;
	Employee emp;
	emp.setFirstName("Muhammed");
	emp.setLastName("YILMAZ");
	emp.setEmployeeNumber(1);
	emp.setSalary(50000);
	emp.promote();
	emp.promote(1000);
	emp.hire();
	emp.display();
	system("pause");
	return 0;
}