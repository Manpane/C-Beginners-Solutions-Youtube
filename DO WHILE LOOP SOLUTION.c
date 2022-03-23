#include<stdio.h>
int main(){
  int num = 98; 
  do{
    printf("%d \n",num);  // printing value of num and \n for new line
    num = num-2; // decreasing num by 2 (98-2 = 96)
  }while(num>0);// until the num is greater than 0
}
