#ifndef BIT_SET_H
#define BIT_SET_H

  struct bits_t
{
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    unsigned char b2 : 1;
    unsigned char b3 : 1;
    unsigned char b4 : 1;
    unsigned char b5 : 1;
    unsigned char b6 : 1;
    unsigned char b7 : 1;
};

union bit_set{
  unsigned int num;
  struct bits_t bity[4];
};

#endif