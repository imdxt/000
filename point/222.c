#include <stdio.h>
void zero_(int *);
int main(int argc, const char *argv[])
{
    int i;
    i=2;
    /** 
    * @brief 输入i的地址 改变指向的内容 
    * 
    * @param i 变量
    */
    zero_(&i);
    printf("%d\n",i);
    return 0;
}
void zero_(int *k)
{
    /** 
    * @brief 把k指向的内容清零
    */
    *k=0;
}
