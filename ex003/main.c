#include <stdio.h>
#include <unistd.h>

int main() {
	write(1, "Hola\n", 4);	
	return 0;
}
