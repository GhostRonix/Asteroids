#pragma once

#ifndef _GAME_H_
#define _GAME_H_

#include <list>

#include "Escenario.h"
#include "PlayerShip.h"


namespace Asteroids
{
	class Game
	{
	public:
		/* =============================================================
		* CTOR
		* ============================================================= */
		Game(int width, int height);
		~Game();

		/* =============================================================
		* PUBLIC FUNCTIONS
		* ============================================================= */
		void Init();
		void Update(double deltaTime);
		void Render() const;
	private:
		/* =============================================================
		* PRIVATE FUNCTIONS
		* ============================================================= */
		void HandleInput();
		void CreatePlayer();
		

		/* =============================================================
		* MEMBERS
		* ============================================================= */
		Entities::Escenario* m_scene;
		int m_width;
		int m_height;
		Entities::Ship* m_player;
		
	};
}

#endif /* _GAMECONFIG_H_ */