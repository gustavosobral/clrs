#include "algorithms/sort.hpp"

#include <iostream>
#include <vector>

int main(int argc, char * argv[], char * envp[])
{
	std::vector<int> a;
	a.push_back(30);
	a.push_back(5);
	a.push_back(2);
	a.push_back(4);
	a.push_back(6);
	a.push_back(1);
	a.push_back(3);

	Algorithms::Sort::insertion_sort(&a);
	
	for(unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;

	return 0;	
}