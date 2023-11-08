#include "main.h"


/*
 *
 *
 * print string in reverse with recursion
 *
 */


 void _print_rev_recursion(char *s)
{
   
  if( *s > '\0')
  
  {
       
          _print_rev_recursion(*s + 1);
	  _putchar(*s);
  
  }

}
