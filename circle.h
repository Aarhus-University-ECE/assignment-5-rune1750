#pragma once
typedef struct point {
	int x;
	int y;
} point;

// 6.a
typedef struct cirle {
  // Assign the struct "point" to the pointer p
  int r;
  struct point p;

} circle;

void fiveCircles(circle c[]);
int circleIsValid(const circle* c);
void translate(circle* c, const point* p);