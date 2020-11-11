/*************************************************************************
	> File Name: binary_search.cpp
	> Author: 少年宇
	> Mail: 
	> Created Time: 2020年11月11日 星期三 18时41分59秒
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>

int binary_search(int *arr, int n, int target) {
    int head = 0, tail = n - 1;
    while (head <= tail) {
        int mid = (head + tail) >> 1;
        if (arr[mid] == target) return mid;
        if (arr[mid] > target) tail = mid - 1;
        else head = mid + 1;
    }
    return -1;
}
