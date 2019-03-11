#include <stdio.h>      /* printf, fopen */
#include <stdlib.h>     /* exit, EXIT_FAILURE */

int main ()
{
  FILE * pFile;
  pFile = fopen ("myfile.txt","r");
  if (pFile==NULL)
  {
    printf ("Error opening file");
    abort();
  }
  else
  {
    /* file operations here */
  }
  return 0;
}
