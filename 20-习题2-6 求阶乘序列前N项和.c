// 本题要求编写程序，计算序列 1!+2!+3!+⋯ 的前N项之和。

// 输入格式:
// 输入在一行中给出一个不超过12的正整数N。

// 输出格式:
// 在一行中输出整数结果。

// 输入样例:
// 5
// 输出样例:
// 153

#include <stdio.h>
int main(void)
{
	int i,N;
	double sum,result=1;
	scanf("%d",&N);
	if(N<=0){
		printf("0"); 
	}
	sum=0;
	for(i=1;i<=N;i++){
        result*=i;
		sum=sum+result;/*求阶乘的和*/ 
	}
	printf("%.0f\n",sum);
	return 0;
}
//阶乘函数的返回结果是double型。
