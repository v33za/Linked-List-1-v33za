#include <iostream>

using namespace std;
#include "ll.h"

int main(int argc, char **argv){
	    LL l;
 		
		for(int i=0,j=0; i<(argc-1)/2; i++,j+=2) 
    {
			l.insert_node( atoi(argv[j+1]), argv[j+2]);
      }
	 	l.print_all();

}//automatically call destructor
