#include <stdio.h>
#include <math.h>

void findSum (int a, int b)
{
    printf("%d",a+b);
}

void findDiff (int a, int b)
{
    printf("%d",a-b) ;
}

void doDivision (int a, int b)
{
    float c=(float)a/b;
    printf("%.2f",c);
}

void doMultiplication (int a, int b)
{
    printf("%d",a*b);
}

void findPower (int a, int b)
{
    int c=pow(a,b);
    printf("%d",c);
}

void findSquareRoot ()
{
    int a;
    scanf("%d",&a);
    float c=sqrt(a);
    printf("%.2f",c);
}

void twoVar (char c)
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(c=='+')
    findSum(a,b);
    else if(c=='-')
    findDiff(a,b);
    else if(c=='/')
    doDivision(a,b);
    else if(c=='*')
    doMultiplication(a,b);
    else if(c=='^')
    findPower(a,b);
}

double loop ()
{
    char c;
    double nr, sum=0;
    int cnt=0;
    while(c!='!')
    {
        scanf("%lf%c",&nr,&c);
        sum+=nr;
        cnt++;
    }
    double average=sum/cnt;
    return average;
}

int main() {
    char c;
    printf("Enter operation (Enter 0 for square root). Enter 'a' to find the average of numbers. Enter 'a' to find the average of the numbers you enter.\n");
    scanf("%c",&c);
    if(c=='0')
    {
        findSquareRoot();
    }
    else if(c=='a')
    {
        printf("Enter '!' to indicate the end of sequence.\n");
        double avg=loop();
        printf("%.2lf",avg);
    }
    else
    {
        twoVar(c);
    }
    return 0;
}