#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=a+b;
    int dif=a-b;
    int mul=a*b;
    if (sum>dif&&sum>mul)
    {
        printf("%d",sum);
    }
    else if (mul>sum&&mul>dif)
    {
        printf("%d",mul);
    }
    else if (dif>mul&&dif>sum)
    {
      printf("%d",dif);
    }
    else{
        printf("%d",a+b); //when sum==mul==dif
    }
    
}