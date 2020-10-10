#include <stdio.h>

int is_simple(int number)
{
	int check = 0;                 //проверка число на простое.
  if( number>1 )
  {
    for( int i=2 ; check=0 , i<number ; i++ )
    {
      int j=0;   
        if( number%i==0 )
        {
          check = 1 ;
          printf( "Число  сложное\n" );
          break;
        }
        else
        {
          check = 0;
        }      
      j++;
    }
  }
  if(check == 0)
  {
    printf( "Число простое\n" );
  }
  return number;
}

int main()
{
  int inp_num;
  printf("Enter Nummber \n");
  scanf ("%d" ,&inp_num );
  is_simple(inp_num);
  return 0;
}