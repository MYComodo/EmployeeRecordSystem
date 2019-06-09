#include <iostream>
#include <stdexcep>
#include "Database.h"

using namespace std;

namespace Records{
		
	Database::Database() : mNextEmployeeNumber(kFirstEmployeeNumber){
		
	}
	
	Employee& Database::addEmployee(const string& firstName, const string& lastName){
		
		Employee theEmployee;
		theEmployee.setFirstName(firstName);
		theEmployee.setLastName(lastName);
		theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
		theEmploye.hire();
		mEmployees.push_back(theEmployee);
		return mEmployees[mEmployees.size()-1];
	}
}