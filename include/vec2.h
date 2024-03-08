#ifndef VEC2_H
#define VEC2_H

class Vec2 {
  public:
    float x = 0;
    float y = 0;

    Vec2();
    Vec2(float xin, float yin);

    const Vec2 operator + (const Vec2 & other) const;
    const Vec2 operator - (const Vec2 & other) const;
    const Vec2 operator * (const float scalar) const;
    const float distance(const Vec2 & other) const;
    const float length() const;
};

#endif
