/* Test the `vreinterpretQs16_p8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vreinterpretQs16_p8 (void)
{
  int16x8_t out_int16x8_t;
  poly8x16_t arg0_poly8x16_t;

  out_int16x8_t = vreinterpretq_s16_p8 (arg0_poly8x16_t);
}

/* { dg-final { cleanup-saved-temps } } */
