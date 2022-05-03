#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char **argv){

  if(argc == 1){
    ps(0);
  } else {
    ps(atoi(argv[1]));
  }

	exit();
}

