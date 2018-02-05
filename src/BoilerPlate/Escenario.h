#pragma once

#ifndef _ESCENARIO_H_
#define _ESCENARIO_H_

#include "Vector3.h"
#include "GameObject.h"

namespace Asteroids
{
	namespace Entities
	{
		class Escenario : public Engine::Core::GameObject
		{
		public:
			/* =============================================================
			* CTOR
			* ============================================================= */
			Escenario(Engine::Math::Vector3 background, int width, int height);

			/* =============================================================
			* PUBLIC FUNCTIONS
			* ============================================================= */
			void Render() override;

			/* =============================================================
			* GETTER FUNCTIONS
			* ============================================================= */
			int GetWidth() const { return m_width; }
			int GetHeight() const { return m_height; }
		private:
			/* =============================================================
			* MEMBERS
			* ============================================================= */
			Engine::Math::Vector3 m_background;
			int m_width;
			int m_height;
		};
	}
}

#endif // !_ESCENARIO_H_