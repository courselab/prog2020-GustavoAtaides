/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{
  int pos, i, j, tamanho;
  char nome[MAX];

  tamanho = pos = strlen (s) - 1;

  while (s[pos] != ' ')
    pos--;

  for (i=pos + 1, j = 0; i < tamanho; i++, j++)
    nome[j] = s [i];

  nome [j++] = ',';
  nome [j++] = ' ';

  for (i=0; i<pos; i++, j++)
    nome[j] = s[i];

  for (i=0; i<=tamanho; i++)
    s[i] = nome[i];
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
