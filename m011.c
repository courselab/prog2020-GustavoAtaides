/* m011.c - Count words.

   This program takes the name of an ASCII text file passed as a command 
   line argument, and outputs the number of words in this file. A word is 
   a sequence of alphabetic characters delimited by blanks. A sample text 
   file i011.txt is provided for convenience (should you desire to test with
   another text file, make sure it is in pure ASCII format, not UTF-8 or 
   other milti-byte format.

   E.g.

      command line    : m011 i011.txt
      expected output : 98

   Directions:

      Please, edit function wordcount();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USAGE "m011 <filename>\n"
#define MAX 2000
/* Return the number of words in ascii text file 'filename'.*/

int wordcount (char *filename)
{
  int i;
  int numPalavras;
  char linha[MAX];
  FILE *arquivo;

  arquivo = fopen (filename, "r");

  numPalavras = 0;

 while (fgets (linha, MAX, arquivo)){
    if (linha[0] != '\n'){
      for (i=0; i<strlen(linha); i++)
        if (linha[i]==' '){
            numPalavras++;
        }
          

      numPalavras++;
    }
  }


  fclose (arquivo);

  return numPalavras;
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int n;
  int g;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }
  
  n = wordcount (argv[1]);

  printf ("%d\n", n);
  
  return 0;
}
