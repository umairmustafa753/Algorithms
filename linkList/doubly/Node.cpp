#include "Node.h"

Node::Node(std::string value):data(value), next(NULL), prev(NULL){}
Node::Node():data(""),next(NULL),prev(NULL){}
Node::~Node(){}
