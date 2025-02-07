#include <stdio.h>
union{
  float a;
  unsigned int b;
}U1;
void main(void)
{
  int i;
  printf("Enter float to be converted:");
  scanf("%f", &U1.a);
  for(i=31; i>=0; i--){
    if(i==30 || i==22)
      printf(" ");
    if((U1.b>>i) & 0x01)
      printf("1");
    else
      printf("0");
  }
  printf("\n");
}
  
