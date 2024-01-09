#include <stdio.h>
#include <stdlib.h>


int main() {
    int num, sum = 0;
    //讀取字串長度
    scanf("%d", &num);
    //將換行字元取出，避免fgets直接讀取
    getchar();
    //動態記憶體配置
    char* ptr = (char*)malloc(sizeof(char) * num);
    //讀取字串
    gets(ptr);
    for (int i = 0; i < num + 1; i++) {
        if (*(ptr + i) > '0' && *(ptr + i) <= '9')
            sum += *(ptr + i) - '0';
    }
    printf("%d", sum);
}