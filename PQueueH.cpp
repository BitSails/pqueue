#include "PQueueH.h"

void PriorityQueue::clear()
{
  H.clear();
}

int PriorityQueue::size()
{
  return H.size() - 1;
}
