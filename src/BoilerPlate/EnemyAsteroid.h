#pragma once

#include <vector>

#include "Entity.h"



#ifndef _ENEMYASTEROID_H_
#define _ENEMYASTEROID_H_

namespace Asteroids
{

	class EnemyAsteroid 
	{
	public:

		struct AsteroidSize
		{
			enum Size
			{
				BIG = 0,
				MEDIUM = 1,
				SMALL = 2,


			};
		};
	};

	//Public Functuion Declarations

	EnemyAsteroid   (AsteroidSize::Size, int, int);
	void Impulse   (Engine::Math::Vector2) override;
	void Update    (float);
	void Render() override;
	AsteroidSize::Size   GetSize();



	//Private members
private:

	std::vector<Engine::Math::Vector2> m_points;
	AsteroidSize::Size  m_size;

	int m_sizeFactor;
	float m_angle;
	float m_rotation;

};

#endif // !_ENEMYASTEROID_H_               