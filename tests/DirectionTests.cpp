#include "DirectionTests.hpp"

void DirectionTests::launchTests() {
    {//getter setter
        Direction upRight(1, 1, 0);
        
        assert(upRight.x() == 1);
        assert(upRight.y() == 1);
        assert(upRight.z() == 0);

        assert(upRight.vector() == (Vec3f{1, 1, 0}));

        upRight.x(0.7f);
        upRight.y(0.65f);
        upRight.z(0.2f);
        assert(upRight.x() == 0.7f);
        assert(upRight.y() == 0.65f);
        assert(upRight.z() == 0.2f);
    }

    {//copy constructor
        Direction forwardLeft1(-1, 0, 1);
        Direction forwardLeft2(forwardLeft1);
        
        assert(forwardLeft2.x() == forwardLeft1.x());
        assert(forwardLeft2.y() == forwardLeft1.y());
        assert(forwardLeft2.z() == forwardLeft1.z());
    }

    {//+ operator
        Direction forwardLeft(-1, 0, 1);
        Direction upRight(1, 1, 0);

        Direction upForward = forwardLeft + upRight;
        assert(upForward.vector() == (Vec3f{0, 1, 1}));
    }

    endTest();
}
