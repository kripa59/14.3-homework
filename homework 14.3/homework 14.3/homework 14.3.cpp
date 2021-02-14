#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your company: ";
	std::string company;
	std::getline(std::cin, company);
	std::cout << company.size() << std::endl;
	std::cout << "first symbol: "<< company[0] << "\n" ;
	std::cout << "last symbol: "<< company.substr(company.size() - 1, 1);

	std::cin;
	return 0;
}
