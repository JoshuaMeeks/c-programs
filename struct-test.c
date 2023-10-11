#include <stdio.h>

struct car {
  char *name;
  float price;
  int speed;
};

struct car Porsche;

int main(void) {

 Porsche.name = "911";

  printf("%s\n", Porsche.name);
};
