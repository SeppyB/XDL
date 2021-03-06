//! XDL_Sprite
/*!
Extension of GameObject

Provides extra functionality, such as a sprite visual element, and loading/drawing from tilesheets
*/

#ifndef _SPRITE_H
#define _SPRITE_H

#include <SDL.h>
#include "XDL_Debug.h"
#include "XDL_ContentManager.h"
#include "XDL_GameObject.h"
class XDL_Sprite : public XDL_GameObject
{
public:

#pragma region
	XDL_Sprite(char* _asset,float _x,float _y,int _height, int _width,int _z,SDL_Renderer* _renderer,string _uniqueName);
	XDL_Sprite(char* _asset,float _x,float _y,int _height, int _width,int _z,SDL_Renderer* _renderer,SDL_Rect _sourceRect, string _uniqueName);
	XDL_Sprite(char* _asset,float _x,float _y,int _height, int _width,int _z,SDL_Renderer* _renderer,SDL_Rect _sourceRect,int _numFrames,string _uniqueName);
	
#pragma endregion Constructors

	virtual ~XDL_Sprite(void);
	void virtual Update();
	void virtual Draw();
	void virtual Animate();
	

protected:
	void Init(char* _asset,float _x,float _y,int _height, int _width,SDL_Renderer* _renderer);

#pragma region
	
#pragma endregion CollisionMembers 
	SDL_Renderer* _renderer;
	
	int _numFrames;
	int _currentFrame;
	SDL_Rect _sourceRect;
	SDL_Rect _drawRect;
	
	SDL_Texture* _texture;
	
	const char* _assetName;
	XDL_ContentManager* _content;
	
};

#endif