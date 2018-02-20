#pragma once

#ifndef _PLAYER_SHIP_HPP_
#define _PLAYER_SHIP_HPP_
#include "Entity.h"
#include "Vector2.h"

namespace Asteroids
{
	namespace Entities
	{
		class PlayerShip:Entity
		{
		public:
			/*============================
			*			CTOR
			============================*/
			
			PlayerShip(int, int);
			//~PlayerShip();

			/*============================
			*	  PUBLIC FUNCTIONS
			============================*/
			/*Void Inline Function*/
			inline void ToggleMove() { m_moving = !m_moving; }
			/*-----------------------------------------------------*/


			void MoveForward(void); //const Engine::Math::Vector2&
			void Render(void);
			void Update(float deltaTime);
			void RotateLeft(void);
			void RotateRight(void);
			//void Move(const Engine::Math::Vector2& unit);

		private:
			/*============================
			*		  MEMBERS
			============================*/
			/*Engine::Math::Vector2* m_position;
			/*MAX/
			float m_maxwidth;
			float m_maxheight;
			/*MIN/
			float m_minwidth;
			float m_minheight;**/
			float   m_angle;
			float   m_currentSpeed;
			bool    m_gasOn;
			bool	m_moving;
			std::vector<Engine::Math::Vector2> m_points;
			/*
			* PRIVATE FUNCTIONS
			*/

			

			
		};
	}
}

#endif // !_PLAYER_SHIP_HPP_