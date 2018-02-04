#pragma once
#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>
#include <algorithm>
#include <string>

namespace Math
{


	class MathUtilities
	{
	public:
		/*====================
		*	PUBLIC FUNCTIONS
		======================*/
		MathUtilities();
		~MathUtilities();

		inline int GetNearestInt(float);
		inline float RoundFloatToInt(int);
		template<class T> T MaximumN(T arr[4]);
		template<class T> T MinimumN(T arr[4]);
		template<class T> T Clamp(T);
		template<class T> T Interpolate(T);
		double ConvertAngle(double);
		inline int IsPowerOfTwo(int);
		double AngularDistances(double, double);

	private:
		/*======================
		*		MEMBERS
		======================*/
		int intToFloat;
		float floatToInt;
		double radians;
		double degrees;
	};

}