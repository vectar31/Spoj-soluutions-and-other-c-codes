#include <cstdio>
#include <iostream>
int mod(char str[],int d)
{
    int r=0,i;
    for(i=0;str[i];i++)
    {
        r=10*r+(str[i]-'0');
        r=r%d;
    }
    return r;
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}
int main()
{
    int t,a;
    char str[255];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        scanf("%s",str);
        if(a==0)
            printf("%s\n",str);
        else if(str[0]=='0')
            printf("%d\n",a);
        else
        {
            printf("%d\n",gcd(a,mod(str,a)));
        }
    }
    return 0;
}
