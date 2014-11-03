#include "Flowchart.h"
#include "FlowchartNode.h"
#include "FlowchartUnitTest.h"
#include "FlowchartNodeUnitTest.h"
#include "UnitTest.h"
#include <vector>
#include <algorithm>
#include <memory>
int main(int argc, char *argv[])
{
	Flowchart fc;
	std::vector< std::shared_ptr < UnitTest > > tests;
	tests.push_back( std::shared_ptr< UnitTest > ( new FlowchartUnitTest () ) );
	tests.push_back( std::shared_ptr< UnitTest > ( new FlowchartNodeUnitTest () ) );
	std::for_each ( tests.begin() , tests.end() , [](std::shared_ptr< UnitTest > ptr) -> void 
	{ 
		ptr->run(); 
	} );
	return 0;
}