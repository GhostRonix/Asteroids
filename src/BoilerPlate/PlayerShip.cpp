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
			m_width = width / 1.0f;
			m_height = height / 1.0f;
		}

		PlayerShip::~PlayerShip()
		{}

		void PlayerShip::MoveForward(const Engine::Math::Vector2& a)
		{
			float x = m_position->m_x + a.m_x;
			float y = m_position->m_y + a.m_y;

			m_position->m_x += x;
			m_position->m_y += y;
		}

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

		void PlayerShip::Update()
		{}

		void PlayerShip::RotateLeft()
		{}

		void PlayerShip::RotateRight()
		{}
	}
}