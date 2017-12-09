#pragma once

#include <string>

namespace Records {
	const int kDefaultStartingSalary = 30000;

	using namespace std;

	class Employee
	{
	public:
		Employee();
		void promote(int inRaiseAmout = 1000);
		void demote(int inDemeritAmout = 1000);
		void hire();
		void fire();
		void display() const;

		void setFirstName(string inFirstName);
		string getFirstName() const;
		void setLastname(string inLastName);
		string getLastName() const;
		void setEmployeeNumber(int inEmployeeNumber);
		int getEmployeeNumber() const;
		void setSalary(int inNewSalary);
		int getSalary() const;
		bool getIsHired() const;

	protected:
		string mFirstName;
		string mLastName;
		int mEmployeeNumber;
		int mSalary;
		bool bHired;
	};
}
