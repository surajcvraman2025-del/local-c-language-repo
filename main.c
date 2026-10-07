#include <stdio.h>
int main(){


int A;
    int B;
    printf("welcome to suraj calculater\n");
    
    printf("type first number:");
    scanf("%d",&A);
    printf("type second number:");
    scanf("%d",&B);
    printf("type your opration:");
 int D; 
    char c;
    scanf(" %c",&c);
   
    switch (c) {
        case '+': 
        D =  A + B;
            printf("%d",D);
        break;
        
        case '-':
        D = A - B ;
        printf("%d",D);
        break;

        case '*':
        D = A * B ; 
        printf("%d",D);






        
    }
        
    
 




    

    return 0;












    
}