//
//  Edge.hpp
//  Graphes et optimisation
//
//  Created by ZHENG Shutong on 2022/9/19.
//

#ifndef Edge_hpp
#define Edge_hpp

#include <vector>

class Edge{
private:
    int weight;
      
    int toId;
    
public:
    Edge(int toId, int weight);
    int getWeight();
    void setWeight(int weight);
    int getToId();
    void setToId(int toId);


    
};
#endif /* Edge_hpp */
