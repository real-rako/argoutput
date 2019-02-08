#include <stdio.h>
/* In main is the code from the program. */
int main(int argc, char** argv) {
  /* Checks if there is 1 argument. */
  if(argc == 2) {
    printf("Het argument is: %s.\n", argv[1]);
  }
  /* Checks if there are more arhuments then 1. */
  else if(argc > 2) {
    printf("Te veel argumenten.\n");
  }
  /* Checks if there are 0 arguments in the program. */
  else{
    printf("Op zen minst 1 argument.\n");
  }
}
