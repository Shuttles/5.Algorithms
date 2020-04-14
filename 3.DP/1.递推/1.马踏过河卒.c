/*************************************************************************
	> File Name: 1.马踏过河卒.c
	> Author: 
	> Mail: 
	> Created Time: 六  4/11 23:35:31 2020
 ************************************************************************/

//此题详细分析见笔记！！
#include<stdio.h>

long long numberOfPaths(int BX, int BY, int CX, int CY) {
    //B表示目标点，C表示对方马的位置
    //首先计算出马控制点
	int x[8] = {1, 1, 2, 2, -1, -1, -2, -2};//横向位移
    int y[8] = {2, -2, 1, -1, 2, -2, 1, -1};//纵向位移
    int d[21][21];//用来记录是否是马控制点
    for (int i = 0; i < 21; i++) {//将d数组初始化为0
        for (int j = 0; j < 21; j++) {
            d[i][j] = 0;
        }
    }
    d[CX][CY] = 1;//1表示该点为马控制点
    for (int i = 0; i < 8; i++) {
        int tx = CX + x[i];//计算马控制点横坐标
        int ty = CY + y[i];//计算马控制点纵坐标
        if (tx < 0 || tx > 20 || ty < 0 || ty > 20) continue;
        d[tx][ty] = 1;//记录为马控制点
    }
    
    //下面计算路径条数
    long long nums[21][21];
    for (int i = 0; i <= BX; i++) {//先初始化为0
        for (int j = 0; j <= BY; j++) {
            nums[i][j] = 0;
        }
    }
    nums[0][0] = 1;
    for (int i = 0; i <= BX; i++) {
        for (int j = 0; j <= BY; j++) {
            if (i && (d[i][j] == 0)) {
                nums[i][j] += nums[i - 1][j];//递推公式
            }
            if (j && (d[i][j] == 0)) {
                nums[i][j] += nums[i][j - 1];//递推公式，
            }
        }
    }
    return nums[BX][BY];
}


int main() {
    int BX, BY, CX, CY;
    scanf("%d%d%d%d", &BX, &BY, &CX, &CY);
    printf("sum of loads = %lld\n", numberOfPaths(BX, BY, CX, CY));
    return 0;
}
