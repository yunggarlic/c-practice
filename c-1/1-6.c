#include <stdio.h>

int main(){
  int c;
  while((c = getchar()) != EOF){
    printf("%d\n", c);
    printf("%d\n", c != EOF); 
  }
  
  printf("\n");
  printf("%d\n", EOF);
  return 0;
}
