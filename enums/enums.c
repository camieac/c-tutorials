#include <stdio.h>

enum colour {
    WHITE,
    BLACK,
    RED,
    YELLOW,
    PINK,
    GREEN,
    ORANGE,
    PURPLE,
    BLUE
};

static inline char *stringify(enum colour c){
    static const char *strings[] = {"WHITE", "BLACK", "RED", "YELLOW", "PINK", "GREEN", "ORANGE", "PURPLE", "BLUE"};
    return strings[c];
}

int main(){

  enum colour c = WHITE;

  printf("White: %d\n", WHITE);
  printf("White: %s\n", stringify(WHITE));
}
