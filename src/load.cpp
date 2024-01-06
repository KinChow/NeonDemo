#include <arm_neon.h>
#include "utilities.h"

void demo_vld1q_type()
{
    int8_t ptr[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
    int8x16_t v = vld1q_s8(ptr);
    print_vector(v);
}