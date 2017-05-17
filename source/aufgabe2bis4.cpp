#include <cstdlib>
#include <vector> 
#include <list>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>

int main()
{
	//aufgabe 2
	std::list<int> random1;

	for (int i = 0; i < 100; ++i)
	{
		int r = rand() % 101;
		random1.push_front(r);

	}
	std::vector<int> random2 (random1.size());

	std::copy(std::begin(random1), std::end(random1), std::begin(random2));

	for (std::vector<int>::iterator it = random2.begin(); it!=random2.end(); ++it)
	{
		std::cout << ' ' << *it;
	}
	std::cout << std::endl;

	std::set<int> set(std::begin(random1), std::end(random1));

	int number = 0;
	for (int i = 0; i <=100; ++i)
	{	
		if (set.count(i) != 0)
		{
			number++;
		}
	}

	//aufgabe 3
	std::cout << "Number of numbers: ";
	std::cout << number << std::endl;

	std::cout <<"Absent numbers: ";
	for (int i = 0; i <=100; ++i)
	{	
		if (set.count(i) == 0)
		{
			std::cout << i << ' ';
		}
	}
	std::cout << std::endl;

	//aufgabe 4

	std::map <int, int> map;

	for (int i = 0; i <=100; ++i)
	{
		map[i] = set.count(i);
	}

	std::cout << "Number : Frequenzy" << std::endl;
	for (int i = 0; i <=100; ++i)
	{
		std::cout << i << " : " << map[i] << std::endl;;
	}

}