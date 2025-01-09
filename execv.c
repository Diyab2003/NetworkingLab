#include<unistd.h>

int main() {
  char *args[]={"./sample",NULL};
  execv(args[0],args);
  }
