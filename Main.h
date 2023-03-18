#ifndef _MAIN_H_
#define _MAIN_H_
/*---------- Include Files -------------*/
#include <stdio.h>
#include "Queue.h"
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
/*------------- Variables --------------*/
u8 Course_ID;
/*-------------- Define ----------------*/
#define True             1
#define False            0
/*------------- Type Defs --------------*/
typedef enum 
{
     Operation_Done      =1,
     No_Students         =2,
} DataBase_Status; 
/*----------- Functins To Use ---------*/

DataBase_Status Print_All_Students(queue_t *Data_Base);
DataBase_Status Course_ID_Search(queue_t *Data_Base);
DataBase_Status Find_Student(queue_t *Data_Base);
DataBase_Status Add_Student(queue_t *Data_Base);
void Check_Course_ID(students_t Student_Data);
void Print_Student(students_t Student_Data);
#endif
/********************************************************************
 *  END OF FILE: Main.h
********************************************************************/