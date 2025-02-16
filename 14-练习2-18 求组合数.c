// 本题要求编写程序，根据公式C 
// n
// m
//  = 
// m!(n−m)!
// n!算出从n个不同元素中取出m个元素（m≤n）的组合数。

// 建议定义和调用函数fact(n)计算n!，其中n的类型是int，函数类型是double。

// 输入格式: 输入在一行中给出两个正整数m和n（m≤n），以空格分隔。

// 输出格式: 按照格式“result = 组合数计算结果”输出。题目保证结果在double类型范围内。

// 输入样例:
// 2 7
// 输出样例:
// result = 21

#include<stdio.h>
double fact(int a);
int main()
{
	int i,m,n;
	double s;
	scanf("%d%d",&m,&n);
	s=fact(n)/(fact(m)*fact(n-m));
	printf("result = %.0f\n",s);
}   
double fact(int a)
{
	int i;
	double result=1.0;//循环变量赋初值 ！！！ 
	for(i=1;i<=a;i++){
		result=result*i;
	}
	return result;
}
//这个这个改for循环里面调换语句1 和 语句2(调换上下限)的时候一定要把i++(i--)改成i--(i++),不然指定出死循环，一直一直循环...
//函数声明后面要加分号；但定义的时候不能加分号。
