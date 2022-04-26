/*Problem statements:
You are on a social networking site called twiblr.
In twiblr, you can follow at most 2×( the number of users following you )+100 users.
You are currently following B users, and A users are following you.
At most, how many extra users can you follow now?
*Constraints:
0≤A,B≤10000
B≤2×A+100
All values in input are integers.
*/
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",(2*a+100)-b);
    
}