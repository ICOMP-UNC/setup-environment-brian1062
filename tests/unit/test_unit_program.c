#include <logic.h>
#include <unity.h>

/**
 * @file test_unit_program.c
 * @brief Unit tests for the functions in the logic module.
 */

/**
 * @brief Test for the add function.
 */
void test_logic_add(void)
{
    TEST_ASSERT_EQUAL(5, add(2, 3));
    TEST_ASSERT_NOT_EQUAL(5, add(2, 5));
}

/**
 * @brief Test for the subtract function.
 */
void test_logic_sub(void)
{
    TEST_ASSERT_EQUAL(3, sub(6, 3));
    TEST_ASSERT_NOT_EQUAL(4, sub(6, 3));
}
/**
 * @brief Test for the multiply function.
 */
void test_logic_mul(void)
{
    TEST_ASSERT_EQUAL(9, mul(3, 3));
    TEST_ASSERT_NOT_EQUAL(6, mul(3, 3));
}
/**
 * @brief Test for the divide function.
 */
void test_logic_div(void)
{
    TEST_ASSERT_EQUAL(3, div(9, 3));
    TEST_ASSERT_NOT_EQUAL(4, div(9, 3));
}

/**
 * @brief Set up function.
 *
 * This function is called before each test case.
 */
void setUp(void)
{
}
/**
 * @brief Tear down function.
 *
 * This function is called after each test case.
 */
void tearDown(void)
{
}

/**
 * @brief Main function.
 *
 * This function runs all the unit tests and returns the result.
 *
 * @return The result of the unit tests.
 */
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_logic_add);
    RUN_TEST(test_logic_sub);
    RUN_TEST(test_logic_mul);
    RUN_TEST(test_logic_div);
    return UNITY_END();
}
