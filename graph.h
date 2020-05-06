#ifndef GRAPH_H
#define GRAPH_H

#include "vertex.h"
class graph
{
Private:
	Vertex** Adjacency List;
	Vertex* Label[];

Public:
	Bool add(Vertex target);
	//Create adds a vertex into the graph, manipulate Adjacency List (no edges/connections), returns true if successful, false if not
	Bool remove(Vertex target);
	//Removes the target vertex, returns true if successful, false if not

	Bool setEdge(const Vertex Start, const Vertex End, const float newWeight);
	//places a one way edge from the Start vertex to the End vertex with a weight, returns true if successful, false if not;

	Bool connectEdge(const Vertex A, const Vertex B, const float newWeight);
	//calls setEdge twice(from A to B, and B to A), places 2 edges between the 2 vertices, both with the same weight, returns true if successful, false if not;

	Float getEdgeWeight(Vertex Start, Vertex End) const;
	//gets the weight of the edge from Start to End vertex, returns a negative number if there is no edge from Start to End vertex. ()
	
	void Bruteforce();
	//returns shortest path and also prints out all the possible path in another text file

	Void Aux(float distance, Vertex* current, Vertex* end, bool[] seen)
	//***Possible auxiliary function that does the recursive function/nature for the Bruteforce

	Float depthFirstTraversal(???Bool seen[];???) - recursive (permutations)
};
#include "graph.cpp"
#endif //GRAPH_H_
