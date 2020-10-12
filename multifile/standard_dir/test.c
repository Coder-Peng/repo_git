#include <stdio.h>
#include "other1.h"
#include "other2.h"
void main()
{  int a=15,b=3,c;
   printf("test multiple file compile!");
   c=add(a,b);
  printf("%d+%d=%d\n",a,b,c);
  c=sub(a,b);
  printf("%d-%d=%d\n",a,b,c);
}
