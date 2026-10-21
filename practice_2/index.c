// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <stdbool.h>

bool status;

int max(int num1, int num2) {

int resulte;
    if( num1 > num2 ) {

        resulte = num1;
        printf("this is max value:%d\n,",resulte);
    } else if (num1 < num2) {
        resulte = num2;
        printf("this is max value:%d\n",resulte);
    } else if (num1 == num2 ){
        printf("this is equle:%d-%d\n",num1,num2);
    };


    status = true;
    
    return 0;
   
}

int main() {
 
int b = 0 ,c = 0 ;


if( true ) {
 scanf("%d%d",&b,&c);
  } else {
    printf("give a numbers");
  };

  
  
  if(b > 1) {
   max(b,c);
} else {
  printf("give a numbers");
};



};




       
       
    



