#include <stdio.h>
#include <stdlib.h>


int main() {
    int num, sum = 0;
    //Ū���r�����
    scanf("%d", &num);
    //�N����r�����X�A�קKfgets����Ū��
    getchar();
    //�ʺA�O����t�m
    char* ptr = (char*)malloc(sizeof(char) * num);
    //Ū���r��
    gets(ptr);
    for (int i = 0; i < num + 1; i++) {
        if (*(ptr + i) > '0' && *(ptr + i) <= '9')
            sum += *(ptr + i) - '0';
    }
    printf("%d", sum);
}