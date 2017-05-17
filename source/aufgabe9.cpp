#define CATCH_CONFIG_RUNNER 
#include <catch.hpp> 
#include <vector>
#include <algorithm>

TEST_CASE("avector added together", "[sort]")
{
	std :: vector <int > v1 {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9};
	std :: vector <int > v2 {9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1};
	std :: vector <int > v3 (9);

	std::transform (v3.begin(), v3.end(), [] (&v1, &v2) {})
}