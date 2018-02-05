#pragma once

#ifndef _VECTOR2_H_
#define _VECTOR2_H_

namespace Engine
{
	namespace Math
	{
		class Vector2
		{
		public:

			/*============================
			*	STATIC
			============================*/
			static Vector2 origin;

			/*============================
			*	CTOR
			============================*/
			Vector2();
			Vector2(float, float);
			Vector2(float);