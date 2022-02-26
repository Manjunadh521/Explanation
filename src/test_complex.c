#include "complex.h"
#include "unity.h"

void setUp(){

}
void tearDown(){

}

void test_a3_b3 (void){
    TEST_ASSERT_EQUAL_FLOAT(125.000000,a3_b3(2,3));
}

void test_S_a3_b3 (void){
    TEST_ASSERT_EQUAL_FLOAT( -15625.000000,S_a3_b3(23,48) );
    TEST_ASSERT_EQUAL_FLOAT( -125.000000,S_a3_b3(3.3,8.3) );
   
}
void test_a4_b4(void){
    TEST_ASSERT_EQUAL_FLOAT( 25411680.000000,a4_b4(23,48) );
    TEST_ASSERT_EQUAL_FLOAT( 18106.396484 ,a4_b4(3.3,8.3));
   
}
void test_a5_b5(void){
    TEST_ASSERT_EQUAL_FLOAT(1804229376.000000 , a5_b5(23,48) );
    TEST_ASSERT_EQUAL_FLOAT( 210034.203125, a5_b5(3.3,8.3) );
    
}




 int main (void){
     UNITY_BEGIN();


     RUN_TEST(test_a3_b3);
     RUN_TEST(test_S_a3_b3);
     RUN_TEST(test_a4_b4);
     RUN_TEST(test_a5_b5);


     return UNITY_END();
 }