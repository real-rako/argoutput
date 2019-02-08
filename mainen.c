#include <stdio.h>
/* In main is the code from the program. */
int main(int argc, char** argv) {
  /* Checks if there is 1 argument. */
  if(argc == 2) {
    printf("The argument is: %s.\n", argv[1]);
  }
  /* Checks if there are more arhuments then 1. */
  else if(argc > 2) {
    printf("To many arguments.\n");
  }
  /* Checks if there are 0 arguments in the program. */
  else{
    printf("At least 1 argument.\n");
  }
}
