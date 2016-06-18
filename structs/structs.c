#include <stdio.h>
#include <stdlib.h>

int main(){

  typedef struct {
    char* name;
    unsigned int age;
  } Person;

  Person p = {
    .name = "Cameron",
    .age = 21
  };

  printf("Name: %s\n", p.name);
  printf("Age: %d\n", p.age);

  Person *p2;
  p2 = malloc(sizeof(Person));
  p2->name = "Cameron";
  p2->age = 21;

  printf("Name: %s\n", p2->name);
  printf("Age: %d\n", p2->age);


  struct family {
    char *surname;
    Person *members;
  };

  struct family f;
  f.surname = "Harry";
  f.members = malloc(sizeof(Person)*3);
  f.members[0] = p;
  f.members[1] = *p2;
  f.members[2].name = "Moira";
  f.members[2].age = 34;

  int i;
  for(i = 0; i < 3; i++){
    printf("Name: %s\n", f.members[i].name);
    printf("Age: %d\n", f.members[i].age);
  }

  free(p2);
  return 0;
}
