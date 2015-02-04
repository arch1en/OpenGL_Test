#pragma once

#include <SFML\Graphics.hpp>
#include <GL\glew.h>

class OGL
{
public:
	OGL();
	~OGL();
	void init();
	void render();
	void run();

private:
	sf::Window	mWindow;
	bool		mRunning;
	sf::Clock	mClock;
	sf::Time	mLastUpdateTime;
	const sf::Time	mFrameTime;
};