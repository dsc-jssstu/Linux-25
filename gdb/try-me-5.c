#include <stdio.h>

int
main()
{
  FILE *pfile;
  int ch;

  puts("Open the FILE.TXT file ...");

  pfile = fopen("FILE.TXT", "r");

  /* you should check if the file pointer is valid, but we skipped that */

  puts("Now display the contents of FILE.TXT ...");

  while ((ch = fgetc(pfile)) != EOF) {
    printf("<%c>", ch);
  }

  fclose(pfile);

  /* done */

  puts("Ok");
  return 0;
}
