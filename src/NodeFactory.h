#ifndef __NODE_FACTORY__
#define __NODE_FACTORY__

#include "FlowchartNode.h"
#include <memory>

class NodeFactory
{
public:
	NodeFactory() {};
	virtual ~NodeFactory() {};
	virtual std::shared_ptr<FlowchartNode> createNode () const;
};

class IfNodeFactory : public NodeFactory
{
	std::shared_ptr<FlowchartNode> createNode() const 
	{
		return std::shared_ptr<FlowchartNode>(new IfNode());
	}
};


class SimpleNodeFactory : public NodeFactory
{
	std::shared_ptr<FlowchartNode> createNode() const 
	{
		return std::shared_ptr<FlowchartNode>(new SimpleNode());
	}
};


#endif

