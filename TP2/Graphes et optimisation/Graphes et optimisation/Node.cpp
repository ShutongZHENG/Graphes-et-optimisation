//
//  Node.cpp
//  Graphes et optimisation
//
//  Created by ZHENG Shutong on 2022/9/19.
//

#include "Node.hpp"

Node::Node(int id){
    this->id = id;
}

int Node::getId(){
    return id;
}
void Node::setId(int id){
    this->id = id;
}
std::vector<Edge> Node::getEdges(){
    return edges;
}
void Node::setEdges(std::vector<Edge> edges){
    this->edges = edges;
}
