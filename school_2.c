#include <stdio.h>

int four_times(int y){
  return(y % 4 == 0);
}

int hundred_times(int y){
  return (y % 100 == 0);
}

int four_hundred_times(int y){
  return (y%400 == 0);
}

int main(void) {

  int year = 0;

  scanf("%d", &year);

  if(four_times(year) && !hundred_times(year) || four_hundred_times(year)){
    //순수한(A만 있는거) A는 B 여집합과 A의 교집합 거기에 400의 배수도 고려 해야하니까 합집합
    printf("1");
  } else {
    printf("0");
  }
  
  return 0;
}