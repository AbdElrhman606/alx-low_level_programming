#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates tow strings
 * 0s1 : pointer to first string.
 * 0s2: pointer to 2nd string.
 * @n: number of bytes from n2 to concatenate.
 *
 * return: pointer to space in memory containing concatenated string.
 */

char *string_nconcat(char *s1, char *s2,unsigned int n)
{

	char *str;
	unsigned int i , j , s1_length , s2_lenght;

	if(s1 == NULL)
		s1= "";
	if(s2 == NULL)
		s2= "";
	for(s1_length = 0 ; s1[s1_length] != '\0'; s1_length++ )
		;
        for(s2_length = 0 ; s2[s2_length] != '\0'; s2_length++ )
                ;

	str = malloc(s1_lenght + n + 1);
	if(str == NULL)
	{
          return (NULL);
	}
	
	for(i = 0; s1[i] != '\0'; i++)
		str[i] = si[i];

        for(j = 0; j < n; j++)
        {
         str[i] = s2[j];
	 i++;
	}

	str[i] = '\0';
	return (str);
}

