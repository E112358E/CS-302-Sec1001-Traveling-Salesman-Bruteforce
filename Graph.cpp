#include "graph.h"


Graph::graph(): numberOfVertex(0)
{
  for(int i = 0; i < MAX_NUM_VERTEX; i++)
  {
    adjacencyList[i] = nullptr;
  }
}

Graph::~graph()
{

}

Bool graph::add(Vertex target)
{

}

Bool graph::remove(Vertex target)
{

}

Bool graph::setEdge(const Vertex Start, const Vertex End, const float newWeight)
{

}

Bool graph::connectEdge(const Vertex A, const Vertex B, const float newWeight)
{

}

Float graph::getEdgeWeight(Vertex Start, Vertex End) const
{

}

void graph::bruteforce()
{

}

Void graph::aux(float distance, Vertex* current, Vertex* end, bool[] seen)
{

}

Float graph::depthFirstTraversal(???Bool seen[];???) - recursive (permutations)
{

}
