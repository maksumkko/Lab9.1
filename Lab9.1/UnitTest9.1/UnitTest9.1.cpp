#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab9.1/sum.h"
#include "../Lab9.1/dod.h"
#include "../Lab9.1/var.h"
#include "../Lab9.1/sum.cpp"
#include "../Lab9.1/dod.cpp"
#include "../Lab9.1/var.cpp"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsVar;
using namespace nsSum;

namespace UnitTest91
{
    TEST_CLASS(UnitTest91)
    {
    public:

        TEST_METHOD(TestDodFunction)
        {
            nsVar::x = 2;
            nsVar::e = 1;

            sum();

            Assert::AreEqual(54.1541, nsVar::s, 0.0001);

        }
    };
}