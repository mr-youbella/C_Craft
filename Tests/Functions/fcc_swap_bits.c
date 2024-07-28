#include "lib_tests.h"
#include "../../../ft_swap_bits.c"

void print_bits(unsigned char o)
{
    for (int i = 7; i >= 0; i--)
        printf("%d", (o >> i) & 1);
}

int	main(void)
{
    char o;
    int i = 0;
    const int test_count = 8;
    int pass = 0;
    char test[] = {0b01000001, 0b01101010, 0b11110000, 0b01011010, 0b00000000, 0b11111111, 0b11011100, 0b10000001};
    char print_test[][9] = {"01000001", "01101010", "11110000", "01011010", "00000000", "11111111", "11011100", "10000001"};
    char result[] = {0b00010100, 0b10100110, 0b00001111, 0b10100101, 0b00000000, 0b11111111, 0b11001101, 0b00011000};
    char print_result[][9] = {"00010100", "10100110", "00001111", "10100101", "00000000", "11111111", "11001101", "00011000"};

    while (i < test_count)
    {
        usleep(200000);
        o = ft_swap_bits(test[i]);
        if (o == result[i])
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
        {
            printf(ansi_red "---------------------\n%d - Fault\nTest: %s\nExpected: %s\nbut got: " , i + 1, print_test[i], print_result[i]);
            print_bits(o);
            printf("\n---------------------\n" ansi_default);
        }
        i++;
    }
    pass_or_fail(test_count, pass, "swap_bits", 4);
}