#include <unistd.h>

void ft_print_reverse_alphabet(void){
	char z;
	z = 122;
	while(z > 96){
		write(1, &z, 1);
		z--;
}
