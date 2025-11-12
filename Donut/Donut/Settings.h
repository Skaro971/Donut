#ifndef SETTINGS_H__
#define SETTINGS_H__

class Settings
{
private:
	int mWidth, mHeight;
	int mResolution;

public:
	Settings(int argc, char** argv);

	int GetWidth();
	int GetHeight();
	int GetResolution();
};

#endif // !SETTINGS_H__
