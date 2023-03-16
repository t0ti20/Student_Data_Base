/*****************************************
-----------     INCLUDES     -------------
*****************************************/
#include "Main.h"
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
students_t info ={1,"Mohamed","Magdy",3.4,4,{1,5,8,7}};
int main()
{
     printall(&info);
     return 0 ;
}
/********************************************************************
* Syntax          : void printall(students_t *pp) 
* Description     : Initialize The Stack
* Parameters (in) : (Ptr To Stack)
* Parameters (out): None
********************************************************************/
void printall(students_t *pp) 
{
     for(int i =0 ; i< 1 ; i++)
     {
          printf("Sudent_ID:%d\n",pp->ID); 
          printf("Fisrt Name:%s\n",pp->f_name) ;
          printf("Last Name:%s\n",pp->l_name);
          printf("GPA:%.2f\n",pp->GPA);
          printf("Number of courses:%d\n",pp->courses_num);
          printf("Courses_ID:");
          for(int i=0 ; i< pp->courses_num;i++)
          {
               printf("%d ",pp->course_ID[i]);
          }
     }
}