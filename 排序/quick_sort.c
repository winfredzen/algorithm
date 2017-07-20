//
//  main.c
//  Algorithms
//
//  Created by wangzhen on 2017/7/20.
//  Copyright © 2017年 wz. All rights reserved.
//

#include <stdio.h>
//定义全局变量，这两个变量需要在子函数中使用
int a[100], n;
//打印数组
void printArr();

//快速排序
void quicksort(int left, int right)
{
    int i, j, t, temp;
    if (left > right) {
        return;
    }
    
    //temp保存的就是基准数
    temp = a[left];
    i = left;
    j = right;
    while (i != j) {
        //右边从右往左找，找小于temp的数
        while (a[j]>=temp && i<j) {
            j--;
        }
        //左边从左往右找，找大于temp的数
        while (a[i]<=temp && i<j) {
            i++;
        }
        //交换两个数在数组中的位置
        if (i<j) {//当i和j没有相遇时
            t = a[i];
            a[i] = a[j];
            a[j] = t;
            
            printArr();
            
        }
    }
    
    //将基准数归位
    a[left] = a[i];
    a[i] = temp;
    
    printArr();
    
    //递归，继续处理左边的
    quicksort(left, i-1);
    //递归，继续处理右边的
    quicksort(i+1, right);
    
    return;
    
}

void printArr()
{
    for (int i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return;
}

int main(int argc, const char * argv[]) {
    int i, j;
    printf("请输入数据的个数: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++) {
        printf("请输入第%d个数: ", i);
        scanf("%d", &a[i]);
    }
    quicksort(1, n);
    
    printf("从小到大的结果: \n");
    for (i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }
    
    getchar();getchar();
    
    return 0;
}
