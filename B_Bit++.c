#include<stdio.h>
int main()
{
    int count,d=0;
    char a,b,c;
    scanf("%d",&count);
    // scanf("%d\n",&count); \n after the %d
    for (int i = 1; i <= count; i++)
    {
        // scanf(" %c%c",&a,&b); space before the %c
        scanf("\n%c%c%c",&a,&b,&c); 
        //here must be give an space before %c other wise it will not give
        //  the out put or we can give an \n after the count input or
        //  we can give \n before the input of a and b
        // if we don't give the space when we enter the 
        // value of count it will count the enter as first character 
        // and then this wil give no out put 
        if (a=='X'&&b=='+'&&c=='+')
        {
            d++;
        }
        if (a=='X'&&b=='-'&&c=='-')
        {
            d--;
        }
        if (a=='+'&&b=='+'&&c=='X')
        {
            ++d;
        }
        if (a=='-'&&b=='-'&&c=='X')
        {
            --d;
        }
       

    }
    printf("%d",d);
}



// to find the problem just search it by name 




