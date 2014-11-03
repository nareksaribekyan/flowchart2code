class FlowchartNode
{
public:
	void addConnection(FlowchartNode const & node);
private:
	Flowchart* flowchart;
};