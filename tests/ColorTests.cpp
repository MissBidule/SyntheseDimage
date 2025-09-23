#include "ColorTests.hpp"

void ColorTests::launchTests() {
    {//getter setter
        Color purple(1, 0, 1);
        
        assert(purple.r() == 1);
        assert(purple.g() == 0);
        assert(purple.b() == 1);

        purple.r(0.7f);
        purple.g(0.2f);
        purple.b(0.65f);
        assert(purple.r() == 0.7f);
        assert(purple.g() == 0.2f);
        assert(purple.b() == 0.65f);
    }

    {//copy constructor
        Color red1(1, 0.2, 0.3);
        Color red2(red1);
        
        assert(red2.r() == red1.r());
        assert(red2.g() == red2.g());
        assert(red2.b() == red2.b());
    }

    endTest();
}