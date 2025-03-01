// 给定一批整数，分析每个整数的每一位数字，求出现次数最多的个位数字。例如给定3个整数1234、2345、3456，其中出现最多次数的数字是3和4，均出现了3次。

// 输入格式：输入在第1行中给出正整数N（≤1000），在第二行中给出N个不超过整型范围的非负整数，数字间以空格分隔。 

// 输出格式：在一行中按格式“M: n1 n2 ...”输出，其中M是最大次数，n1、n2、……为出现次数最多的个位数字，按从小到大的顺序排列。数字间以空格分隔，但末尾不得有多余空格。

// 输入样例：
// 3
// 1234 2345 3456
// 输出样例：
// 3: 3 4

#include<stdio.h>
int main ()
{
    int n,max=0,i,x;
    scanf("%d",&n);//输入第一行
    
    int a[1000],b[10]={0};//定义数组
    
    for(i=0;i<n;i++)//第二行输入
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)//依次分割数
    {
        if(a[i]==0)//将数字为0时单独拉出来
            b[0]++;//不然的话，就无法控制分割
        else
            while(a[i]>0)//当a[i]=0的时候，这个整数分割完毕
        {
            x=a[i]%10;
            b[x]++;
            a[i]/=10;
        }
    }
    for(i=0;i<10;i++)//i<10，因为b[i]只有10个数，从0到9。
    if(max<b[i])//找出0到9出现次数最多的一个，并输出次数
        max=b[i];
    printf("%d:",max);
    
    for(i=0;i<10;i++)//找到并输出出现次数最多的数
        if(b[i]==max)
            printf(" %d",i);
    return 0;
}
//代码是从CSDN（作者：卡西莫多~）里抄的。
