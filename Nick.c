#include <stdio.h>
int main (void){
  for(int i = 0; i<=100; i++){ // counts from 0 to 100
   
    if(i%15==0){
      printf("fizzbuzz\n");// when the number is a multiple of both 3,5 prints fizzbuzz
   }    

    else if(i%3==0){
        printf("fizz\n");// when the number is a multiple 3 prints fizz
    }
      
     else if(i%5==0){
          printf("buzz\n");// when multiple of 5 print buzz
      }
      
       else{printf("%i\n", i);// prints the fizzbuzz program 
       }
      
 }   
}
