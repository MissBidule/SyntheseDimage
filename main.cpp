#include "utils.hpp"

int main() {
    Vec3i me{10, 20, 30};
    Vec3i dir{5, 0, 0};

    // Translate my position
    me = me + dir;
    std::cout << me << std::endl;
    return 0;
}