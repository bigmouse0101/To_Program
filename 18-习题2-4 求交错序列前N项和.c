本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。

输入格式: 输入在一行中给出一个正整数N。

输出格式: 在一行中输出部分和的值，结果保留三位小数。

输入样例:
5
输出样例:
0.917

#include<stdio.h>
int main()
{
	int d,i,N,f,z;
	double item,sum;
	scanf("%d",&N);
        //循环变量赋初值!!!
	item=1.0;
	sum=0;
	d=1;
	f=1;
	z=1;
	for(i=1;i<=N;i++){
            //sum要在最前面!!!
	    sum=sum+item;
            //分母+2，变号，分子+1，并计算item的值，为下一次循环做准备。
            d=d+2;
            f=-f;
            z=z+1;
	    //item是浮点型 
	    item=z*f*1.0/d;
	}
	printf("%.3f\n",sum);
	return 0; 
}
//嗯嗯嗯其实跟之前几道题也都大同小异的
