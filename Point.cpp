#include "basics.hpp"

Point::Point(float x, float y, float z) {
    data = Vec3<float>{x, y, z};
}

Point::Point(const Vec3<float> vector) {
    data = vector;
}

void Point::translate(Direction dir) {
    data = data + dir.vector();
}