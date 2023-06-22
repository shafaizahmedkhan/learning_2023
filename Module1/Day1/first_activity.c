#include <stdio.h>
int find_max(int a,int b){
    if(a>b){
        printf("%d is greater than %d",a,b);
    }
    else{
        printf("%d is greater than %d",b,a);

    }
}

int main()
{
    int num1,num2;
    printf("Enter the first Number: \n");
    scanf("%d",&num1);

    printf("Enter the second Number: \n");
    scanf("%d",&num2);

    find_max(num1,num2);

    return 0;
}