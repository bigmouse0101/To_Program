// 本题要求编写程序,计算序列 1 - 1/4 + 1/7 - 1/10 + ... 的前N项之和。
// 输入格式:
// 输入在一行中给出一个正整数N。
// 输出格式:
// 在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后三位。题目保证计算结果不超过双精度范围。
// 输入样例:
// 10
// 输出样例:
// sum = 0.819

#include<stdio.h>
int main()
{
	int d,i,N,f;
	double item,sum;
	scanf("%d",&N);
    //循环变量赋初值
	item=1.0;
    sum=0;
    d=1;
    f=1;
	for(i=1;i<=N;i++){
        //sum要在最前面!!!
		sum=sum+item;
        d=d+3;
        f=-f;
		//item是浮点型 
		item=f*1.0/d;
	}
	printf("sum = %.3f",sum);
	return 0; 
}
//这个缩进也是个人才...罢了缩不缩不影响代码
