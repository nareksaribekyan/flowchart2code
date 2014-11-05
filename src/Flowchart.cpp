#include "Flowchart.h"
// Hi from Levon!
std::shared_ptr<FlowchartNode> Flowchart::createNode(std::string const & type) 
{
	auto it = factoryMap.find(type);
	if (it == factoryMap.end())
		return nullptr;
	std::shared_ptr<NodeFactory> factory = it->second;
	return factory->createNode();
}
