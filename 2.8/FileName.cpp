#include <stdio.h>  

int main() {
    int number;
    char character;

    // 从键盘读取一个整数  
    printf("请输入一个整数：");
    scanf_s("%d", &number);

    // 获取该整数的第一个数字的ASCII值  
    character = number + '0'; // 将数字转换为对应的字符  

    // 输出整数和它的第一个数字的ASCII值  
    printf("你输入的整数是：%d\n", number);
    printf("该整数的第一个数字的ASCII值是：%d\n", (int)character);

    return 0;
}