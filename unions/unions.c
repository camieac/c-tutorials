#include <stdio.h>
typedef struct {
  char *name;
  unsigned int age;
  char *breed;
} Dog;

typedef struct {
  char *name;
  unsigned int age;
} Person;

int main(){
  union hut {
    Person p;
    Dog d;
  };

  Person p = {
    .name = "Steph",
    .age = 23
  };

  Dog d = {
    .name = "Fudge",
    .age = 11
  };

  union hut hut;
  hut.p = p;
  printf("In the hut: %s\n", hut.p.name);
  printf("In the hut: %s\n", hut.d.name);

  hut.d = d;
  printf("In the hut: %s\n", hut.d.name);
  printf("In the hut: %s\n", hut.p.name);
}
