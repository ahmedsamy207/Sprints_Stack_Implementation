/* Author: Ahmed Samy Kamal*/
#ifndef STACK_H_
#define STACK_H_
/*- INCLUDES -----------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "Std_Types.h"
/*- CONSTANTS ----------------------------------------------*/
#define Null_Ptr (void*)0
#define Initial_Value 0

/*- ENUMS --------------------------------------------------*/
/* error status */
typedef enum EN_Error_t
{
    E_OK,
    E_NOK
}EN_Error_t;
/*- STRUCTS AND UNIONS -------------------------------------*/
/* node structure */
typedef struct
{
    uint8_t u8_data;
    struct node* pstr_next;
}node;

/*- FUNCTION DECLARATIONS ----------------------------------*/
EN_Error_t push(uint8_t u8_data);
uint8_t pull(void);
EN_Error_t printStack(void);
uint8_t* balancedParentheses(uint8_t* expression);

#endif // STACK_H_
