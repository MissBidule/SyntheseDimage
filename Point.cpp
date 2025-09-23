#include "basics.hpp"

Point::Point(float x, float y, float z) {
    data = Vec3<float>{x, y, z};
}

Point::Point(const Vec3<float> vector) {
    data = vector;
}

Point Point::translate(Direction dir) {
    return Point(data + dir.vector());
}