  1 #include <stdio.h>
  2 #include <unistd.h>
  3 void ft_putchar(char c){
  4         write(1, &c, 1);
  5 }
