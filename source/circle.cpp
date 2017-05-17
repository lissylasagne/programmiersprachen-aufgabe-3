#include <iostream>
#include "circle.hpp"
#include <cmath>

	Circle::Circle(float a, Vec2 const& b, Color const& c):
		r{a}, mid{b}, color{c}{}

		float const Circle::getR() const
		{
			return r;
		}

		Vec2 const Circle::getMid() const
		{
			return mid;
		}


		bool Circle::is_inside(Vec2 const& v) const
		{
			if(((v.x - mid.x) * (v.x - mid.x) + (v.y - mid.y) * (v.y - mid.y)) > (r * r)) {
				return false;
			} else {
				return true;
			}
		}

		void Circle::setColor(Color const& c)
		{
			color.setColor(c.r, c.g, c.b);
		}


		bool Circle::operator<(Circle const& c) const
		{
			return (r < c.r);
		}

		bool Circle::operator>(Circle const& c) const
		{
			return (r > c.r);
		}
		
		bool Circle::operator==(Circle const& c) const
		{
			return (r == c.r);
		}



