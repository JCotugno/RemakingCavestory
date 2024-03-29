#pragma once
#ifndef GAME_H
#define GAME_H

// Forward Declarations
struct Graphics;

class Game {
public:
	Game();
	~Game();
private:
	void gameLoop();
	void draw(Graphics &graphics);
	void update(float elapsedTime);
};

#endif