#include "Graph.h"


Graph::Graph(): numberOfVertex(0)
{
  for(int i = 0; i < MAX_NUM_VERTEX; i++)
  {
    adjacencyList[i] = nullptr;
    label[i] = NULL;
  }
}

~Graph()
{

}

Bool Graph::add(Vertex target)
{
	if(numberOfVertex<MAX_NUM_VERTEX)
	{
	adjacencyList[numberOfVertex]=target;
	label[numberOfVertex]=target.getName();
	numberOfVertex++;
	return true;
	}

	else
	{
	return false;
	}

}

Bool Graph::remove(Vertex target)
{

	if(numberOfVertex!=0)
	{
		for(int n=0; n<numberOfVertex; n++)
		{
			if(label[n]==target.getName())
			{
			adjacencyList[n]=NULL;
			label[n]=NULL;
			numberOfVertex--;
			}

		}
	return true;
	}

	else
	{
	return false;
	}
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
