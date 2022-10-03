#include <malloc.h>
#include "circle.h"

// 6.b
void fiveCircles(circle c[]) {
  // Assign variables x, y, r to be same value as i
  for (int i = 0; 5 > i; i++) {
    c[i].p.x = i;
    c[i].p.y = i;
    c[i].r = i;
  }
}

// 6.c
int circleIsValid(const circle *c) {
  // Returns True or false if radius is positive or negative
  if (c->r > 0) {
    return 1;
  } else {
    return 0;
  }
}

// 6.d
void translate(circle *c, const point *p) {
  // Add geometric "point" to circle coordinates
  c->p.x = p->x + c->p.x;
  c->p.y = p->y + c->p.y;




