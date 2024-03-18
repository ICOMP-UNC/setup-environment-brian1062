#include <unity.h>
#include <logic.h>

void test_logic_add(void){
    TEST_ASSERT_EQUAL(5, add(2,3));
    TEST_ASSERT_NOT_EQUAL(5, add(2,5));   
}
void test_logic_sub(void){
    TEST_ASSERT_EQUAL(3, sub(6,3));
    TEST_ASSERT_NOT_EQUAL(4, sub(6,3));   

}
void test_logic_mul(void){
    TEST_ASSERT_EQUAL(9, mul(3,3));
    TEST_ASSERT_NOT_EQUAL(6, mul(3,3));   

}
void test_logic_div(void){
    TEST_ASSERT_EQUAL(3, div(9,3));
    TEST_ASSERT_NOT_EQUAL(4, div(9,3)); 
}

void setUp(void){
}
void tearDown(void){
}   

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_logic_add);
    RUN_TEST(test_logic_sub);
    RUN_TEST(test_logic_mul);
    RUN_TEST(test_logic_div);
    return UNITY_END();
}
