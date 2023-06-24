#include <stdio.h>

int positive_number(int number){
  return (number > 0 && number <= 1000);
}

int negative_number(int number){
  return (number < 0 && number >= -1000);
}

int exclusive_number(int number){
  return (number == 0 || number > 1000 || number < -1000);
}

int main(void) {
  int num1 = 0, num2 = 0;

  scanf("%d", &num1);
  scanf("%d", &num2);

  //예외처리
  if(exclusive_number(num1) || exclusive_number(num2)){
    return 0;
  } else { //해당되지 않는다면
  
  if(positive_number(num1) && positive_number(num2)){
    printf("1");
  } else if(negative_number(num1) && positive_number(num2)){
    printf("2");
  } else if(negative_number(num1) && negative_number(num2)){
    printf("3");
  } else if(positive_number(num1) && negative_number(num2)){
    printf("4");
  }

  }//종료 

    

  return 0;
}