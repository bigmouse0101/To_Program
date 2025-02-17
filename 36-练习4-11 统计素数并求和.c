// 本题要求统计给定整数M和N区间内素数的个数并对它们求和。

// 输入格式: 输入在一行中给出两个正整数M和N（1≤M≤N≤500）。

// 输出格式: 在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。

// 输入样例:
// 10 31
// 输出样例:
// 7 143

#include<stdio.h>
int main()
{
	int count=0,m,n,i,j,s=0,f=0;
	scanf("%d %d",&m,&n);
	if(m==1){
		m=2;
	}
	for(i=m;i<=n;i++){
		f=0; 
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				f=1;
				break;
			}
		}
		if(f==0){
			count++;
			s+=i;
		} 
	}
	printf("%d %d",count,s);
}
//注意每一次外循环进行之前都要重新将f赋零；另，j的上限控制到i/2就没毛病（很多书上会控制到根号i，对于比较小的数没必要，如果数的范围比较大，还是控制到根号i好，不然要超时了...）
//AI果然是个好东西...之前一直想关于程序中除数（j）的大小控制问题，没想到前几天拿两个AI写都是把for循环里语句二写成“j*j<=i”，不用写sqrt，也不用加math的头文件，果然之前的思维还是被课本禁锢了...
