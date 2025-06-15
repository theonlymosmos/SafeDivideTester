#include <gtest/gtest.h>
#include <stdexcept>
using namespace std;

// function for which we write unit tests
double divide(double num1, double num2) {
    if (num2 == 0) {
        return -1;  // Return -1 when dividing by zero (to make the test fail)
    }
    return num1 / num2;
}

// to test division of positive numbers
TEST(DivisionTest, ForPositiveNumbers) {
    EXPECT_DOUBLE_EQ(2.5, divide(5.0, 2.0)); // 5 / 2 = 2.5
}

// to test division of negative numbers
TEST(DivisionTest, ForNegativeNumbers) {
    EXPECT_DOUBLE_EQ(-2.5, divide(-5.0, 2.0)); // -5 / 2 = -2.5
}

// to test division of a positive and a negative number
TEST(DivisionTest, ForMixedNumbers) {
    EXPECT_DOUBLE_EQ(-2.0, divide(6.0, -3.0)); // 6 / -3 = -2
}

// to test division by zero (should return -1, but we make it fail by expecting 0)
TEST(DivisionTest, ForDivisionByZeroFailure) {
    EXPECT_DOUBLE_EQ(0.0, divide(100.0, 0.0));  // This will fail because the result should be -1
}

// main() function to run all tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}