// Priority Queue ADT
// Min-heap implementation
 
#include <vector>
using namespace std;

class PriorityQueue
   {

     private:
        vector<int> H = {-99999};//dummy value at index 0
                                 // valid indicies are 1 ... 𝑛

     public:
        void insert(int);        // 𝛳 (1)
        int deleteMin();         // 𝛳 (?)
        int size();              // 𝛳 (1)
        void clear();            // 𝛳 (𝑛)


 // Technically these are not priority queue methods
 // But they are useful to have when using a heap implementation

        void heapifyDown(int);    // 𝛳 (?)   
        void heapifyUp(int);      // 𝛳 (?)
        void buildHeap();         // 𝛳 (?)
    };
