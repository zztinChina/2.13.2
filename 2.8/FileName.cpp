#include <stdio.h>  

int main() {
    int number;
    char character;

    // �Ӽ��̶�ȡһ������  
    printf("������һ��������");
    scanf_s("%d", &number);

    // ��ȡ�������ĵ�һ�����ֵ�ASCIIֵ  
    character = number + '0'; // ������ת��Ϊ��Ӧ���ַ�  

    // ������������ĵ�һ�����ֵ�ASCIIֵ  
    printf("������������ǣ�%d\n", number);
    printf("�������ĵ�һ�����ֵ�ASCIIֵ�ǣ�%d\n", (int)character);

    return 0;
}