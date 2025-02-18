// 将一笔零钱换成5分、2分和1分的硬币，要求每种硬币至少有一枚，有几种不同的换法？
// 输入格式: 输入在一行中给出待换的零钱数额x∈(8,100)。
// 输出格式: 要求按5分、2分和1分硬币的数量依次从大到小的顺序，输出各种换法。每行输出一种换法，格式为：“fen5:5分硬币数量, fen2:2分硬币数量, fen1:1分硬币数量, total:硬币总数量”。最后一行输出“count = 换法个数”。

// 输入样例:13
// 输出样例:
// fen5:2, fen2:1, fen1:1, total:4
// fen5:1, fen2:3, fen1:2, total:6
// fen5:1, fen2:2, fen1:4, total:7
// fen5:1, fen2:1, fen1:6, total:8
// count = 4

#include<stdio.h>
int main()
{
    int x,total=0;
    int count=0;
    int fen5,fen2,fen1;
    scanf("%d",&x);
    //每种硬币至少有一种
    for(fen5=(x-3)/5;fen5>=1;fen5--){
        //3=1+2，(x-3)即为预留至少一个fen2和一个fen1后剩下的数额
        for(fen2=(x-5*fen5)/2;fen2>=1;fen2--){
            fen1=x-5*fen5-2*fen2;
            //输出语句要全部塞在fen2的for循环里，每一种情况都要输出 
            if(fen1>=1){
               total=fen5+fen2+fen1;
               printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",fen5,fen2,fen1,total);
               count++;
			}
        }   
    }
    printf("count = %d\n",count);
    return 0;
}
