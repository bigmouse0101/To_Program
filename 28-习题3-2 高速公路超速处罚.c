// 按照规定，在高速公路上行使的机动车，达到或超出本车道限速的10%则处200元罚款；若达到或超出50%，就要吊销驾驶证。请编写程序根据车速和限速自动判别对该机动车的处理。

// 输入格式: 输入在一行中给出2个正整数，分别对应车速和限速，其间以空格分隔。

// 输出格式: 在一行中输出处理意见：若属于正常行驶，则输出“OK”；若应处罚款，则输出“Exceed x%. Ticket 200”；若应吊销驾驶证，则输出“Exceed x%. License Revoked”。其中x是超速的百分比，精确到整数。 

// 输入样例1:
// 65 60
// 输出样例1:
// OK
// 输入样例2:
// 110 100
// 输出样例2:
// Exceed 10%. Ticket 200
// 输入样例3:
// 200 120
// 输出样例3:
// Exceed 67%. License Revoked

#include<stdio.h>
int main()
{
    double a,b,r;
    scanf("%lf%lf",&a,&b);
    r=(a-b)/b*100;
    if(r<10)
        printf("OK\n");
    else if(r>=10&&r<50)
        printf("Exceed %.0f%%. Ticket 200",r);
    else
        printf("Exceed %.0f%%. License Revoked",r);
        return 0;
}
//题干中虽然写a和b都是正整数，但是代码里要定义成double型，不然会报错。
