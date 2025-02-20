// 本题要求编写程序，求一个给定的m×n矩阵各行元素之和。

// 输入格式：输入第一行给出两个正整数m和n（1≤m,n≤6）。随后m行，每行给出n个整数，其间以空格分隔。

// 输出格式：每行输出对应矩阵行元素之和。

// 输入样例：
// 3 2
// 6 3
// 1 -8
// 3 12
// 输出样例：
// 9
// -7
// 15

#include<stdio.h>
int main()
{
    int m,n,i,j;
    int a[10][6];
    scanf("%d%d",&m,&n);
    if(m<1||n>6){
        printf("error");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            }
        }
    int sum=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum+=a[i][j];
        }
        printf("%d\n",sum);
        j=0;
        sum = 0;
    }
    return 0;
}
