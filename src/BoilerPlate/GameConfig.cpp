#include "GameConfig.h"

//
#include <iostream>
#include <algorithm>

//
#include "ShipModelConfig.h"
#include "InputManager.h"


namespace Asteroids
{
	Game::Game(int width, int height)
		: m_scene(nullptr)
		, m_width(width)
		, m_height(height)
		, m_player(nullptr)
	{}

	Game::~Game()
	{
		// Destroy the scene
		//
		delete m_scene;

		;
	}

	void Game::Init()
	{
		// Create the scene
		//
		m_scene = new Entities::Escenario(
			Engine::Math::Vector3(0.1f, 0.1f, 0.15f),
			m_width,
			m_height
		);

		// Adding the player (ship)
		//
		CreatePlayer();

		
	}

	void Game::Update(double deltaTime)
	{
		// Handle Input
		//
		HandleInput();

		
		m_scene->Update(deltaTime);

	}

	void Game::Render() const
	{
		// Render the game
		//
		m_scene->Render();
	}

	void Game::HandleInput()
	{
		if (Engine::Input::InputManager::Instance().IsKeyPressed('i'))
		{
			m_player->MoveUp();
		}

		if (Engine::Input::InputManager::Instance().IsKeyPressed('j'))
		{
			m_player->MoveLeft();
		}

		if (Engine::Input::InputManager::Instance().IsKeyPressed('l'))
		{
			m_player->MoveRight();
		}

		if (Engine::Input::InputManager::Instance().IsKeyReleased('k'))
		{
			m_player->ChangeShip();
		}

	
	}

	void Game::CreatePlayer()
	{
		// Loading models
		//
		Utilities::Configuration config;
		m_player = new Entities::Ship(config.LoadModels());

		// Adding the player (ship)
		//		
		m_scene->AddChild(m_player);
	}

	
}
