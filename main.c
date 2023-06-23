#include <stdio.h>

int is_there_digit_number(int digit_number){
  return (digit_number >= 100 && digit_number <= 999);
}//여러번 길게 쓰면 안 이쁘니까

int main(void){

 int num1 = 0;
 int num2 = 0;

 scanf("%d", &num1);
  if (!is_there_digit_number(num1)){
    printf("세 자리 숫자가 아닙니다. 다시 입력해주세요\n");
    return main();
  }//예외 처리
  
 scanf("%d",&num2);
  if(!is_there_digit_number(num2)){
     printf("세 자리 숫자가 아닙니다. 다시 입력해주세요\n");
    return main();
  }//예외 처리

  int digit[3] = {0};
  int number[3]= {0};
  
  digit[2] = num2 / 100; //백의 자리
  digit[1] = (num2 / 10) % 10; // 십의 자리
  digit[0] = num2 % 10; // 일의 자리

  for(int i=0; i<3; i++){
    number[i] = num1 * digit[i];
    printf("%d\n", number[i]);
  }

  printf("%d\n", num1*num2);
 
}