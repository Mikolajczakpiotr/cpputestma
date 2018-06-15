#include <stdio.h>
#include "mojkod.h"

int  * wynik(int array[5])
{
   int c, d, swap;
   int n = 5;
   
   
    for (c = 0 ; c < ( n - 1 ); c++)
    {
      for (d = 0 ; d < n - c - 1; d++)
      {
	if (array[d] > array[d+1]) /* For decreasing order use < */
	{
	  swap       = array[d];
	  array[d]   = array[d+1];
	  array[d+1] = swap;
	}
      }
    }
    
 
    
  return array;  
    
}