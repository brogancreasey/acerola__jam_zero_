#include "easing.h"

const Vec2 Easing::lerp2D(const Vec2 & pos1, const Vec2 & pos2, const float t) {
  return Vec2((1 - t) * pos1.x + t * pos2.x, (1 - t) * pos1.y + t * pos2.y);
}
