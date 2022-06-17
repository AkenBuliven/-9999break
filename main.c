#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

  int a = 0;
  
  

  do
  {
    scanf ("%d", &a);
    if (a==-9999)
    {
      break;
    }
    printf("%d ", a);
  } while ( a != -9999);
  
  printf ("");
  
    return 0;
}

  