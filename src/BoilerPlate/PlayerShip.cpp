#include "PlayerShip.h"



#include "Vector2.h"


#include <GL\glew.h>
#include <SDL2\SDL_opengl.h>

namespace Asteroids
{
	namespace Entities
	{
		
		const float ANGLE_OFFSET = 90.f;
		const float ROTATION_SPEED = 50.f;
		const float MAX_SPEED = 350.0f;
		const float THRUST = 3.0f;
		const float DRAG_FORCE = 0.999f;
		const float PI = 3.141592653f;

		PlayerShip::PlayerShip(int width, int height)
			//Adding values to Members
			: m_moving(false)
			, m_angle(0.0f)
			,m_gasOn(false)
			, Entity(width, height)
		{
			m_position = Engine::Math::Vector2(Engine::Math::Vector2::origin);

			/*PD
			/*max dim.
			m_maxwidth = width / 3.0f;
			m_maxheight = height / 3.0f;
			/*min dim
			m_minwidth = -width / 3.0f;
			m_minheight = -height / 3.0f;*/

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
			if (!m_moving) m_gasOn = false;
			// Velocity is a vector but we want to clamp speed as a scalar
			float speed =
				std::fabs(std::sqrtf(
					m_velocity.m_x * m_velocity.m_x +
					m_velocity.m_y * m_velocity.m_y)
				);

			if (speed > MAX_SPEED)
			{
				// TODO: RR: Change this for clamp
				m_velocity.m_x = (m_velocity.m_x / speed) * MAX_SPEED;
				m_velocity.m_y = (m_velocity.m_y / speed) * MAX_SPEED;
			}

			m_currentSpeed = speed;

			Entity::Update(deltaTime);
		}

		


	
       
		//Render


		void PlayerShip::Render()
		{
			glLoadIdentity();

			glLoadIdentity();

			// Translates 
			glTranslatef(m_position.x, m_position.y, 0.0f);

			// Direction Changer
			glRotatef(m_angle, 0.0f, 0.0f, 1.0f);

			glBegin(GL_LINE_LOOP);

			std::vector<Engine::Math::Vector2>::iterator it = m_points.begin();

			for (; it != m_points.end(); ++it)
			{
				glVertex2f((*it).x, (*it).y);
			}
			glEnd();

			if (m_gasOn)
			{
				// Drawing the ship
				glBegin(GL_LINE_LOOP);
				glVertex2f(6.0f, -4.0f);
				glVertex2f(0.0f, -16.0f);
				glVertex2f(-6.0f, -4.0f);
				glEnd();
			}
		}

		//Moving Fowar n' Thrust
		void PlayerShip::MoveForward()
		{
			m_gasOn = true;
			m_moving = true;
			ApplyImpulse(Engine::Math::Vector2(THRUST, THRUST));
		}
	
		//Rotating Left
		void PlayerShip::RotateLeft()
		{
			m_angle += ROTATION_SPEED;
		}
		//Rotating Right

		void PlayerShip::RotateRight()
		{
			m_angle -= ROTATION_SPEED;
		}
	}
}