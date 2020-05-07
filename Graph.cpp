#include "graph.h"


Graph::Graph(): numberOfVertex(0)
{
  for(int i = 0; i < MAX_NUM_VERTEX; i++)
  {
    adjacencyList[i] = nullptr;
  }
}

~Graph()
{

}

Bool Graph::add(Vertex target)
{
	if(numberOfVertex<MAX_NUM_VERTEX)
	{
	
	}

	else
	{
	return false;
	}

}

Bool Graph::remove(Vertex target)
{

}

Bool Graph::setEdge(const Vertex Start, const Vertex End, const float newWeight)
{

}

Bool Graph::connectEdge(const Vertex A, const Vertex B, const float newWeight)
{

}

Float Graph::getEdgeWeight(Vertex Start, Vertex End) const
{

}

void Graph::bruteforce()
{

}

Void Graph::aux(float distance, Vertex* current, Vertex* end, bool[] seen)
{

}

Float Graph::depthFirstTraversal(???Bool seen[];???) - recursive (permutations)
{

}
