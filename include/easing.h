#ifndef EASING_H
#define EASING_H

#include "vec2.h"

class Easing {
public:
  static const Vec2 lerp2D(const Vec2 & pos1, const Vec2 & pos2, const float t);
};

#endif
