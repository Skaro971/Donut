#ifndef SETTINGS_H__
#define SETTINGS_H__

class Settings
{
private:
	int mWidth, mHeight;

public:
	Settings(int argc, char** argv);

	int GetWidth();
	int GetHeight();
};

#endif // !SETTINGS_H__
