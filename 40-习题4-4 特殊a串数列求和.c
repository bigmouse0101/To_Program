// 给定两个均不超过9的正整数a和n，要求编写程序求a+aa+aaa+⋯+aa⋯a（n个a）之和。

// 输入格式：输入在一行中给出不超过9的正整数a和n。
// 输出格式：在一行中按照“s = 对应的和”的格式输出。

// 输入样例：2 3
// 输出样例：s = 246

#include<stdio.h>
int main()
{
	int a,n,s=0,t=0;
    scanf("%d%d",&a,&n);
    for(int i=0;i<n;i++){
        t=t*10+a;
        s+=t;
    }
    printf("s = %d",s);
	return 0; 
}
