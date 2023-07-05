#pragma once

#include<iostream>
#include<vector>
#include<ctime>
#include<sstream>

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/Graphics.hpp>

#include <cmath>
#include <ctime>
#include <cstdlib>
#include <SFML/Main.hpp>

/*
	Class that acts as the game engine.
	Wrapper class.
*/

class Game{
private:
    // Variables
    float gameWidth;
    float gameHeight;

    //Window setup
    sf::RenderWindow* window;

    // Set font
    sf::Font font;

    // Create text
    sf::Text defaultMessage;

    //Running events
    sf::Event event;

    void initVariables();
    void initWindow();
    void initFonts();
	void initMessages();
public:
	//Constructors / Destructors
	Game();

	//Accessors
	const bool running() const;

    //Functions
    void pollEvents();
    void rungame();
};