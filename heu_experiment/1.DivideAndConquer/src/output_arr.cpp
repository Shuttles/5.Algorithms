/*************************************************************************
	> File Name: output_arr.cpp
	> Author: 少年宇
	> Mail: 
	> Created Time: 2020年11月11日 星期三 20时03分09秒
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;


void output_arr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

