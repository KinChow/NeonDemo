#include <arm_neon.h>

void print_vector(int8x16_t v);
void print_vector(int16x8_t v);
void print_vector(int32x4_t v);
void print_vector(int64x2_t v);
void print_vector(uint8x16_t v);
void print_vector(uint16x8_t v);
void print_vector(uint32x4_t v);
void print_vector(uint64x2_t v);
void print_vector(float16x8_t v);
void print_vector(float32x4_t v);
void print_vector(float64x2_t v);

void print_vector(int8x8_t v);
void print_vector(int16x4_t v);
void print_vector(int32x2_t v);
void print_vector(int64x1_t v);
void print_vector(uint8x8_t v);
void print_vector(uint16x4_t v);
void print_vector(uint32x2_t v);
void print_vector(uint64x1_t v);
void print_vector(float16x4_t v);
void print_vector(float32x2_t v);
void print_vector(float64x1_t v);

void print_vector(int8x16x2_t v);
void print_vector(int16x8x2_t v);
void print_vector(int32x4x2_t v);
void print_vector(int64x2x2_t v);
void print_vector(uint8x16x2_t v);
void print_vector(uint16x8x2_t v);
void print_vector(uint32x4x2_t v);
void print_vector(uint64x2x2_t v);
void print_vector(float16x8x2_t v);
void print_vector(float32x4x2_t v);
void print_vector(float64x2x2_t v);

void print_vector(int8x8x2_t v);
void print_vector(int16x4x2_t v);
void print_vector(int32x2x2_t v);
void print_vector(int64x1x2_t v);
void print_vector(uint8x8x2_t v);
void print_vector(uint16x4x2_t v);
void print_vector(uint32x2x2_t v);
void print_vector(uint64x1x2_t v);
void print_vector(float16x4x2_t v);
void print_vector(float32x2x2_t v);
void print_vector(float64x1x2_t v);