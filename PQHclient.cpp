#include <iostream>
#include <vector>
#include "PQueueH.h" // Use Heap implementation

int main()
   {
       PriorityQueue pqueue; 

       auto x = 13.75;
       vector<int> Vec;
 
       for (auto z: {10, 14, 8, 12, 7, 20, 17})
       {
          pqueue.insert(z);
       }

       pqueue.buildHeap();

      cout<<"Deleted "<< pqueue.deleteMin()<<" from priority queue"<<endl;
      cout<<"Inserting 5 to priority queue"<<endl;    
       
      pqueue.insert(5);
      pqueue.heapifyUp( pqueue.size() - 1 );
      cout<<"Deleted "<< pqueue.deleteMin()<<" from priority queue"<<endl;

       
      while (pqueue.size() > 0)
        v.push_back( pqueue.deleteMin());

    
      for (auto z: Vec)
        cout<<z<<" ";

    cout<<endl;

     }
