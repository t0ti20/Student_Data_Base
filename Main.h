#ifndef _MAIN_H_
#define _MAIN_H_
/*---------- Include Files -------------*/
#include <stdio.h>
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
/*------------- Type Defs --------------*/
typedef struct students_t{
     int ID ; 
     char f_name [30];
     char l_name [30];
     float GPA ; 
     int courses_num ; 
     int course_ID[5];
}students_t; 
typedef enum {false,true,ok} DataBase_Status; 
/*----------- Functins To Use ---------*/
void printall(students_t *) ;
#endif
/********************************************************************
 *  END OF FILE: Main.h
********************************************************************/