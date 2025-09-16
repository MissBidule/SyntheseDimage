#include "utils.hpp"

int main() {
    Vec3<int> me{10, 20, 30};
    Vec3<int> dir{5, 0, 0};

    // Translate my position
    me = me + dir;
    std::cout << me << std::endl;
    return 0;
}