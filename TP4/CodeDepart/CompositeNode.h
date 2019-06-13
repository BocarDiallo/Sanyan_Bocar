#pragma once

#include "AbstractNode.h"
#include <map>
#include <utility> // For make_pair

using namespace std;

class CompositeNode :public AbstractNode {

private:
	typedef std::map<int, AbstractNode*> ComponentMap;
	typedef ComponentMap::iterator MapIter;

	ComponentMap m_nodeMap;
	

public:

	CompositeNode();
	CompositeNode(AbstractNode* parent, int id);
	~CompositeNode(){};

	void addChild(AbstractNode* node);

	AbstractNode* getChild(int id);
	bool findChild(int id);

	//AbstractNode* removeChild(AbstractNode* node);
	// AbstractNode* removeChild(int id);
	void removeChild(AbstractNode* node);
	void removeChild(int id);

	void clearChildren();

	MapIter getMapBeginIterator() { return m_nodeMap.begin(); };
	MapIter getMapEndIterator() { return m_nodeMap.end(); };

	virtual void acceptVisitor(AbstractVisitor* visitor);
	virtual void setBox(AbstractBox* box);
	virtual AbstractBox* getBox();
	virtual void toStream(std::ostream& s);
};
