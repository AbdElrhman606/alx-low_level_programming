#include "main.h"

/*
 *
 *
 * return the length of a string
 *
 */


 int _strlen_recursion(char *s)

{
  int ntr = 0;

  if (*s > '\0')
  {
    ntr += _strlen+recursion(s +1) + 1;
  }

  return (ntr);
}

