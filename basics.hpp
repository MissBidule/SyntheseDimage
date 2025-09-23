#ifndef _BASICS_HPP_
#define _BASICS_HPP_

#include "utils.hpp"

class Color {
public :
    Color(float r, float g, float b);
    Color(const Vec3f vector);

    inline float r() const {return data.x;};
    inline float g() const {return data.y;};
    inline float b() const {return data.z;};
    inline void r(float red)    {data.x = red;};
    inline void g(float green)  {data.y = green;};
    inline void b(float blue)   {data.z = blue;};

private :
    Vec3f data;
};

class Direction {
public :
    Direction(float x, float y, float z);
    Direction(const Vec3f vector);

    inline float x() const {return data.x;};
    inline float y() const {return data.y;};
    inline float z() const {return data.z;};
    inline Vec3f vector() const {return data;};
    inline void x(float xCoord) {data.x = xCoord;};
    inline void y(float yCoord) {data.y = yCoord;};
    inline void z(float zCoord) {data.z = zCoord;};

    Direction operator+(Direction dir) const;

private :
    Vec3f data;
};

class Point {
public :
    Point(float x, float y, float z=0);
    Point(const Vec3f vector);

    inline float x() const {return data.x;};
    inline float y() const {return data.y;};
    inline float z() const {return data.z;};
    inline Vec3f vector() const {return data;};
    inline void x(float xCoord) {data.x = xCoord;};
    inline void y(float yCoord) {data.y = yCoord;};
    inline void z(float zCoord) {data.z = zCoord;};

    Point translate(Direction dir);

private :
    Vec3f data;
};

class Transmission {
private:
    Vec3f data;
};

#endif //_BASICS_HPP_