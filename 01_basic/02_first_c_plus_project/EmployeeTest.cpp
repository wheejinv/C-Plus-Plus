// EmployeeTest.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#include "stdafx.h"
#include <iostream>
#include "Employee.h"

using namespace std;
using namespace Records;

int main()
{
	cout << "Testing the Employee class." << endl;
	Employee emp;
	emp.setFirstName("Marni");
	emp.setLastname("Klpper");
	emp.setEmployeeNumber(71);
	emp.setSalary(50000);
	emp.promote();
	emp.promote(50);
	emp.hire();
	emp.display();
	


    return 0;
}

