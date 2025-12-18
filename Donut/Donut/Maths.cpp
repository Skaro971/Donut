#include "Maths.h"
#include <cmath>

Vector2I::Vector2I(int _x, int _y) : x(_x), y(_y) {};

int Vector2I::Magnitude() const
{
    return static_cast<int>(std::sqrt(x * x + y * y));
}

int Vector2I::SqMagnitude() const
{
    return x * x + y * y;
}

Vector2I Vector2I::Normalize() const
{
    int magnitude = Magnitude();
    if (magnitude == 0)
    {
        // LOG Division par 0
        return *this;
    }
    return Vector2I(x / magnitude, y / magnitude);
}

Vector2I Vector2I::operator+(const Vector2I other) const
{
    return Vector2I(x + other.x, y + other.y);
}

Vector2I Vector2I::operator-(const Vector2I other) const
{
    return Vector2I(x - other.x, y - other.y);
}

Vector2I Vector2I::operator*(const Vector2I other) const
{
    return Vector2I(x * other.x, y * other.y);
}

Vector2I Vector2I::operator/(const Vector2I other) const
{
    return Vector2I(x / other.x, y / other.y);
}

Vector2I Vector2I::operator*(const int other) const
{
    return Vector2I(x * other, y * other);
}

Vector2I Vector2I::operator/(const int other) const
{
    return Vector2I(x / other, y / other);
}

bool Vector2I::operator==(const Vector2I other) const
{
    return x == other.x && y == other.y;
}

bool Vector2I::operator!=(const Vector2I other) const
{
    return x != other.x || y != other.y;
}

Vector2F::Vector2F(float _x, float _y) : x(_x), y(_y) {};

float Vector2F::Magnitude() const
{
    return std::sqrt(x * x + y * y);
}

float Vector2F::SqMagnitude() const
{
    return x * x + y * y;
}

Vector2F Vector2F::Normalize() const
{
    float magnitude = Magnitude();
    if (magnitude == 0)
    {
        //LOG Division par 0
        return *this;
    }
    return Vector2F(x / magnitude, y / magnitude);
}

Vector2F Vector2F::operator+(const Vector2F other) const
{
    return Vector2F(x + other.x, y + other.y);
}

Vector2F Vector2F::operator-(const Vector2F other) const
{
    return Vector2F(x - other.x, y - other.y);
}

Vector2F Vector2F::operator*(const Vector2F other) const
{
    return Vector2F(x * other.x, y * other.y);
}

Vector2F Vector2F::operator/(const Vector2F other) const
{
    return Vector2F(x / other.x, y / other.y);
}

Vector2F Vector2F::operator*(const float other) const
{
    return Vector2F(x * other, y * other);
}

Vector2F Vector2F::operator/(const float other) const
{
    return Vector2F(x / other, y / other);
}

bool Vector2F::operator==(const Vector2F other) const
{
    return x == other.x && y == other.y;
}

bool Vector2F::operator!=(const Vector2F other) const
{
    return x != other.x || y != other.y;
}


Vector3F::Vector3F(float _x, float _y, float _z) : x(_x), y(_y) {};

float Vector3F::Magnitude() const
{
    return std::sqrt(x * x + y * y + z * z);
}

float Vector3F::SqMagnitude() const
{
    return x * x + y * y + z * z;
}

Vector3F Vector3F::Normalize() const
{
    float magnitude = Magnitude();
    if (magnitude == 0)
    {
        //LOG Division par 0
        return *this;
    }
    return Vector3F(x / magnitude, y / magnitude, z / magnitude);
}

Vector3F Vector3F::operator+(const Vector3F other) const
{
    return Vector3F(x + other.x, y + other.y, z + other.z);
}

Vector3F Vector3F::operator-(const Vector3F other) const
{
    return Vector3F(x - other.x, y - other.y, z - other.z);
}

Vector3F Vector3F::operator*(const Vector3F other) const
{
    return Vector3F(x * other.x, y * other.y, z * other.z);
}

Vector3F Vector3F::operator/(const Vector3F other) const
{
    return Vector3F(x / other.x, y / other.y, z / other.z);
}

Vector3F Vector3F::operator*(const float other) const
{
    return Vector3F(x * other, y * other, z * other);
}

Vector3F Vector3F::operator/(const float other) const
{
    return Vector3F(x / other, y / other, z / other);
}

bool Vector3F::operator==(const Vector3F other) const
{
    return x == other.x && y == other.y && z == other.z;
}

bool Vector3F::operator!=(const Vector3F other) const
{
    return x != other.x || y != other.y || z != other.z;
}