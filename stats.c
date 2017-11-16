/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief To perform the mathematical analysis on the given data-set
 *
 * This file implements the main and others fuctions required 
 * to carry mathematical analysis like mean, median, minimum and maximum
 * on the given data-set and to print the results.
 *
 * @author Abhimanyu Pandit
 * @date 16-11-2017
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  unsigned char* pcDataPtr = test;

  
  

}

void vSort_array(unsigned char* pcArrayPtr, unsigned int u32size)
{

}

void vPrint_array(unsigned char* pcArrayPtr, unsigned int u32Size)
{

}

void vPrint_statistics(unsigned char* pcArrayPtr, unsigned int u32Size)
{

}

unsigned char mean(unsigned char* pcArrayPtr, unsigned int u32Size)
{

}

unsigned char median(unsigned char* pcArrayPtr, unsigned int u32Size)
{

}

unsigned char minimum(unsigned char* pcArrayPtr, unsigned int u32Size)
{

}

unsigned char maximum(unsigned char* pcArrayPtr, unsigned int u32Size)
{

}

//END OF THE FILE
