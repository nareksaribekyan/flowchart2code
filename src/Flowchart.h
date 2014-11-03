#include <string>
#include <map>
#include "NodeFactory.h"
class Flowchart
{
public: 
	Flowchart();
	FlowchartNode * createNode ( std::string const & type );
private:
	std::map < std::string , NodeFactory * > factoryMap ;
};