#include <stdio.h>
#include <string.h>

int
main()
{
  char name[10];                       /* Such as "Chicago" */
  int var1 = 1, var2 = 2;

  /* show initial values */

  printf("var1 = %d; var2 = %d\n", var1, var2);

  /* this is bad .. please don't use gets */

  puts("Where do you live?");
  gets(name);

  /* show ending values */

  printf("<%s> is length %d\n", name, strlen(name));
  printf("var1 = %d; var2 = %d\n", var1, var2);

  /* done */

  puts("Ok");
  return 0;
}
