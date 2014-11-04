#ifndef __FLOWCHART_NODE__
#define __FLOWCHART_NODE__

#include "Flowchart.h"
#include <vector>
#include <memory>

class Flowchart;

class FlowchartNode
{
public:
	void addConnection(std::shared_ptr<FlowchartNode> node);


private:
	void addInEdge(std::shared_ptr<FlowchartNode> node);
	void addOutEdge(std::shared_ptr<FlowchartNode> node);

	Flowchart* flowchart;	
};

class SimpleNode : public FlowchartNode 
{

};

class IfNode : public FlowchartNode
{
	
};

#endif