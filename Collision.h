#ifndef COLLISION_H 
#define COLLISION_H 

#include "CollideBox.h"

enum CollidingSide = {TOP, BOTTOM, LEFT, RIGHT, NONE};
bool CheckOverlap(CollideBox box1, CollideBox box2);

#endif
