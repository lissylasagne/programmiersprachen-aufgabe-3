#include <iostream>
#include "vec2.hpp"
#include "color.hpp"
#include "mat2.hpp"
#ifndef CIRCLE_HPP
#define CIRCLE_HPP

struct Circle
{
	Circle(float a, Vec2 const& b, Color const& c);
	float const getR() const;
	Vec2 const getMid() const;
	bool is_inside(Vec2 const& v) const;
	void setColor(Color const& c);

	Circle& operator<(Circle const& c);
	Circle& operator>(Circle const& c);
	Circle& operator==(Circle const& c);

	float r;
	Vec2 mid;
	Color color;
	
};


#endif