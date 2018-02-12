#pragma once
#pragma once
#ifndef _PLAYER_SHIP_HPP_
#define _PLAYER_SHIP_HPP_

#include "Vector2.h"

namespace Asteroids
{
	namespace Entities
	{
		class PlayerShip
		{
		public:
			/*============================
			*			CTOR
			============================*/
			PlayerShip();
			PlayerShip(int, int);
			~PlayerShip();

			/*============================
			*	  PUBLIC FUNCTIONS
			============================*/
			void MoveForward(const Engine::Math::Vector2&); //const Engine::Math::Vector2&
			void Render();
			void Update();
			void RotateLeft();
			void RotateRight();
			//void Move(const Engine::Math::Vector2& unit);

		private:
			/*============================
			*		  MEMBERS
			============================*/
			Engine::Math::Vector2* m_position;
			/*MAX*/
			float m_maxwidth;
			float m_maxheight;
			/*MIN*/
			float m_minwidth;
			float m_minheight;

			

			
		};
	}
}

#endif // !_PLAYER_SHIP_HPP_