#ifndef SCREEN_H__
#define SCREEN_H__

#include "Mesh.h"

class Screen
{
private:
	int mWidth, mHeight;

public:
	Screen() = default;
	Screen(int width, int height);

	//SETTERS
	void SetWidth(int width);
	void SetHeight(int height);

	void DisplayGrid();
	void DisplayMesh(const Mesh& mesh);
};

#endif // !SCREEN_H__
