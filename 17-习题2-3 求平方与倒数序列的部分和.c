// 本题要求对两个正整数m和n（m≤n）编写程序，计算序列和m^2+1/m+(m+1)^2+1/(m+1)+⋯+n^2+1/n。

// 输入格式: 输入在一行中给出两个正整数m和n（m≤n），其间以空格分开。

// 输出格式: 在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围。

// 输入样例:
// 5 10
// 输出样例:
// sum = 355.845635

#include <stdio.h>
#include <math.h>
int main() {
   int m,n,i;
   double sum=0;
   scanf("%d %d",&m,&n);
   for(i=m;i<=n;i++){
   	sum += pow(i,2)+1.0/i;
   }
   printf("sum = %.6f",sum);
   return 0;
}
//这道题主要还是注意sum要定义成实型的
