#ifndef __FLOWCHART_H__
#define __FLOWCHART_H__

#include <string>
#include <map>
#include <memory>

#include "NodeFactory.h"

class Flowchart
{
public:	
	std::shared_ptr<FlowchartNode> createNode ( std::string const & type );
private:
	std::map < std::string , std::shared_ptr<NodeFactory> > factoryMap ;	
};

#endif