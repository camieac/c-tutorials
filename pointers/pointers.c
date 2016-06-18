
#include <stdio.h>
#include <string.h>

void main(int argc, char *argv[]){

  /* Example 1
   * Print a character and it's address in multiple ways
   */
  char a;
  char *b;

  a = 'a';
  b = &a;
  //Print the value stored in a
  printf("%c\n", 'a');
  printf("%c\n", a);
  printf("%c\n", *b);
  printf("%p\n", *(&a));

  //Print the address where a is stored.
  printf("%p\n", b);
  printf("%p\n", &a);

  /* Example 2
   * Print a character array (string) and it's address in multiple ways
   */

  char * c = "Hello World";
  char **d = &c;

  //Print each charcter of the string individually
  int i;
  for(i = 0; i < strlen(c); i++){
    printf("%c", c[i]);
  }
  printf("\n");

  for(i = 0; i < strlen(c); i++){
    printf("%c", **d + i);
  }
  printf("\n");

  //Print the string in a oner
  printf("%s\n", c);
  printf("%s\n", *d);
  printf("%s\n", *(&c));



  /* Example 3
   * Print the alphabet
   */

   //Print the alphabet by using just ONE of the characters!
   //Charaters are represented as ASCII codes, and characters are defined in alphabetical order
   char e = 'a';
   for(i = 0; i < 26; i++){
     printf("%c",e + i);
   }
   printf("\n");

   for(e = 'a'; e <= 'z'; e++){
     printf("%c", e);
   }
   printf("\n");




   /* Example 4
    * Print the ASCI table
    * The ASCII table starts from 0 --> 255
    * Notice that not all the ASCII definitions are visible characters
    * Some are control characters.
    */

    for(i = 0; i <= 255; i++){
      printf("%02x: %c\n", i, (char)i);
    }

    /* Example 5
     * Reverse a string in-place
     * This is a common interview question!
     */

    //  char *original = "Hello World";
     //
    //  char *ptr, end_ptr, tmp;
    //  for(ptr = &original, end_ptr = &original; ptr != end_ptr; ptr++, end_ptr--){
    //    printf("%p %p\n", ptr, end_ptr);
    //    break;
    //  }


     //Another version
     char *str = "Reverse me";
     printf("Another reverse string implementation:\n");
     printf("Original: %s\n", str);
     char  *end_ptr;
  char tmp;
  /*Return if no string given*/
  if( str == NULL || !(*str) )
    return;
  /* *str points at the first character of str*/
  /* *end_ptr points to the last character in the string*/
  end_ptr = str + strlen(str) - 1;

  /* Reverse the characters */
  while( end_ptr > str ) {
    tmp = *str; //Set tmp to what str points at
    *str = *end_ptr; //Set str pointer to where end pointer points
    *end_ptr = tmp; //Set end pointer location to tmp
    str++; //Move str pointer right by 1
    end_ptr--; //Move end pointer left by 1
  }
  printf("Reversed: %s\n", str);

  }
