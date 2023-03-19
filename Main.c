/*****************************************
-----------     INCLUDES     -------------
*****************************************/
#include "Main.h"
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
queue_t Data_Base;
int main()
{
     u8 Flag=True;
     u8 Option;
     Queue_Initialization(&Data_Base);
     /*TEMP*/
     students_t Student_1={1,"ahm","qwe",3.1,"13"};
     students_t Student_2={2,"asd","gfd",4,"12"};
     students_t Student_3={3,"zxc","bvc",3.6,"23"};
     Queue_Enqueue(&Data_Base,Student_1);
     Queue_Enqueue(&Data_Base,Student_2);
     Queue_Enqueue(&Data_Base,Student_3);
     /*TEMP*/
     printf("-------------------------------------------------\n");
     printf("-------------------------------------------------\n");
     printf("-------------------- Welcome --------------------\n");
     while(Flag)
     {
          printf("-------------------------------------------------\n");
          printf("-------------------------------------------------\n");
          printf("Please Chose What To Do :\n");
          printf("- 1) Add Student.\n- 2) Find Student.\n- 3) Count All Students.\n- 4) Delete Student.\n- 5) Update Student.\n- 6) Print All Students.\n- 7) Exit The Program.\n");
          printf("Option : ");
          scanf(" %c",&Option);
          fflush(stdin);fflush(stdout);
          switch (Option)
          {
               case '1':Add_Student(&Data_Base);break;
               case '2':Find_Student(&Data_Base);break;
               case '3':while(1);break;
               case '4':while(1);break;
               case '5':while(1);break;
               case '6':Print_All_Students(&Data_Base);break;
               case '7':Flag=False;break;
               default:printf("- Enter Valid Option !\n");break;
          }
     }
     return 0 ;
}
/********************************************************************
* Syntax          : DataBase_Status Find_Student(queue_t *Data_Base)
* Description     : All Methods To Find Student
* Parameters (in) : (Ptr To Data_Base)
********************************************************************/
DataBase_Status Find_Student(queue_t *Data_Base)
{
     DataBase_Status Flag=True;
     u8 Option;
     while(Flag)
     {
          printf("-------------------------------------------------\n");
          printf("-------------------------------------------------\n");
          printf("Want To Search By :\n");
          printf("- 1) Student ID.\n- 2) Student First Name.\n- 3) Course ID.\n- 4) Back.\n");
          printf("Option : ");
          scanf(" %c",&Option);
          switch (Option)
               {
                    case '1':;Flag=False;break;
                    case '2':;Flag=False;break;
                    case '3':Course_ID_Search(Data_Base);Flag=False;break;
                    case '4':Flag=False;break;
                    default:printf("- Enter Valid Option !\n");break;
               }
     }
     return Flag;
}
/********************************************************************
* Syntax          : DataBase_Status Course_ID_Search(queue_t *Data_Base)
* Description     : Search By ID Function
* Parameters (in) : (Copy Of Data_Base)
********************************************************************/
DataBase_Status Course_ID_Search(queue_t *Data_Base)
{
     DataBase_Status Flag=Operation_Done;
     printf("-------------------------------------------------\n");
     printf("Enter Course ID : ");
     scanf(" %c",&Global_Course_ID);
     Queue_Traverse(Data_Base,Check_Course_ID);
     return Flag;
}
/********************************************************************
* Syntax          : void Check_Course_ID(students_t Student_Data)
* Description     : Check For Course ID
* Parameters (in) : (Copy Of Student Data)
********************************************************************/
void Check_Course_ID(students_t Student_Data)
{
     u8 *Index=Student_Data.Courses_ID;
     while (*Index)
     {
          if(*Index==Global_Course_ID)
          {
               Print_Student(Student_Data);
               break;
          }
          Index++;
     }
}
/********************************************************************
* Syntax          : void Print_Student(students_t Student_Data)
* Description     : Print One Student Function
* Parameters (in) : (Copy Of Student Data)
********************************************************************/
void Print_Student(students_t Student_Data)
{
     printf("--------------------------------\n");
     printf("Student ID: %ld\n",Student_Data.ID); 
     printf("Fisrt Name: %s\n",Student_Data.F_Name) ;
     printf("Last Name: %s\n",Student_Data.L_Name);
     printf("GPA: %.2f\n",Student_Data.GPA);
     printf("Number of courses:%s\n",Student_Data.Courses_ID);
     printf("--------------------------------\n");
}
/********************************************************************
* Syntax          : DataBase_Status Print_All_Students(queue_t *Data_Base) 
* Description     : Print All Student In Data Base
* Parameters (in) : (Ptr Of Data_Base)
********************************************************************/
DataBase_Status Print_All_Students(queue_t *Data_Base) 
{
     DataBase_Status Flag=Operation_Done;
     printf("-------------------------------------------------\n");
     Queue_Traverse(Data_Base,Print_Student);
     return Flag;
}
/********************************************************************
* Syntax          : DataBase_Status Check_For_ID(queue_t *Data_Base)
* Description     : Add Student To Data Base
* Parameters (in) : (Ptr Of Data_Base)
********************************************************************/
DataBase_Status Check_For_ID(queue_t *Data_Base)
{
     Global_Flag = Operation_Done;
     Queue_Traverse(Data_Base,Get_ID);
     return Global_Flag;
}
void Get_ID(students_t Student_Data)
{
     if(Student_Data.ID==Global_ID)Global_Flag=Repeated_ID;
}
/********************************************************************
* Syntax          : DataBase_Status Add_Student(queue_t *Data_Base)
* Description     : Add Student To Data Base
* Parameters (in) : (Ptr Of Data_Base)
********************************************************************/
DataBase_Status Add_Student(queue_t *Data_Base)
{
     DataBase_Status Flag=Operation_Done;
     students_t Student_Data;
     printf("-------------------------------------------------\n");
     printf("Enter Student ID: ");
     scanf(" %ld",&Student_Data.ID);
     Global_ID=Student_Data.ID;
     if(Check_For_ID(Data_Base)==Operation_Done)
     {
          printf("Enter First Name: ");
          scanf(" %s",Student_Data.F_Name);
          fflush(stdin);fflush(stdout);
          printf("Enter Last Name: ");
          scanf(" %s",Student_Data.L_Name);
          fflush(stdin);fflush(stdout);
          printf("Enter GPA: ");
          scanf(" %f",&Student_Data.GPA);
          fflush(stdin);fflush(stdout);
          printf("Number of courses: ");
          scanf(" %s",Student_Data.Courses_ID);
          fflush(stdin);fflush(stdout);
          Queue_Enqueue(Data_Base,Student_Data);
     }
     else
     {
          printf("You Have Entered Rebeated ID !\n");
          Flag=Repeated_ID;
     }
     return Flag;
}