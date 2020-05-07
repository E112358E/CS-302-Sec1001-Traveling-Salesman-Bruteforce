#ifndef VERTEX_H_
#define VERTEX_H_

#include <string>

class graph;

class Vertex
{
friend graph;

private:
      vertex* p;
      float weight;
      std::string cityName;
public:
      void setVertexPtr(Vertex* newVertex)
      {
      p = newVertex;
      }

      Vertex* getVertexPtr() const
      {
      return p;
      }

      void setWeight(Float newWeight)
      {
      weight = newWeight;
      }

      float getweight() const
      {
      return weight;
      }

      void setName(const std::string name)
      {
      cityName = name;
      }

      std::string getName() const
      {
      return cityName;
      }

};
