#include "gtest/gtest.h"
#include "../src/algorithms/sort.hpp"

#include <vector>

bool isOrder(std::vector<int> v)
{
	for(unsigned int i = 1; i < v.size(); i++)
		if(v[i - 1] > v[i])
			return false;
	return true;
}

TEST(sort, insertion_sort)
{
    std::vector<int> v;
    v.push_back(6);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    v.push_back(4);
    Algorithms::Sort::insertion_sort(&v);
    ASSERT_TRUE(isOrder(v));
}