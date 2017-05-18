#define CATCH_CONFIG_RUNNER 
#include <catch.hpp> 
#include <algorithm>
#include <vector>
#include <list>
#include <forward_list>
#include <cstdlib>
#include <iostream>

template <typename C, typename P>


C filter (C const& con, P const& op)
{
	C result(con.size());
	auto it = std::copy_if(con.begin(), con.end(), result.begin(), op);
	result.resize(std::distance(result.begin(), it));
	return result;
}

bool is_even (int n) 
{ 
	return n % 2 == 0; 
}

TEST_CASE("template", "[filter]")
{
	std :: vector <int > v{1 ,2 ,3 ,4 ,5 ,6};
	std :: vector <int > alleven = filter (v, is_even);

	REQUIRE(std::all_of(alleven.begin(), alleven.end(), is_even)); 
}


int main (int argc, char* argv[]) 
{
	return Catch::Session().run(argc, argv); 
}