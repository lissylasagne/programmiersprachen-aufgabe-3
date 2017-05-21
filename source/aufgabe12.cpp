#define CATCH_CONFIG_RUNNER 
#include <catch.hpp> 
#include <iostream>
#include "circle.hpp"
#include <vector>
#include <algorithm>

TEST_CASE("all circles bigger than 4", "[copy_if]")
{
	std::vector<Circle> v;
	Color c(0.5, 0.5, 0.5);
	Circle cirA(5, Vec2(0,0), c);
	Circle cirB(3, Vec2(0,0), c);
	Circle cirC(8, Vec2(0,0), c);
	Circle cirD(1, Vec2(0,0), c);
	Circle cirE(5, Vec2(0,0), c);

	v.push_back(cirA);
	v.push_back(cirB);
	v.push_back(cirC);
	v.push_back(cirD);
	v.push_back(cirE);

	std::vector<Circle> result(v);

	result.clear();

	auto it = std::copy_if(v.begin(), v.end(), result.begin(), [] (Circle c) -> bool {return c.r > 4;});
	//result.resize(std::distance(result.begin(), it));

	REQUIRE(std::all_of(result.begin(), result.end(), [](Circle c){return c.r > 4;}));
}

int main (int argc, char* argv[]) 
{
	return Catch::Session().run(argc, argv); 
}