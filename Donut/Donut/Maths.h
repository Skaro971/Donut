#ifndef MATHS_H__
#define MATHS_H__

class Vector2I
{
public:
	int x, y;

	Vector2I() = default;
	Vector2I(int _x, int _y);

	int Magnitude() const;
	int SqMagnitude() const;
	Vector2I Normalize() const;

	Vector2I operator+ (const Vector2I other) const;
	Vector2I operator- (const Vector2I other) const;
	Vector2I operator* (const Vector2I other) const;
	Vector2I operator/ (const Vector2I other) const;
	Vector2I operator* (const int other) const;
	Vector2I operator/ (const int other) const;
	bool operator== (const Vector2I other) const;
	bool operator!= (const Vector2I other) const;
};

class Vector2F
{
public:
	float x, y;

	Vector2F() = default;
	Vector2F(float _x, float _y);

	float Magnitude() const;
	float SqMagnitude() const;
	Vector2F Normalize() const;

	Vector2F operator+ (const Vector2F other) const;
	Vector2F operator- (const Vector2F other) const;
	Vector2F operator* (const Vector2F other) const;
	Vector2F operator/ (const Vector2F other) const;
	Vector2F operator* (const float other) const;
	Vector2F operator/ (const float other) const;
	bool operator== (const Vector2F other) const;
	bool operator!= (const Vector2F other) const;
};

#endif // !MATHS_H__
