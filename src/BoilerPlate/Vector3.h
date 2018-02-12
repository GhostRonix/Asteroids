#pragma once
#ifndef _VECTOR3_H_
#define _VECTOR3_H_

#include <iostream>
#include "Vector2.h"

namespace Engine
{
	namespace Math
	{
		class Vector3
		{
		public:
			/*============================
			*		  STATIC
			============================*/
			static Vector3 origin;

			/*============================
			*			CTOR
			============================*/
			Vector3();
			Vector3(float);
			Vector3(float, float, float);
			Vector3(const Vector2&);

			/*============================
			*	  PUBLIC FUNCTIONS
			============================*/
			float Lenght() const;
			float SquaredLenght() const;
			Vector3 Normalize();

			/*============================
			*		OPERATORS
			============================*/
			Vector3& operator=(const Vector3&);
			Vector3& operator+=(const Vector3&);
			Vector3& operator-=(const Vector3&);
			Vector3& operator*=(const Vector3&);
			Vector3& operator/=(const Vector3&);
			Vector3 operator+(const Vector3&) const;
			Vector3 operator-(const Vector3&) const;
			Vector3 operator*(const Vector3&) const;
			Vector3 operator/(const Vector3&) const;
			bool	operator==(const Vector3&) const;
			bool	operator!=(const Vector3&) const;
			friend  Vector3 operator*(float, const Vector3&);
			friend  Vector3 operator*(const Vector3&, float);

			/*============================
			*		  MEMBERS
			============================*/
			float m_x;
			float m_y;
			float m_z;
			float m_lenght;
		};
	}
}
#endif // !_VECTOR3_H_