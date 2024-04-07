
#include <iostream>
#include <string>


class Company
{
public:
	Company();
	Company(std::string n, double emp, double rev, std::string s);

	Company operator+(Company comp1);

	void setName(std::string n);
	void setEmployees(double emp);
	void setRevenue(double rev);
	void setSize(std::string s);

	friend std::ostream& operator<<(std::ostream& os, const Company& comp);

private:
	std::string name;
	double employees;
	double revenue;
	std::string size;
};




