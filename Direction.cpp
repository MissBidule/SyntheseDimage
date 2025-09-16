#include "basics.hpp"

Direction::Direction(float x, float y, float z) {
    data = Vec3<float>{x, y, z};
}

Direction::Direction(const Vec3<float> vector) {
    data = vector;
}

Direction Direction::operator+(Direction dir) const {
    return Direction(data + dir.data);
}