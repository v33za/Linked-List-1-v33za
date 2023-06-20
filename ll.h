#include "node.h"

class LL{
   nodePtr hol; //head of linked list
   int size;
  public:
     LL();
      void insert_node(int,string);
	    void print_all();
     ~LL();
};
LL::LL(){
  hol=NULL;
  size=0;
}

LL::~LL()
{
  nodePtr t=hol;
  while(hol){
    t=hol->get_next();
    delete hol;
    hol = t;
  }
}

void LL::insert_node(int x, string y)
{
  if(hol==NULL) hol=new node(x,y);
  else
  {
    nodePtr temp = hol;
    while(temp->get_next()!=NULL)
      {
        temp=temp->get_next();
      }
    temp->set_next(new node(x,y));
  }
}

 void LL::print_all()
{
  nodePtr t;
    for(t=hol;t ; t=t->get_next())
      {
        t->print();
      }
}