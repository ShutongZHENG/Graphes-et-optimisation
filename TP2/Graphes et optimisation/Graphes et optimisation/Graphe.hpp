//
//  Graphe.hpp
//  Graphes et optimisation
//
//  Created by ZHENG Shutong on 2022/9/19.
//

#ifndef Graphe_hpp
#define Graphe_hpp
#include "Node.hpp"
#include <string>

struct OptimalPath {
    std::vector<int> nodes;
    int minWeight;
};

class Graphe {
    
    
private:
    int maxNodeCount;
    int maxEdgeCount;
    std::vector<Node> nodes;

public:
    Graphe();
    int getMaxNodeCount();
    void setMaxNodeCount(int maxNodeCount);
    int getMaxEdgeCount();
    void setMaxEdgeCount(int maxEdgeCount);
    bool isCircuit();
    OptimalPath dijkstra();
    void setNodes(int* idNodes, int (*toId)[3]);
    std::string printGraphe();
    
};

#endif /* Graphe_hpp */
