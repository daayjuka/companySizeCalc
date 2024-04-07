#include <iostream>
#include "Company.h"
#include <string>

int main()
{
	std::string compInfo1, compInfo2;
	std::string name1, name2, size1, size2, emp1, emp2, rev1, rev2;

	long int res, res2;

	std::cout << "Give first company's info: " << std::endl;
	getline(std::cin, compInfo1);
	std::cout << "Give second company's info: " << std::endl;
	getline(std::cin, compInfo2);

	res = compInfo1.find(" ");
	name1 = compInfo1.substr(0, res);
	compInfo1.replace(res, 1, "&");
	res2 = compInfo1.find(" ");
	emp1 = compInfo1.substr(static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(res) + 1, (static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(res2) - res - 1));
	compInfo1.replace(res2, 1, "&");
	res = compInfo1.find(" ");
	rev1 = compInfo1.substr(static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(res2) + 1, (static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(res) - res2 - 1));
	size1 = compInfo1.substr(res, compInfo1.length() - 1);

	res = compInfo2.find(" ");
	name2 = compInfo2.substr(0, res);
	compInfo2.replace(res, 1, "&");
	res2 = compInfo2.find(" ");
	emp2 = compInfo2.substr(static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(res) + 1, (static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(res2) - res - 1));
	compInfo2.replace(res2, 1, "&");
	res = compInfo2.find(" ");
	rev2 = compInfo2.substr(static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(res2) + 1, (static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(res) - res2 - 1));
	size2 = compInfo2.substr(res, compInfo2.length() - 1);
	

	Company comp1(name1, stod(emp1), stod(rev1), size1);
	Company comp2(name2, stod(emp2), stod(rev2), size2);

	Company comp3;

	comp3 = comp1 + comp2;

	std::cout << comp3;
	

}
