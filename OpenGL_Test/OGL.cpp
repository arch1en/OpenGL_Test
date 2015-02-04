#include "OGL.hpp"

OGL::OGL()
	: mWindow{ sf::VideoMode(800, 600), "OpenGL" }
	, mLastUpdateTime{ sf::Time::Zero }
	, mFrameTime{ sf::seconds(1.0f / 60.0f) }
{
	glEnable(GL_TEXTURE_2D);
	mWindow.setVerticalSyncEnabled(true);
}

void OGL::init()
{

}

void OGL::render()
{

}

void OGL::run()
{
	mRunning = true;
	while (mRunning)
	{
		mLastUpdateTime += mClock.restart();

		while (mLastUpdateTime > mFrameTime)
		{
			mLastUpdateTime -= mFrameTime;
			//handleEvents();
			//update(frameTime);
		}

		render();
		mWindow.display();
	}
}

OGL::~OGL()
{

}