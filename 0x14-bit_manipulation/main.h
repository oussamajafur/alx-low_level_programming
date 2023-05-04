#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *m);
void print_binary(unsigned long int o);
int get_bit(unsigned long int o, unsigned int index);
int set_bit(unsigned long int *o, unsigned int index);
int clear_bit(unsigned long int *o, unsigned int index);
unsigned int flip_bits(unsigned long int o, unsigned long int c);
int _atoi(const char *j);
int _putchar(char i);
int get_endianness(void);

#endif
