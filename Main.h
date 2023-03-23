#ifndef _MAIN_H_
#define _MAIN_H_
/*---------- Include Files -------------*/
#include <stdio.h>
#include "Queue.h"
#include<string.h>
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
/*------------- Type Defs --------------*/
typedef enum 
{
     Operation_Done      =1,
     No_Students         =2,
     Repeated_ID         =3,
     Name_Not_Found      =4,
     ID_Not_Found        =5, 
} DataBase_Status; 
/*------------- Variables --------------*/
u32 Global_Match =0 ; 
u32 Global_ID;
u8  Global_F_Name[30];  
u8 Global_Course_ID;
DataBase_Status Global_Flag;
/*-------------- Define ----------------*/
#define True                  1
#define False                 0
/*----------- Functins To Use ---------*/
DataBase_Status Print_All_Students(queue_t *Data_Base);
DataBase_Status Find_Student(queue_t *Data_Base);
DataBase_Status Search_By_Course_ID(queue_t *Data_Base);
DataBase_Status Search_By_ID(queue_t *Data_Base);
DataBase_Status Serch_By_First_Name(queue_t *Data_Base);
DataBase_Status Check_For_ID(queue_t *Data_Base);
DataBase_Status Add_Student(queue_t *Data_Base);
void Check_Course_ID(students_t Student_Data);
void Print_Student(students_t Student_Data);
void Get_ID(students_t Student_Data);
void Check_First_Name(students_t Student_Data);
void Check_ID (students_t Student_Data);
#endif
/********************************************************************
 *  END OF FILE: Main.h
********************************************************************/