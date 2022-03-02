#include"programm.h"
#include"unity.h"
void setUp()
{


}
void tearDown()
{

}
void test_scoreboard(void)
{
TEST_ASSERT_EQUAL_INT(scoreboard(333,3))
}
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_scoreboard)
    return UNITY_END();
}