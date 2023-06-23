#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int n1 = 0;
  int ca[] = {0};
  //int sn0 =0, sn1 = 0, sn2=0;
  int sn[] = {0};
  char s_number[20];
  int num = 0, i;

  scanf("%d", &n1);
  scanf("%s", s_number);
  int strl = strlen(s_number);

  for (i = 0; s_number[i] != 0; i++) {
    sn[i] = s_number[i] - '0';
    printf("%d\n", sn[i]);
  }
  printf("%d\n", sn[0]);
  printf("%d\n", sn[1]);
  printf("%d\n", sn[2]);

  for (i = 0; s_number[i] != 0; i++){
    int set_ = strl - i - 1;
    
    ca[set_] = sn[set_]*n1;
  
    printf("%d %d %d\n", set_, sn[set_], ca[set_]);
    
  }

  /*

    sn0 = s_number[0] - '0';
    sn1 = s_number[1] - '0';
    sn2 = s_number[2] - '0';

    n2 = n1*sn0*100;
    n3 = n1*sn1*10;
    n4 = n1*sn2;

    int con = n2 + n3+ n4;


    printf("%d\n%d\n%d\n%d\n", n4, n3, n2, con);




  */

  return 0;
}