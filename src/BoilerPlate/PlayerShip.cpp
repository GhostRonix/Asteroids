#include "PlayerShip.h"



#include "Vector2.h"


#include <GL\glew.h>
#include <SDL2\SDL_opengl.h>

namespace Asteroids
{
	namespace Entities
	{
		PlayerShip::PlayerShip()
		{}

		PlayerShip::PlayerShip(int width, int height)
		{
			m_position = new Engine::Math::Vector2(Engine::Math::Vector2::origin);

			/*PD*/
			/*max dim.*/
			m_maxwidth = width / 3.0f;
			m_maxheight = height / 3.0f;
			/*min dim*/
			m_minwidth = -width / 3.0f;
			m_minheight = -height / 3.0f;

		}

	

		PlayerShip::~PlayerShip()
		{}


		//Inline Fucntion to avoid multi-definition problems.

		inline float LigthSpeedWarp(float var, float min, float max)
		{
			if (var < min) return max - (min - var);
			if (var > max) return min + (var - max);
			
			return var;

		}
		//Update

		void PlayerShip::Update()
		{}

		void PlayerShip::MoveForward(const Engine::Math::Vector2& auxunit)
		{
			float x = m_position -> m_x + auxunit.m_x;
			float y = m_position -> m_y + auxunit.m_y;

			m_position -> m_x = LigthSpeedWarp(x, m_minwidth, m_maxwidth);
			m_position -> m_y = LigthSpeedWarp(y, m_minheight, m_minheight);
		}

		


	
       
		//Render


		void PlayerShip::Render()
		{
			glLoadIdentity();

			// Translate
			glTranslatef(m_position->m_x, m_position->m_y, 0.0f);

			// Drawing the ship
			glBegin(GL_LINE_LOOP);
			glVertex2f(0.0f, 20.0f);
			glVertex2f(12.0f, -10.0f);
			glVertex2f(6.0f, -4.0f);
			glVertex2f(-6.0f, -4.0f);
			glVertex2f(-12.0f, -10.0f);
			glEnd();

		}

	
		void PlayerShip::RotateLeft()
		{}

		void PlayerShip::RotateRight()
		{}
	}
}