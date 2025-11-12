#include "Mesh.h"

template<typename ...Args>
inline void Mesh::AddVertex(const Vertex& first, const Args & ...rest)
{
	mVertices.push_back(first);
	(mVertices.push_back(rest), ...);
}