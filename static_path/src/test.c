#include <stdio.h>
#include "max.h"
#include "add.h"
void main()
{  int a=15,b=3,c;
   c=add(a,b);
  printf("%d+%d=%d\n",a,b,c);
  c=max(a,b);
  printf("max of %d and %d is %d\n",a,b,c);
}
