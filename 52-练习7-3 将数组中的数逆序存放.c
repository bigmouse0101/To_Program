// 本题要求编写程序，将给定的n个整数存入数组中，将数组中的这n个数逆序存放，再按顺序输出数组中的元素。

// 输入格式: 输入在第一行中给出一个正整数n（1≤n≤10）。第二行输入n个整数，用空格分开。

// 输出格式: 在一行中输出这n个整数的处理结果，相邻数字中间用一个空格分开，行末不得有多余空格。

// 输入样例:
// 4
// 10 8 1 2
// 输出样例:
// 2 1 8 10

#include<stdio.h>
int main()
{
    int n,i,temp;
    int a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=(n-1)/2;i++){
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    printf("%d",a[n-1]);
    return 0;
}
//这道题本来应该没这么麻烦的...但是作为当时初学这的鼠鼠我来说，用这种方法写出来这些并且能拿到满分，感觉自己简直是个天才。
//更简单直接的方法就是再开一个数组（?应该没毛病吧） 倒序存进去。
//说到数组，其下标是从0开始的（即a[0]）。
