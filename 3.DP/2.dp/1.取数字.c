/*************************************************************************
	> File Name: 1.取数字.c
	> Author: 
	> Mail: 
	> Created Time: 一  4/13 22:49:40 2020
 ************************************************************************/

#include<stdio.h>

int pickMaxSum(int **nums, int length) {
    for (int i = 1; i < length; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                nums[i][j] += nums[i - 1][j];
            } else {
                nums[i][j] += (nums[i -1][j] > nums[i - 1][j - 1] ? nums[i - 1][j] : nums[i - 1][j - 1]);
            }
        }
    }
    int max = 0;
    for (int i = 0; i < length; i++) {
        if (nums[length - 1][i] <= max) continue;
        max = nums[length - 1][i];
    }
    return max;
}

int main() {
    int arr[50][50] = {0};
    int length = 0;
    scanf("%d", &length);
    for (int i = 0; i < length; i++) {
        for (int j = 0; j <= i; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d\n", pickMaxSum(arr, length));
    return 0;
}
