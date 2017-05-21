#define CATCH_CONFIG_RUNNER 
#include <catch.hpp> 
#include <iostream>
#include "circle.hpp"
#include <vector>
#include <algorithm>
#include "sort.cpp"




TEST_CASE("all circles sorted", "[sort]")
{
	std::vector<Circle> v;
	Color c(0.5, 0.5, 0.5);
	Circle cirA(5, Vec2(0,0), c);
	Circle cirB(6, Vec2(0,0), c);
	Circle cirC(2, Vec2(0,0), c);
	Circle cirD(9, Vec2(0,0), c);
	Circle cirE(0, Vec2(0,0), c);

	v.push_back(cirA);
	v.push_back(cirB);
	v.push_back(cirC);
	v.push_back(cirD);
	v.push_back(cirE);

	std::sort(v.begin(),v.end(), sort{});

	REQUIRE (std::is_sorted (v.begin (), v.end ()));
}


int main (int argc, char* argv[]) 
{
	return Catch::Session().run(argc, argv); 
}