#include "CompositeNode.h"


CompositeNode::CompositeNode():AbstractNode(){}

CompositeNode::CompositeNode(AbstractNode* parent, int id):AbstractNode(parent, id){}

void CompositeNode::addChild(AbstractNode* node) {

	// A COMPLETER
	m_nodeMap.insert(std::make_pair(node->getID(), node));

	/*
	if (m_nodeMap[getID()] != nullptr)
		m_nodeMap.insert(std::make_pair(node->getID(), node));
	else
		m_nodeMap = new ComponentMap();
	*/

	//m_nodeMap.insert( std::pair<int, AbstractNode*>(node->getID(), node));
	/*
	std::cout << "\n \n node->getParent() =  " << (node->getParent()) << std::endl;
	std::cout << "node->getID() =  " << node->getID() << std::endl;
	*/
}

AbstractNode* CompositeNode::getChild(int id) {

	// A COMPLETER
	return (findChild(id))? m_nodeMap[id] : nullptr;
}

bool CompositeNode::findChild(int id) {

	// A COMPLETER
	MapIter iter = m_nodeMap.find(id);
	return (iter != getMapEndIterator());
}

// AbstractNode* CompositeNode::removeChild(AbstractNode* node) {
void CompositeNode::removeChild(AbstractNode* node) {

	// A COMPLETER
	
	m_nodeMap.erase(node->getID());
}

// AbstractNode* CompositeNode::removeChild(int id) {
void CompositeNode::removeChild(int id) {
	
	// A COMPLETER
	// return nullptr;
	m_nodeMap.erase(id);
}


void CompositeNode::clearChildren() {

	// A COMPLETER
	m_nodeMap.clear();
}


void CompositeNode::acceptVisitor(AbstractVisitor* visitor)
{ 	
	// A COMPLETER 
}


void CompositeNode::setBox(AbstractBox* box)
{ 
	// A COMPLETER
}


AbstractBox* CompositeNode::getBox()
{ 
	// A COMPLETER

	return nullptr; 
}


void CompositeNode::toStream(std::ostream& s)
{
	// A COMPLETER
}