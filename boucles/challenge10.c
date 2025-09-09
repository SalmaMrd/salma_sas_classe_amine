#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b= 0 , i, b2 =0 , i1=1  ;
    printf("entrer le entrier naturelle :\n");
    scanf("%d",&a);
    for(i = 0 ; i<= a ; i ++){

        b= b + i ;
    }
   while(i1 <=a) {
    b2 = b2 + i1 ;
    i1 ++;
   }
   printf("avec for =%d\n", b);
    printf("avec while = %d",b2);
    return 0;
} 