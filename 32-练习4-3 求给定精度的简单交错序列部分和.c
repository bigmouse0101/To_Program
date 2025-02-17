// 本题要求编写程序，计算序列部分和 1 - 1/4 + 1/7 - 1/10 + ... 直到最后一项的绝对值不大于给定精度eps。

// 输入格式: 输入在一行中给出一个正实数eps。

// 输出格式: 在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围。

// 输入样例1:
// 4E-2
// 输出样例1:
// sum = 0.854457
// 输入样例2:
// 0.02
// 输出样例2:
// sum = 0.826310

#include<stdio.h>
#include<math.h>
int main()
{
    int n,f,d;
    double eps,s;
    scanf("%lf",&eps);
    s=0;
    d=f=1;
    while(fabs(f*1.0/d)>eps){
        s+=f*1.0/d;
        f=-f;
        d=d+3;
    }
    s=s+f*1.0/d;
    printf("sum = %.6f\n",s);
    return 0;
}
//对给定精度的求和问题，需要用while循环或者do-while循环；绝对值函数fabs（）；循环变量赋初值。
