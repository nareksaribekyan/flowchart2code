#include "Flowchart.h"
#include "FlowchartNode.h"
#include "UnitTest.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

int main(int argc, char *argv[])
{
	try
	{
		Flowchart fc;
		std::vector< std::shared_ptr < UnitTest > > tests;
		tests.push_back( std::shared_ptr< UnitTest > ( new FlowchartUnitTest () ) );
		tests.push_back( std::shared_ptr< UnitTest > ( new FlowchartNodeUnitTest () ) );
		std::for_each ( tests.begin() , tests.end() , [](std::shared_ptr< UnitTest > ptr) -> void 
		{ 
			if (!ptr->run()) throw std::exception("unit test failed");
		} );
	}
	catch (std::exception const & e)
	{
		std::cerr << "exception was thrown: "<< e.what()<< std::endl;
	}

	return 0;
}