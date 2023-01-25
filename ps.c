#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "stdbool.h"

int main(int argc, char *argv[])
{
   int pid1 = fork();
   if(pid1 > 0){
      int *hold =(int*)malloc(1000*sizeof(int));
      *hold = 3;
   }
   else if (pid1==0)
   {
      while (true)
      {
         //do nothing
      }     
   }  
   int pid2 = fork();
   if(pid2 > 0){
      int *hold2 =(int*)malloc(50*sizeof(int));
      *hold2 =3;
   }
   else if (pid2==0)
   {
      while (true)
      {
         //do nothing
      }     
   }  
   proc_dump();
   exit();
}   