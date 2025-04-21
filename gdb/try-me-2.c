#include <stdio.h>
#include <stdlib.h>

int
main()
{
  int i;
  int numbers[5];
  int *array;

  /* test 1 */

  puts("This array has five elements (0 to 4)");

  /* initalize the array */
  for (i = 0; i < 5; i++) {
    numbers[i] = i;
  }

  /* oops, this goes beyond the array bounds: */
  for (i = 0; i < 10; i++) {
    printf("  numbers[%d] = %d\n", i, numbers[i]);
  }

  /* test 2 */

  puts("malloc an array ...");

  array = malloc(sizeof(int) * 5);

  if (array) {
    puts("This malloc'ed array also has five elements (0 to 4)");

    /* initalize the array */
    for (i = 0; i < 5; i++) {
      array[i] = i;
    }

    /* oops, this goes beyond the array bounds: */
    for (i = 0; i < 10; i++) {
      printf("  array[%d] = %d\n", i, array[i]);
    }

    free(array);
  }

  /* done */

  puts("Ok");
  return 0;
}
