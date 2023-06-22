#include <stdio.h>
    void main()
    {
        int sum=0,n;
        int array[5]={10,20,30,40,50};
        for (int i = 0; i < 5; i++){
            printf("%d \n",array[i]);
        }
        
        for (int i = 0; i < 5; i+=2){
            printf("%d ",array[i]);
            sum+=array[i];
        }
       
        printf("=%d",sum);
           
    }   
            
 