#include <iostream>
#include "utilities.h"

void print_vector(int8x16_t v)
{
    int8_t v_char[16];
    vst1q_s8(v_char, v);
    for (int i = 0; i < 16; i++)
    {
        std::cout << (int)v_char[i] << " ";
    }
    std::cout << std::endl;
}