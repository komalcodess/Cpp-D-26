#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, flag;
    printf("Enter a number: ");
    scanf("%d",&num);
    i=2;
    while(i<num){
        if(num%i==0);{
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0){
        printf("The number is a prime number");
    }
    else{printf("The number is not a prime number");}
    return 0;
}
