#include "FlowchartNode.h"
class NodeFactory
{
public:
	NodeFactory();
	~NodeFactory();
	virtual FlowchartNode * createNode () const;
}