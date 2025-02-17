// 已知函数e^x可以展开为幂级数1+x+x^2/2!+x^3/3!+⋯+x^k/k!+⋯。现给定一个实数x，要求利用此幂级数部分和求e^x的近似值，求和一直继续到最后一项的绝对值小于0.00001。

// 输入格式: 输入在一行中给出一个实数x∈[0,5]。

// 输出格式: 在一行中输出满足条件的幂级数部分和，保留小数点后四位。

// 输入样例:
// 1.2
// 输出样例:
// 3.3201

#include<stdio.h>
double fact(int n); 
int main()
{
	int i=1,n;
	double s=1,a=0.1,x;//a值要＞0.00001
	scanf("%lf",&x);
	while(a>=0.00001){
		a=pow(x,i)/(fact(i));
		s+=a;
        i++;
	}	
	s+=a;
	printf("%.4f\n",s);
}
double fact(int n)
{
	int i;
	double result;
	if(i=0){
		return 1;
	}
	result= 1;
	for(i=1;i<=n;i++){
		result*=i;
	}
	return result;
}
//说这种题吧，不定义函数也没问题，但是while语句进入要先判断条件，因此a的初值要大于0.00001；或者直接开一个死循环while（1），里面用if语句加break，a就不需要赋初值。
