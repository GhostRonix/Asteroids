#pragma once

namespace Engine
{
	namespace Math
	{
		class vector3
		{
		public:
			/* =============================================================
			* CTOR
			* ============================================================= */
			explicit vector3();
			explicit vector3(float uniform);
			explicit vector3(float x, float y, float z);
			vector3(const vector3& other);

			/* =============================================================
			* PUBLIC FUNCTIONS
			* ============================================================= */
			float Normalize();
			float Length();
			float LengthSquared() const;
			void Scale(float scaleUnit);
			float SetLength(float newLength);

			/* =============================================================
			* MEMBERS
			* ============================================================= */
			float x;
			float y;
			float z;
			float length;
		};
	}
}