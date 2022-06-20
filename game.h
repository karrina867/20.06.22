#pragma once
#include "SFML/Graphics.hpp"
#include "player.h"
#include"const.h"
#include"river.h"
#include"barier.h"
#include"splash.h"
#include"text.h"
#include"island.h"
#include"bang.h"
#include"Bonus.h"
#include<list>
#include <vector>
class Game {
public:
	enum GameState { INTRO, PLAY, GAME_OVER };
	Game();
	void play();
	void check_events();
	void update();
	void draw();
	void check_collisions();
	void init();
	int player_lives = 5;
private:
	sf::RenderWindow window;
	GameState game_state = INTRO;
	Player player;
	std::vector<Barier*> bariers;
	std::vector<Islands*> island;
	River river1, river2;
	SplashScreen  intro_screen, game_over_screen;
	TextObject score_text;
	TextObject player_hp;
	TextObject tim_text;
	std::list<Bonus*> bonuses;
	//std::list<Explosion*> explosions;
	std::list<Player*> players;
	size_t score = 5;

};