#include "Vec3tests.hpp"
#include <sstream>

void Vec3Tests::launchTests() {

    { //== operator and = operator
        Vec3i vectori1{0,0,0};
        Vec3i vectori2{1,1,1};

        //equals to (int)
        assert(vectori1 == vectori1);
        assert(vectori1 != vectori2);

        vectori1 = vectori2;

        //assignment operation (int)
        assert(vectori1 == vectori2);

        Vec3f vectorf1{1.0f, 2.0f, 3.0f};
        Vec3f vectorf2{1.0f, 2.0f, 3.0f};
        Vec3f vectorf3{3.0f, 3.0f, 3.0f};

        //equals to (float)
        assert(vectorf1 == vectorf2);
        assert(vectorf1 != vectorf3);

        vectorf1 = vectorf3;

        //assignment operation (int)
        assert(vectorf1 == vectorf3);
        assert(vectorf1 != vectorf2);
    }

    {//<< operator
        std::ostringstream out;
        Vec3i vec{1, 2, 3};
        out << vec;
        assert( "{1;2;3}" == out.str() );
    }

    {//+ operator and - operator
        Vec3f vectorf1{1.2f, 4.0f, 0.0f};
        Vec3f vectorf2{1.3f, -5.1f, -3.0f};

        Vec3f vectorPlus = vectorf1 + vectorf2; 
        assert(vectorPlus == (Vec3f{vectorf1.x + vectorf2.x, vectorf1.y + vectorf2.y, vectorf1.z + vectorf2.z}));

        Vec3f vectorMinus = vectorf1 - vectorf2; 
        assert(vectorMinus == (Vec3f{vectorf1.x - vectorf2.x, vectorf1.y - vectorf2.y, vectorf1.z - vectorf2.z}));
    }
    
    {//* operator and / operator

    }

    {//dot product
        Vec3i vectoriSimple{1, 1, 1};
        Vec3i vectoriBis{2, 4, 4};

        assert(vectoriSimple.dot(vectoriBis) == 10);
        assert(vectoriBis.dot(vectoriBis) == 36);
    }

    {//cross product
        Vec3i vectori1{1, 2, 3};
        Vec3i vectori2{3, 4, 5};
        assert(vectori1.cross(vectori2) == (Vec3i{-2, 4, -2}));
    }

    {//norm
        Vec3i vectoriSimple{1, 0, 0};
        Vec3i vectoriBis{2, 4, 4};

        assert(vectoriSimple.norm() == 1);
        assert(vectoriBis.norm() == 6);
    }

    {//normalize
        Vec3i vectoriSimple{2, 0, 0};
        Vec3i vectoriBis{2, 2, 2};

        assert(vectoriSimple.normalize() == (Vec3f{1, 0, 0}));
        assert(vectoriBis.normalize() == (Vec3f{1, 1, 1}));
    }
    
    endTest();
    
}