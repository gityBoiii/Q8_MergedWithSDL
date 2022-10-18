#pragma once
#include "Actor.h"
#include "SDL_ttf.h"
#include <String>

using namespace std;
class AText : public AActor
{
public:
	AText();
	AText(int X, int Y, string NewContent, int NewFontSize);
	~AText();
	void Render();

	string Content;
	int FontSize;
	TTF_Font* Font;

};

