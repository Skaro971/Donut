#ifndef MESH_H__
#define MESH_H__

#include <iostream>
#include <vector>

class Mesh
{
public:
	struct Vertex
	{
		float x, y, z;
		Vertex(float _x, float _y, float _z);
	};
	std::vector<Vertex> mVertices;
	int mResolution;

	Mesh(int resolution);
	~Mesh() = default;

	void AddVertex(float x, float y, float z);
	void AddVertex(const Vertex& vertex);

	template<typename... Args>
	void AddVertex(const Vertex& first, const Args&... rest);

	//Display Vertices coord
	void Debug();

	void GenerateCircle(float radius);
	void GenerateHalfCircle(float radius);
	void GenerateRectangle(float width, float height);
	void GenerateSquare(float size);
};

#include "Mesh.inl"
#endif

