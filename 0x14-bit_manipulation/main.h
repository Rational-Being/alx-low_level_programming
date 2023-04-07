#ifdef __MAIN_H_
#define __MAIN_H__

unsigned int binary_to_uint(const char *b);
void print_brinary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get _endianness(void);

#endif
