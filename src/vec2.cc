#include "Vec2.h"

Vec2::Vec2() {}
Vec2::Vec2(float xin, float yin) : x(xin), y(yin) {}

const Vec2 Vec2::operator + (const Vec2 & other) {
  return Vec2(x + other.x, y + other.y);
}

const Vec2 Vec2::operator - (const Vec2 & other) const {
  return Vec2(x - other.x, y - other.y);
}

const Vec2 Vec2::operator * (const float scalar) const {
  return Vec2(x * scalar, y * scalar);
}

const float Vec2::length() const {
  return sqrtf((x * x) + (y*y));
}

const float Vec2::distance(const Vec2 & other) const {
  return (other - *this).length();
}


