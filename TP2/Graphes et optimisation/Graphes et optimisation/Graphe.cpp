//
//  Graphe.cpp
//  Graphes et optimisation
//
//  Created by ZHENG Shutong on 2022/9/19.
//

#include "Graphe.hpp"

Graphe::Graphe(){
    maxNodeCount = 0;
    maxEdgeCount = 0;
}

int Graphe::getMaxNodeCount(){
    return maxNodeCount;
}
void Graphe::setMaxNodeCount(int maxNodeCount){
    this->maxNodeCount = maxNodeCount;
}
int Graphe::getMaxEdgeCount(){
    return maxEdgeCount;
}
void Graphe::setMaxEdgeCount(int maxEdgeCount){
    this->maxEdgeCount = maxEdgeCount;
}

void Graphe::setNodes(int* idNodes, int (*toId)[3]){
    for (int i=0 ; i< maxNodeCount; i++) {
        Node node(idNodes[i]);
        std::vector<Edge> edges;
        for (int j=0; j<maxEdgeCount; j++) {
            if (toId[j][0] == idNodes[i]) {
                Edge e(toId[j][1],toId[j][2]);
                edges.push_back(e);
            }
        }
        node.setEdges(edges);
        
        this->nodes.push_back(node);
    }
    
}


bool Graphe::isCircuit(){
    bool res = false;
    
    
    
    return res;
}
OptimalPath Graphe::dijkstra(){
    OptimalPath optimalPath;
    
    
    
    
    return optimalPath;
}

std::string Graphe::printGraphe(){
    std::string str = "";
    for (int i =0 ; i<maxNodeCount; i++) {
        
        str += "Node "+std::to_string(this->nodes[i].getId())+ ": \n ";

        for (int j=0; j<this->nodes[i].getEdges().size(); j++) {
            str += " "+std::to_string(this->nodes[i].getEdges()[j].getToId());
        }
        str +="\n";
        
    }
    
    
    
    
    return str;
}
