// 输入一个非负整数n，生成一张3的乘方表，可调用幂函数计算3的乘方。

// 输入格式: 输入在一行中给出一个非负整数n。

// 输出格式: 按照幂的递增顺序输出n+1行，每行格式为“pow(3,i) = 3的i次幂的值”。题目保证输出数据不超过长整型整数的范围。

// 输入样例:
// 3
// 输出样例:
// pow(3,0) = 1
// pow(3,1) = 3
// pow(3,2) = 9
// pow(3,3) = 27

#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	double power;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		//pow函数输出为double型，转换成整数则写%.0f保留0位小数
		//若要转换为长整形（long int）则利用强制类型转换 
		power=pow(3,i);
		printf("pow(3,%d) = %.0f\n",i,power);
		
	}
	return 0;
 }
//scanf里面的取地址符千万别丢了...在Dev-C++里面丢了是不会报错的
