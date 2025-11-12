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

void Mesh::GenerateCircle(float radius)
{

}

void Mesh::GenerateHalfCircle(float radius)
{

}

void Mesh::GenerateRectangle(float width, float height)
{

}

void Mesh::GenerateSquare(float size)
{

}

