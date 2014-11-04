#ifndef __UNIT_TESTS__
#define __UNIT_TESTS__

class UnitTest
{
public:
	UnitTest() {};
	virtual ~UnitTest() = 0 {};
	//virtual bool run() = 0;
};


class FlowchartNodeUnitTest : public UnitTest
{
public:
	bool run ();
};

class FlowchartUnitTest : public UnitTest
{
public:
	virtual bool run ();
};


#endif