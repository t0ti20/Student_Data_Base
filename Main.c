/*****************************************
-----------     INCLUDES     -------------
*****************************************/
#include "Program.h"
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
queue_t Data_Base;
int main()
{
     Queue_Initialization(&Data_Base);
     u8 Flag=True;
     printf("-------------------- Welcome --------------------\n");
     while(Flag)
     {
          u8 Option;
          printf("-------------------------------------------------\n");
          printf("Please Chose What To Do :\n");
          printf("- 1) Add Student.\n- 2) Find Student.\n- 3) Count All Students.\n- 4) Delete Student.\n- 5) Update Student.\n- 6) Print All Students.\n- 7) Exit The Program.\n");
          printf("Option : ");
          scanf(" %c",&Option);
          fflush(stdin);fflush(stdout);
          switch (Option)
          {
               case '1':Add_Student(&Data_Base);break;
               case '2':while(1);break;
               case '3':while(1);break;
               case '4':while(1);break;
               case '5':while(1);break;
               case '6':while(1);break;
               case '7':Flag=False;break;
               default:printf("- Enter Valid Option !\n");break;
          }
     }
     return 0 ;
}
/********************************************************************
* Syntax          : void printall(students_t *pp) 
* Description     : Initialize The Stack
* Parameters (in) : (Ptr To Stack)
* Parameters (out): None
********************************************************************/
/*DataBase_Status Print_All_Students(students_t *Student_Data) 
{
     for(u8 i =0 ; i< 1 ; i++)
     {
          printf("Sudent ID:%d\n",Student_Data->ID); 
          printf("Fisrt Name:%s\n",Student_Data->F_Name) ;
          printf("Last Name:%s\n",Student_Data->L_Name);
          printf("GPA:%.2f\n",Student_Data->GPA);
          printf("Number of courses:%d\n",Student_Data->Courses_Number);
          printf("Courses_ID:");
          for(u8 i=0 ; i< Student_Data->Courses_Number;i++)
          {
               printf("%d ",Student_Data->Courses_ID[i]);
          }
     }
}*/
/********************************************************************
* Syntax          : void printall(students_t *pp) 
* Description     : Initialize The Stack
* Parameters (in) : (Ptr To Stack)
* Parameters (out): None
********************************************************************/
DataBase_Status Add_Student(queue_t *Data_Base)
{
     u8 Flag=Operation_Done;
     students_t Student_Data;
     printf("Enter Student ID: ");
     scanf("%ld",&Student_Data.ID);
     /*Check For ID*/
     printf("Enter First Name: ");
     scanf("%s",Student_Data.F_Name);
     printf("Enter Last Name: ");
     scanf("%s",Student_Data.L_Name);
     printf("Enter GPA: ");
     scanf("%f",&Student_Data.GPA);
     printf("Number of courses: ");
     scanf("%ld",&Student_Data.Courses_Number);
     Queue_Enqueue(Data_Base,Student_Data);
     return Flag;
}