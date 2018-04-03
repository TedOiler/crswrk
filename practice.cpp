#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "This is -TedOiler -test ";
   const char s[2] = "-";
   char *token;                 // a pointer to the token, why?

   /* get the first token */
   token = strtok(str, s);      // the first token in the str array, until it finds a "-"

   /* walk through other tokens */
   while( token ) {             // and while token ISNOT empty, we keep printing the token and adding a new line
      printf( "%s\n", token );

      token = strtok(NULL, s);  // and then we set it as empty, so it will loop again.
   }

   return(0);
}
