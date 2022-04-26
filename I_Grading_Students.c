#include<stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
        int b;
        scanf("%d",&b);
        int sum=b;
        while (1)
        {
            sum++;
            if (sum%5==0){
                break;
            }
        }
        
        
        if (abs(sum-b)<3&& b>=38)
        {
            printf("%d\n",sum);
        }
        else{
            printf("%d\n",b);
        }
        
    }
    
}