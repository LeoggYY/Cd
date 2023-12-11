#include <stdio.h>
#include<stdlib.h>

int main() {
    // 第一天入住人數,結束日期, 人數計數器
    int S, D, counter;
    while (scanf("%d %d", &S, &D) != EOF) {
        counter = S;
        while (S < D)
        {
            counter ++;
            S += counter;
        }
        printf("%d\n", counter);
    }

}