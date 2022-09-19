//
//  Node.hpp
//  Graphes et optimisation
//
//  Created by ZHENG Shutong on 2022/9/19.
//

#ifndef Node_hpp
#define Node_hpp

#include "Edge.hpp"
class Node {
    
private:
    int id;
    std::vector<Edge> edges;
public:
    Node(int id);
    int getId();
    void setId(int id);
    std::vector<Edge> getEdges();
    void setEdges(std::vector<Edge> edges);
    
};
#endif /* Node_hpp */
