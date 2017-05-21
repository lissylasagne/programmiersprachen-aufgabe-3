#include <iostream>
#include <vector>
#include <algorithm>
#include "circle.hpp"

class sort
{
	public:
		sort() : sorted{0}{}
		void operator() (Circle a, Circle b)
		bool result() {return a < b;}


	private:
		bool sorted;
}