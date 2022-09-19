//
//  Edge.cpp
//  Graphes et optimisation
//
//  Created by ZHENG Shutong on 2022/9/19.
//

#include "Edge.hpp"

Edge::Edge(int toId, int weight){
    this->toId = toId;
    this->weight = weight;
}

int Edge::getWeight(){
    return weight;
}
void Edge::setWeight(int weight){
    this->weight = weight;
}
int Edge::getToId(){
    return toId;
}
void Edge::setToId(int toId){
    this->toId = toId;
}

