/*************************************************************************
	> File Name: 2.杨辉三角.c
	> Author: 
	> Mail: 
	> Created Time: 日  4/12 22:47:09 2020
 ************************************************************************/

#include<stdio.h>

long long PascalTriangle(int row, int column) {
    long long num[50][50];
    for (int i = 0; i < 50; i++) {            /*初始化为0*/
        for (int j = 0; j < 50; j++) {
            num[i][j] = 0;
        }
    }

    num[0][0] = 1;
    for (int i = 1; i < row; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == i) {
                num[i][j] = 1;                /*边界条件之一*/
                continue;
            }
            num[i][j] += num[i - 1][j];       /*这两行是递推公式*/
            if (j - 1 >= 0) num[i][j] += num[i - 1][j - 1];
        }
    }

    return num[row - 1][column - 1];
}

int main() {
    int row, column;
    scanf("%d%d", &row, &column);
    printf("%lld\n", PascalTriangle(row, column));
    return 0;
}
