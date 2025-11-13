#include "Mesh.h"

Mesh::Vertex::Vertex(float _x, float _y, float _z)
{
	x = _x;
	y = _y;
	z = _z;
}

Mesh::Mesh(int resolution)
{
	mResolution = resolution;
	mVertices = {};
}

void Mesh::AddVertex(float x, float y, float z)
{
	mVertices.push_back(Vertex(x, y, z));
}

void Mesh::AddVertex(const Vertex& vertex)
{
	mVertices.push_back(vertex);
}

void Mesh::Debug()
{
	if (mVertices.size() == 0) return;

	std::cout << "\n-----Vertices List-----\n" << std::endl;
	for (int i = 0; i < mVertices.size(); ++i)
	{
		std::cout << "[" << i << "] : x = "
			<< mVertices[i].x << ", y = "
			<< mVertices[i].y << ", z = "
			<< mVertices[i].z << ";\n";
	}
	std::cout << std::endl;
}

void Mesh::GenerateSector(float radius, float angle)
{
	mVertices.resize(mResolution * mResolution);
	for (int i = 0; i < mResolution; ++i)
	{
		float r = (radius * i) / (mResolution - 1);
		for (int j = 0; j < mResolution; ++j)
		{
			float theta = (angle * j) / (mResolution - 1);
			mVertices[mResolution * i + j].x = r * std::cos(theta);
			mVertices[mResolution * i + j].y = r * std::sin(theta);
			mVertices[mResolution * i + j].z = 0.f;
		}
	}
}

void Mesh::GenerateCircle(float radius)
{
	GenerateSector(radius, 2 * PI);
}

void Mesh::GenerateHalfCircle(float radius)
{
	GenerateSector(radius, PI);
}

void Mesh::GenerateRectangle(float width, float height)
{
	mVertices.resize(mResolution * mResolution);
	for (int i = 0; i < mResolution; ++i)
	{
		for (int j = 0; j < mResolution; ++j)
		{
			mVertices[mResolution * i + j].x = (1.f * i / (mResolution - 1) - 0.5f) * width;
			mVertices[mResolution * i + j].y = (1.f * i / (mResolution - 1) - 0.5f) * height;
			mVertices[mResolution * i + j].z = 0.f;
		}
	}
}

void Mesh::GenerateSquare(float size)
{
	GenerateRectangle(size, size);
}

