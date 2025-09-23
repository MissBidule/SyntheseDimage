#include "PointTests.hpp"

void PointTests::launchTests() {
    {//getter setter
        Point p1(3, 4, 2);
        
        assert(p1.x() == 3);
        assert(p1.y() == 4);
        assert(p1.z() == 2);

        assert(p1.vector() == (Vec3f{3, 4, 2}));

        p1.x(0.7f);
        p1.y(0.65f);
        p1.z(0.2f);
        assert(p1.x() == 0.7f);
        assert(p1.y() == 0.65f);
        assert(p1.z() == 0.2f);
    }

    {//copy constructor
        Point p1(-1, 0, 1);
        Point p2(p1);
        
        assert(p1.x() == p2.x());
        assert(p1.y() == p2.y());
        assert(p1.z() == p2.z());
    }

    {//translate
        Point M(1, 1, 0);
        Direction dir(1, 1, 1);

        Point Mprime = M.translate(dir);
        assert(Mprime.vector() == (Vec3f{2, 2, 1}));
    }

    endTest();
}