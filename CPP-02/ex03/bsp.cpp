#include "Point.hpp"

static Fixed   get_area_size(const Point a, const Point b, const Point c)
{
    Fixed size = 0;

    size = ((a.get_x() * (b.get_y() - c.get_y())) + 
            (b.get_x() * (c.get_y() - a.get_y())) +
            (c.get_x() * (b.get_y() - a.get_y()))) / 2;
    if (size >= Fixed(0))
        return (size);
    else
        return (size * Fixed(-1));
}

bool    bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed   area_size, r1, r2, r3;

    area_size = get_area_size(a, b, c);
    r1 = get_area_size(point, a, b);
    r2 = get_area_size(point, b, c);
    r3 = get_area_size(point, a, c);

    if (r1 == 0 || r2 == 0 || r3 == 0)
        return (false);
    else if (r1 + r2 + r3 == area_size)
        return (true);
    return (false);
}
