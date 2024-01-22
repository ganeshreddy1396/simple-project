
#include "CppUTest/TestHarness.h"
#include "adder.h"

TEST_GROUP(Adder)
{
};

TEST(Adder, AddTwoNumbers)
{
    LONGS_EQUAL(8, add(5, 3));
}
