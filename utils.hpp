#include <iostream>

template <typename t>
struct Vec3 {
    t x;
    t y;
    t z;
};

using Vec3f = Vec3<float>;
using Vec3i = Vec3<int>;

template <typename t>
Vec3<t> operator+(Vec3<t> v1, Vec3<t> v2) {
    return Vec3<t>{v1.x+v2.x, v1.y+v2.y, v1.z+v2.z};
};

template <typename t>
std::ostream& operator<<(std::ostream& os, Vec3<t> v) {
    os << "{" << v.x << ";" << v.y << ";" << v.z << "}";
    return os;
};

template <typename t>
Vec3<t> operator-(Vec3<t> v1, Vec3<t> v2) {
    return Vec3<t>{v1.x-v2.x, v1.y-v2.y, v1.z-v2.z};
};

template <typename t, typename u>
Vec3<t> operator*(Vec3<t> v, u a) {
    return Vec3<t>{v.x * a, v.y * a, v.z * a};
};

template <typename t>
Vec3<t> scalar(Vec3<t> v1, Vec3<t> v2) {
    return Vec3<t>{v1.x*v2.x, v1.y*v2.y, v1.z*v2.z};
};

template <typename t>
Vec3<t> vectorProduct(Vec3<t> v1, Vec3<t> v2) {
    return Vec3<t>{v1.y*v2.z - v1.z*v2.y, v1.z*v2.x - v1.x*v2.z, v1.x*v2.y - v1.y*v2.x};
};
