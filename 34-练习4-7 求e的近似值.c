// 自然常数 e 可以用级数 1+1/1!+1/2!+⋯+1/n!+⋯ 来近似计算。本题要求对给定的非负整数 n，求该级数的前 n+1 项和。

// 输入格式: 输入第一行中给出非负整数 n（≤1000）。

// 输出格式: 在一行中输出部分和的值，保留小数点后八位。

// 输入样例:
// 10
// 输出样例:
// 2.71828180

#include<stdio.h>
double fact(int a);
int main()
{
	int n;
	int i;
	double s=0;
	scanf("%d",&n);
	if(n>1000){
		printf("error");
	}
    //第一项看作0的阶乘，因此s=0，
	for(i=0;i<=n;i++){
		s+=1.0/fact(i);
	}
	printf("%.8f\n",s);
}
double fact(int a)
{
	int i;
	double result=1.0;
	for(i=1;i<=a;i++){
		result*=i;
	}
	return result;
}
//注意题干，“求该级数的前 n+1 项和”，即i从0到n都要计算
/*另外，“if(n>1000){
		printf("error");
	}”这个程序段其实没太大用，测试点一般也没有。因为前面有一道题的测试点貌似有，所以后面但凡碰到控制n大小的都被我写成这样了...*/
//类似这种题目主要还是注意两点：第一，循环变量赋初值；第二，sum要定义成double型
