/*************************************************************************
	> File Name: quick_sort.cpp
	> Author: 少年宇
	> Mail: 
	> Created Time: 2020年11月04日 星期三 19时04分29秒
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;





void quick_sort(int *arr, int n, int left, int right) {
    if (right <= left) return ;//一定要写<=
    int temp = arr[left];
    int l = left, r = right;
    while (l < r) {
        while (l < r && arr[r] > temp) r--;//我这么写必须是arr[r] >= temp而不是>，否则会死循环
        //事实上写>和>=是一样的！
        //最关键的是l < r而不是l <= r！！！
        if (l < r) {
            arr[l++] = arr[r];
        }
        while (l < r && arr[l] < temp) l++;
        if (l < r) {
            arr[r--] = arr[l];
        }
    }
    arr[l] = temp;
    quick_sort(arr, n, left, l - 1);
    quick_sort(arr, n, l + 1, right);//必须是l + 1，如果写l就错了！！！！！因为l这一位的数字已经归位了，不需要再排它！！！
    return ;
}


/*
int main() {
    srand(time(0));
    int arr[10] = {74, 57, 98, 82, 47, 32, 80, 66, 95, 19};
    for (int i = 0; i < 10; i++) {
        arr[i] = (rand() % 1000);
        //sleep(0.1);
    }
    output_arr(arr, 10);
    quick_sort(arr, 10, 0, 9);
    output_arr(arr, 10);

    return 0;
}*/
