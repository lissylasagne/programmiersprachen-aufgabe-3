#define CATCH_CONFIG_RUNNER 
#include <catch.hpp> 
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <list>



bool by_three(int i)
{
  return (i % 3) == 0;  
}

bool not_by_three(int i)
{
  return (i % 3) != 0;  
}

void print(const std::vector<unsigned int> &vec)
{
  for (const auto& i: vec) 
    std::cout << i << ' '; 
  std::cout << std::endl;
}

void remove(std::vector<unsigned int> &vec)
{
	vec.erase(std::remove_if(vec.begin(), vec.end(), not_by_three), vec.end());
}



TEST_CASE("filter alle vielfache von drei", "[erase]")
{
	std::list<unsigned int> random1;

	for (int i = 0; i < 100; ++i)
	{
		int r = rand() % 101;
		random1.push_front(r);

	}
	std::vector<unsigned int> random2 (random1.size());

	std::copy(std::begin(random1), std::end(random1), std::begin(random2));
	print(random2);

	remove(random2);
	print(random2);

	REQUIRE(std::all_of(random2.begin(), random2.end(), by_three)); 
}
 
int main(int argc, char* argv[])
{
 	//vector with random numbers, copy from aufgabe 2
	std::list<unsigned int> random1;

	for (int i = 0; i < 100; ++i)
	{
		int r = rand() % 101;
		random1.push_front(r);

	}
	std::vector<unsigned int> random2 (random1.size());

	std::copy(std::begin(random1), std::end(random1), std::begin(random2));

	//print(random2);
	std::cout << std::endl;
  
  
 	 // removes all numbers not dividebar by 3
  	random2.erase(std::remove_if(random2.begin(), random2.end(), by_three), random2.end());
  	//print(random2);

  	return Catch::Session().run(argc, argv);  
}