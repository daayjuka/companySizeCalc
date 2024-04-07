#include "Company.h"

Company::Company()
{
	name = "";
	employees = -1;
	revenue = -1;
	size = "";
}

Company::Company(std::string n, double emp, double rev, std::string s)
{
	name = n;
	employees = emp;
	revenue = rev;
	size = s;
}

Company Company::operator+(Company comp1)
{
	Company temp;
	temp.name = name + " and " + comp1.name;
	temp.employees = employees + comp1.employees;
	temp.revenue = revenue + comp1.revenue;
	if ((temp.employees) < 40) {
		temp.size = "SE";
	}
	else if ((temp.employees) < 100 && (temp.employees) > 40)
	{
		temp.size = "ME";
	}
	else
	{
		temp.size = "Company";
	}


	return temp;
}

void Company::setName(std::string n)
{
	name = n;
}

void Company::setEmployees(double emp)
{
	employees = emp;
}

void Company::setRevenue(double rev)
{
	revenue = rev;
}

void Company::setSize(std::string s)
{
	size = s;
}

std::ostream& operator<<(std::ostream& os, const Company& comp)
{
	os << comp.name << " " << comp.revenue << " " << comp.size << std::endl;
	return os;
}
