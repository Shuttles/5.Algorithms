/*************************************************************************
	> File Name: main.cpp
	> Author: 少年宇
	> Mail: 
	> Created Time: 2020年11月11日 星期三 18时40分42秒
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "./quick_sort.h"
#include "./binary_search.h"
#include "./input.h"
#include "./output_arr.h"

using namespace std;


//输入是1KB 1MB 10MB
//int是4B即2的2次方，1KB是2的10次方，
//开256位的int数组是1KB 开262144位数组是1MB 2621440是10MB 
#define MAX_L 256
#define MAX_M 262144
#define MAX_N 2621440
int arr[MAX_N + 5];
int data[4] = {0, MAX_L, MAX_M, MAX_N};

int main() {
    cout << "数据量选择：按1选择1KB 按2选择1MB 按3选择10MB。\n";
    int data_op = 0;
    cin >> data_op;
    int real_len = data[data_op];
    init(arr, MAX_N, real_len);

    int op = 0;
    cout << "输入1进行快速排序，输入2进行二分查找:\n";
    cin >> op;
    switch (op) {
        case 1:
            quick_sort(arr, MAX_N, 0, real_len - 1);
            break;
        case 2:
            cout << "请输入你想找的数字， 范围在1 ~ 2621440之间\n";
            int target = 0;
            cin >> target;
            quick_sort(arr, MAX_N, 0, real_len - 1);
            int ind = binary_search(arr, real_len, target);
            cout << "您要查找的" << target << "在arr[" << ind << "]" << endl;
            break;
    }

    //output_arr(arr, real_len);
    return 0;
}
