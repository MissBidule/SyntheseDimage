#include "utils.hpp"
#include "tests/Vec3tests.hpp"
#include "tests/ColorTests.hpp"
#include "tests/DirectionTests.hpp"
#include "tests/PointTests.hpp"

int main() {
    Vec3i me{10, 20, 30};
    Vec3i dir{5, 0, 0};

    // Translate my position
    me = me + dir;
    std::cout << me << std::endl;

    Vec3Tests test1;
    test1.launchTests();
    std::cout << std::endl;
    ColorTests test2;
    test2.launchTests();
    std::cout << std::endl;
    DirectionTests test3;
    test3.launchTests();
    std::cout << std::endl;
    PointTests test4;
    test4.launchTests();
    std::cout << std::endl;

    return 0;
}