#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	if (argc >= 2){
		printf("%s is at %p", argv[1], getenv(argv[1]));
	}
	return 0;
}
