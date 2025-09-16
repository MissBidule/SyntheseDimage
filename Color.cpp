#include "basics.hpp"

Color::Color(float r, float g, float b) {
    r = (r > 1 ? 1 : (r < 0 ? 0 : r));
    g = (g > 1 ? 1 : (g < 0 ? 0 : g));
    b = (b > 1 ? 1 : (b < 0 ? 0 : b));
    data = Vec3<float>{r, g, b};
}

Color::Color(const Vec3<float> vector) {
    float r = vector.x;
    float g = vector.y;
    float b = vector.z;
    r = (r > 1 ? 1 : (r < 0 ? 0 : r));
    g = (g > 1 ? 1 : (g < 0 ? 0 : g));
    b = (b > 1 ? 1 : (b < 0 ? 0 : b));
    data = Vec3<float>{r, g, b};
}
