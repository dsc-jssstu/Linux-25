#include <stdio.h>
#include <stdlib.h>

int
main()
{
  int *array;

  puts("malloc an array ...");

  array = malloc(sizeof(int) * 5);

  if (array) {
    puts("malloc succeeded");

    puts("Free the array...");
    free(array);
  }

  puts("Free the array...");
  free(array);

  puts("Ok");
}
