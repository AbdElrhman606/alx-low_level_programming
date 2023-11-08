#include "main.h"

/**
 *
 * return the pointer past star
 *
 */


char *move_past_star(char *s2)
{
   if(*s == '*')
	   return (move_past_star(s2 +1));
   else
	   return (s2);

}


int inception(char *s1, char *s2)
{
  int ret = 0;

  if (*s1 == 0)
	  return (0);
  if(*s1 == *s2)
	  ret += wildcmp(s1 + 1, s2 +1);
  ret += inception(s1 +1, s2);
  return(ret);
}

int wildcmp(char *s1, char *s2)
{
  int ret = 0;

  if( !*s1 && *s2 == '*' && !*move_past_star(2))
	  return (1);
  if(*s1 == *s2)
  {
     if(!*s2)
	     return (1);
     if(*s1 == *s2)
	     ret += wildcmp(s1 +1, s2+ 1);
     ret += inception(s1, s2);
     return (!!ret);


  }
   return(0);

}
