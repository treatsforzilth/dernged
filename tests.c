#include <stdio.h>
#include "dernged.h"

int main(){
  int i;

  regenTable();
  for(i = 0; i < 10; i++){
    printf("%i, ", getRand());
  }
  printf("\n");
  for(i = 0; i < 10; i++){
    printf("%i, ", (int)getRandRange(800, 1000));
  }
}
