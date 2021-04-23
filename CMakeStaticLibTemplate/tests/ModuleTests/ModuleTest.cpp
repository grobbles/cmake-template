#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>

#include "Math.hpp"

using namespace std;

TEST(ModuleTest, test_example) {
    Math* math = new Math();
    cout << "4 - 3 = " << math->sub(4, 2) << std::endl;
    EXPECT_EQ(math->sub(4, 2), 2);
}
