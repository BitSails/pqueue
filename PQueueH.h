// Priority Queue ADT
// Min-heap implementation
 
#include <vector>
using namespace std;

#define n data.size() - 1

class PriorityQueue
   {

     private:
        vector<int> data = {-99999};//dummy value at index 0
                                    // valid indicies are 1 ... 𝑛

     public:
        void insert(int);        // 𝛳 (1)
        int deleteMin();         // 𝛳 (?)
        int size();              // 𝛳 (1)
        void clear();


 // Technically these are not priority queue methods
 // But they are useful to have when using a heap implementation

        void heapifyDown(int);   // others .. 
        void heapifyUp(int);
        void buildHeap();
    };
