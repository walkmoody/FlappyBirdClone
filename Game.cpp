#include "Game.h"
#include <string> 

void Game::initVariables(){
    this->gameWidth = 800;
    this->gameHeight = 600;
}

void Game::initWindow(){
	this->window = new sf::RenderWindow(sf::VideoMode(static_cast<unsigned int>(gameWidth), static_cast<unsigned int>(gameHeight), 32), "Template",
                            sf::Style::Titlebar | sf::Style::Close);
    this->window->setVerticalSyncEnabled(true);
}

void Game::initFonts(){
    if (!this->font.loadFromFile("resources/tuffy.ttf"))
        return exit(0);
}

void Game::initMessages(){
    this->defaultMessage.setFont(font);
    this->defaultMessage.setCharacterSize(40);
    this->defaultMessage.setPosition(170.f, 200.f);
    this->defaultMessage.setFillColor(sf::Color::White);
    this->defaultMessage.setString("Everything is set up correctly!\n\nPress esc to exit the window.");
}

const bool Game::running() const{
	return this->window->isOpen();
}

void Game::pollEvents(){
    while (this->window->pollEvent(this->event)){
            // Window closed or escape key pressed: exit
            if ((this->event.type == sf::Event::Closed) ||
               ((this->event.type == sf::Event::KeyPressed) && (this->event.key.code == sf::Keyboard::Escape))){
                this->window->close();
                break;
            }
        }
}

void Game::rungame(){
    while (this->window->isOpen()){
        // Handle events
        this->pollEvents();

        // Clear the window
        this->window->clear(sf::Color(0, 0, 0));

        //Display default message
        this->window->draw(defaultMessage);

        // Display things on screen
        this->window->display();
    }
}

Game::Game(){
	this->initVariables();
    this->initWindow();
    this->initFonts();
    this->initMessages();
}