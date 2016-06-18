
#include <stdio.h>
int main(int argc, char *argv[]){

  //The most common ways to print
  printf("Most basic print\n");
  fprintf(stdout, "Print to a particular output stream.\n");
  fprintf(stderr, "Print to stderr. Used for error messages"
                  " or abything you don't want on stdout.\n");

  //Printing variables
  char *char_array = "This is an array of characters.\n";
  printf("%s",char_array);

  int i = 81238;
  printf("value of i: %i\n", i);
  printf("value of i: %d\n", i);

  /* Coloured/animated prints
   * Using escape characters to format text.
   * You might want to have a look at the table supported formatting options:
   *
   */

   char *reset = "\033[00m";

   char *start_bold = "\033[01m";
   printf("Bold text --> %sBold text%s\n", start_bold, reset);

   char *blink = "\033[05m";
   char *blink_off = "\033[25m";
   printf("Blinking text --> %sBold text%s\n", blink, blink_off);

   char *crossed_out = "\033[29m";
   printf("Crossed out text --> %scrossed out%s\n", crossed_out, reset);

   /* Ok, all this is a bit of a pain. Is there an easier way?
    * Yes, we can define the above as macros so de don't need to look up
    * the escape sequences */

    #include"colours.h"

    printf("Now it's easy to format text: " BLUE "this is blue" RESET " | " GREEN "this is green" RESET " | " BOLD YELLOW "this is bold yellow!\n" RESET);

    /* But there is a better way of doing it, still!
     * Rather than defining all this ourselves, we can use an existing library!
     * The most popular one is ncurses, we'll use it below.
     */


     #include <curses.h> //The chances are you have this already installed, if not google it
     #include <stdlib.h> //Yup, we're getting serios now! This defines EXIT*
     #include <unistd.h> //We're using sleep() from here


     WINDOW *window;

     if ( (window = initscr()) == NULL ) {
 fprintf(stderr, "Error initialising ncurses.\n");
 exit(EXIT_FAILURE);
   }


   /*  Display "Hello, world!" in the centre of the
 screen, call refresh() to show our changes, and
 sleep() for a few seconds to get the full screen effect  */

   mvaddstr(13, 33, "Hello, world!");
   refresh();
   sleep(3);


   /*  Clean up after ourselves  */

   delwin(window);
   endwin();
   refresh();

   return EXIT_SUCCESS;



}
