#pragma once

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include <string>
#include "Fixed.hpp"

class Point
{
    public:
    Point(void);
    Point(const Point& cpy);
    Point(const float x, const float y);
    ~Point();
    Point &operator=(const Point &src);
    const Fixed &get_x(void) const;
    const Fixed &get_y(void) const;
    private:
        const Fixed _x;
        const Fixed _y;
};

std::ostream	&operator<<(std::ostream &s, Point const p);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
