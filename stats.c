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
  unsigned char ucMean,ucMedian,ucMin,ucMax;

  printf("The given array is :\n");
  vPrint_array(pcDataPtr,SIZE);

  vSort_array(pcDataPtr,SIZE);

  printf("The sorted array is :\n");
  vPrint_array(pcDataPtr,SIZE);

  ucMean = mean(pcDataPtr,SIZE);
  ucMedian = median(pcDataPtr,SIZE);
  ucMin = minimum(pcDataPtr,SIZE);
  ucMax = maximum(pcDataPtr,SIZE);

  vPrint_statistics("Minimum",ucMin);
  vPrint_statistics("Maximum",ucMax);
  vPrint_statistics("Mean",ucMean);
  vPrint_statistics("Median",ucMedian);

}

// @brief To sort the given array in descending order
void vSort_array(unsigned char* pcArrayPtr, unsigned int u32Size)
{
  int i,j;
  unsigned char cTempVar;
  
  for(j=0; j< u32Size-1; j++)
  {
    for(i=0; i< u32Size-1; i++)
    {
      if(*(pcArrayPtr+i) < *(pcArrayPtr+i+1))
      {
        cTempVar = *(pcArrayPtr+i);
        *(pcArrayPtr+i) = *(pcArrayPtr+i+1);
        *(pcArrayPtr+i+1) = cTempVar;   
      }
    }
  }
}

// @brief To print the given array on the standard IO
void vPrint_array(unsigned char* pcArrayPtr, unsigned int u32Size)
{
  int i,j;

  for(i=0; i<u32Size; i++)
  {
    j = i;
    if((j%10) == 0)
    {
      printf("\n");
    }
    printf("%c\t",pcArrayPtr[i]);   
  }
  printf("\n");
}

// @brief To print the result of various analysis made on the given char array
void vPrint_statistics(unsigned char* pcResultType, unsigned char ucResult)
{
  printf("%s\t %c\n",pcResultType,ucResult);
  printf("\n");
}

// @brief Calculates the mean of the given data-set
unsigned char mean(unsigned char* pcArrayPtr, unsigned int u32Size)
{
  unsigned int n, ucSum = 0;
  int i;
  
  n = u32Size;
  for(i=0; i<u32Size; i++)
  {
    ucSum = ucSum + (unsigned int)*(pcArrayPtr+i);
  }

  return (unsigned char) (ucSum/n);
}

//@brief Calculates the median of the given data-set
unsigned char median(unsigned char* pcArrayPtr, unsigned int u32Size)
{
  unsigned int ucRes;

  if((u32Size % 2) != 0)
  {
    ucRes = (unsigned int)*(pcArrayPtr+(u32Size/2));
  }
  else
  {
    ucRes = ((unsigned int)*(pcArrayPtr+(u32Size/2)-1) + (unsigned int)*(pcArrayPtr+(u32Size/2)))/2;
  }

  return (unsigned char)(ucRes);
}

// @brief Calculates the minimum of the given data-set
unsigned char minimum(unsigned char* pcArrayPtr, unsigned int u32Size)
{
  return pcArrayPtr[u32Size-1];
}

// @brief Calculates the maximum of the given data-set
unsigned char maximum(unsigned char* pcArrayPtr, unsigned int u32Size)
{
  return pcArrayPtr[0];
}

//END OF THE FILE
