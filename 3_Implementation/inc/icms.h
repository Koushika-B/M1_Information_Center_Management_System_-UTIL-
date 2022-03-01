/**
 * @file icms.h
 * @author Koushika B 
 * @brief 
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ICMS_H__
#define __ICMS_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * @brief structure for Book Record
 */
typedef struct ic
{
    int t;
    char q[20];
    char r[20];
}book;
/**
 * @brief return type for funtions for unit testing
 */
typedef enum test_values
{
    p = 1,
    f = 0
}test_values;
/**
 * @brief function to find a book by its ID
 * @return test_values 
 */
test_values search(int id);
/**
 * @brief function to add new books to the library
 * @return test_values 
 */
test_values add(int id,char bname[],char aname[]);
/**
 * @brief funtion to denote discarded books
 * @return test_values 
 */
test_values remove(int id);
/**
 * @brief function to issue the books
 * @return test_values 
 */
test_values issue(int id);
/**
 * @brief function to view all the books
 * @return test_values 
 */
test_values view(void);
#endif
