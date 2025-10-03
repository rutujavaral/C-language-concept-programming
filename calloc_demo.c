#include<stdio.h>
#include<stdlib.h>

int main()
{
  int length=0;
  int *Arr=NULL;

  printf("Enter the no of elements:\n");
  scanf("%d",&length);
  //step 1 allocate the memory

  Arr=(int *)calloc(length , sizeof(int)); 
  if(Arr==NULL)
  {

      printf("Unable to allocate memory\n");
      
  }

  else

  {

     printf("memory gets successfully allocated\n");

  }
  //step 2:use the memory
  //step 3:free the memory
  free(Arr);

return 0;
} 