#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include <iostream>
#include "vec2.hpp"
#include "color.hpp"
#include "mat2.hpp"

struct Circle
{
	Circle(float a, Vec2 const& b, Color const& c);
	float const getR() const;
	Vec2 const getMid() const;
	bool is_inside(Vec2 const& v) const;
	void setColor(Color const& c);

	bool operator<(Circle const& c) const;
	bool operator>(Circle const& c) const;
	bool operator==(Circle const& c) const;

	float r;
	Vec2 mid;
	Color color;
	
};


#endif