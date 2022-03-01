#include<icms.h>
#include<unity_internals.h>
#include<unity.h>
void setUp(){}
void tearDown(){}
void test_add(void){
    TEST_ASSERT_EQUAL(p,add(125, "Sonika", "Dragon"));
}
void test_view(void){
    TEST_ASSERT_EQUAL(p,view());
}
void test_search(void){
    TEST_ASSERT_EQUAL(f,search(-2));
    TEST_ASSERT_EQUAL(p,search(125));
}
void test_remove(void){
    TEST_ASSERT_EQUAL(p,remove(125));
}        
void test_issue(void){
    TEST_ASSERT_EQUAL(p,issue(125));
}
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_search);
    RUN_TEST(test_issue);
    RUN_TEST(test_remove);
    RUN_TEST(test_view);
    return UNITY_END();
}