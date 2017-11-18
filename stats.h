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
 * @file stats.h
 * @brief This file declares all the global function used in stats.c file
 *
 * @author Abhimanyu Pandit
 * @date 16-11-2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief To sort the given array in descending order
 *
 * @param pcArrayPtr : Pointer to receive the array
 * @param u32size : holds the size of the pointer pcArratPtr
 *
 * @return No return
 */
void vSort_array(unsigned char* pcArrayPtr, unsigned int u32size);

/**
 * @brief To print the given array on the standard IO
 *
 * @param pcArrayPtr : Pointer to receive the array
 * @param u32size : holds the size of the pointer pcArratPtr
 *
 * @return No return
 */
void vPrint_array(unsigned char* pcArrayPtr, unsigned int u32Size);

/**
 * @brief To print the result of various analysis made on the given char array
 *
 * @param pcArrayPtr : Pointer to receive the array
 * @param u32size : holds the size of the pointer pcArratPtr
 *
 * @return No return
 */
void vPrint_statistics(unsigned char* pcResultType, unsigned char ucResult);

/**
 * @brief Calculates the mean of the given data-set
 *
 * @param pcArrayPtr : Pointer to receive the array
 * @param u32size : holds the size of the pointer pcArratPtr
 *
 * @return Returns mean of the given data-set
 */
unsigned char mean(unsigned char* pcArrayPtr, unsigned int u32Size);

/**
 * @brief Calculates the median of the given data-set
 *
 * @param pcArrayPtr : Pointer to receive the array
 * @param u32size : holds the size of the pointer pcArratPtr
 *
 * @return Returns median of the given data-set
 */
unsigned char median(unsigned char* pcArrayPtr, unsigned int u32Size);

/**
 * @brief Calculates the minimum of the given data-set
 *
 * @param pcArrayPtr : Pointer to receive the array
 * @param u32size : holds the size of the pointer pcArratPtr
 *
 * @return Returns minimum of the given data-set
 */
unsigned char minimum(unsigned char* pcArrayPtr, unsigned int u32Size);

/**
 * @brief Calculates the maximum of the given data-set
 *
 * @param pcArrayPtr : Pointer to receive the array
 * @param u32size : holds the size of the pointer pcArratPtr
 *
 * @return Returns maximum of the given data-set
 */
unsigned char maximum(unsigned char* pcArrayPtr, unsigned int u32Size);


#endif /* __STATS_H__ */
