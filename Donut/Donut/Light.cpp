#include "Light.h"
#include "Settings.h"
#include <cmath>

Light::Light(Settings const& settings)
{
	mLightVertex.x = 0.f;
	mLightVertex.y = 0.f;
	mLightVertex.z = 0.f;

	float nx = settings.GetLightDirectionX();
	float ny = settings.GetLightDirectionY();
	float nz = settings.GetLightDirectionZ();
	float directionNorm = std::sqrt(nx * nx + ny * ny + nz * nz);
	if (directionNorm != 0.f)
	{
		mLightVertex.nx = nx / directionNorm;
		mLightVertex.ny = ny / directionNorm;
		mLightVertex.nz = nz / directionNorm;
	}
}
