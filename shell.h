#include "shell.h"

int () {
  int status = shell("myscript.sh");
  printf("The exit status of the myscript.sh script is %d\n", status);
  return 0;
}
