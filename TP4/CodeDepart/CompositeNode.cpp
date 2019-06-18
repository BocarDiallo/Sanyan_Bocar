#include "CompositeNode.h"


CompositeNode::CompositeNode():AbstractNode(){}

CompositeNode::CompositeNode(AbstractNode* parent, int id):AbstractNode(parent, id){}

void CompositeNode::addChild(AbstractNode* node) {

	// A COMPLETER
	m_nodeMap [node->getID()] = node;
}

AbstractNode* CompositeNode::getChild(int id) {

	// A COMPLETER
	return m_nodeMap[id];
	//return nullptr;

}

bool CompositeNode::findChild(int id) {

	// A COMPLETER
	MapIter it = m_nodeMap.find(id);
	return it != m_nodeMap.end();
	//return false;

}

AbstractNode* CompositeNode::removeChild(AbstractNode* node) {

	// A COMPLETER
	AbstractNode* nodeToRemove = NULL;
	bool found = false;

	MapIter it = m_nodeMap.begin();
	while (it != m_nodeMap.end() && !found)
	{
		if ((*it).second == node) {
			found = true;
			nodeToRemove = node;
		}
		else
			++it;
	}
	if (found)
		m_nodeMap.erase(it);

	return nodeToRemove;
	//return nullptr;

}

AbstractNode* CompositeNode::removeChild(int id) {
	
	// A COMPLETER
	// A COMPLETER
	AbstractNode* nodeToRemove = NULL;

	MapIter it = m_nodeMap.find(id);
	if (it != m_nodeMap.end()) {

		nodeToRemove = (*it).second;
		m_nodeMap.erase(it);
	}

	return nodeToRemove;
	//return nullptr;
	// ou aussi
	//// Cherche l'enfant identifie pas le id et le passe en paremetre a removeChild() pour le retirer
	// return removeChild(getChild(id));
}


void CompositeNode::clearChildren() {

	// A COMPLETER
	// A COMPLETER
	MapIter it = m_nodeMap.begin();
	while (it != m_nodeMap.end())
	{
		AbstractNode* node = (*it).second;

		if (node != NULL)
			delete node;

		++it;
	}

	m_nodeMap.clear();
}

void CompositeNode::acceptVisitor(AbstractVisitor* visitor)
{ 	
	// A COMPLETER 
	visitor->visitCompositeNode(this);
}
void CompositeNode::setBox(AbstractBox* box)
{ 
	// A COMPLETER
	m_box = box;
}
AbstractBox* CompositeNode::getBox()
{ 
	// A COMPLETER
	return m_box;
}
	//return nullptr; 

void CompositeNode::toStream(std::ostream& s)
{
	// A COMPLETER

}