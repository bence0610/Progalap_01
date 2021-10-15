#include <gtest/gtest.h>

#define main main_0
#include "../src/sebesseg.c"
#undef main

float sebesseg(float t, int e);

TEST(Test, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(sebesseg(60, 60), 60, 0.001);
}

TEST(Test, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(sebesseg(60, 30), 120, 0.001);
}

TEST(Test, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(sebesseg(15, 12), 75, 0.001);
}

TEST(Test, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(sebesseg(12.6, 44), 189.0f/11, 0.001);
}

TEST(Test, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(sebesseg(57.42, 152), 34.452f/1.52f, 0.001);
}
