#include "Level1.h"

XDL_Sprite* _sprite;
Level1::Level1(SDL_Renderer* _renderer)
{
	AddGameObjectToScene(_sprite = new XDL_Sprite("Face.bmp",0,0,128,128,_renderer),"player");

	XDL_Scene::Init(_renderer);
}

Level1::~Level1(void)
{
}

void Level1::Update()
{
	XDL_Scene::Update();
}

void Level1::Draw()
{
	_spriteBatch->Begin();//clear the draw queue
	XDL_Scene::Draw();// call your super, which will take all gameobjects added to the scene, and queue them for drawing
	/*
	Any other drawing the User may need to do.
	*/
	_spriteBatch->End();//draw everything

}
