#include <stdlib.h>

struct pq {
    int currentVal;
    struct pq *nextVal;
};

int totalChecks = 0;

pq *pqinsert(pq *queue, int queueLen, int number) {
    // Parameters:
    // queue: a reference to the pq (priority queue, a linked list)
    // queueLen: the length of the linked list
    // number: the number to insert
    // Returns a pq* (reference to the start of the queue, which should be the
    // smallest value).

    // This is a reference to the start of the linked list
    pq *startNode = queue;
    // This is the new node to insert into the linked list
    pq newVal;

    // This is the node we're actually checking right now
    pq currentNode = *queue;
    // This is the node before the node we're checking right now in the linked
    // list
    pq previousNode = NULL;

    // Find where to insert the number, keeping track of number of values I
    // have to check as nChecks
    for (int nChecks = 0; nChecks < queueLen; nChecks++) {
        if (number <= currentVal) {
            if (previousNode != NULL) {
                // Insert and reassign pointers. Beginning hasn't changed, so
                // just return startNode
                pq *nextVal = currentNode.nextVal;
                newVal.nextVal = nextVal;
                newVal.currentVal = number;
                // TODO print nChecks +1 before returning
                totalChecks += nChecks + 1;
                return startNode
            } else {
                // Insert. There is no previous node in the list, so this is
                // the new beginning of the list. Return it.
                newVal.nextVal = startNode;
                newVal.currentVal = number;
                // TODO print nChecks +1 before returning
                totalChecks += nChecks + 1;
                return newVal;
            }
        } elif (nChecks == queueLen - 1) {
            // This is a larger value than all values in the linked list.
            // Append it to the end by reassigning pointers.
            newVal.nextVal = NULL;
            newVal.currentVal = number;
            currentNode.nextVal = newVal;
            // TODO print nChecks +1 before returning
            totalChecks += nChecks + 1;
            return startNode;
        } else {
            // Not done yet. Continue iterating through the list.
            currentNode = *currentNode.nextVal;
        }
    }
}

pq *pqremove(pq *queue) {
    // Parameters;
    // queue: a reference to the pq (priority queue, a linked list)
    // Returns:
    // a reference to the linked list with the smallest element removed, or
    // null if the queue is null (no longer has any elements)
    if (queue != NULL) {
        return queue.nextVal;
    } else {
        return NULL;
    }
}

int main() {
    // TODO Initialize queue. Queue should be a reference to a pq, since we
    // will dereference the pointer later. Read and add the first value from
    // the file. This requires 0 checks.
    // TODO For loop to read input. Assign insert values to number. Change if
    // (number) to if (an insert is occurring)
    int queueLen = 0;
    if (number) {
        queue = pqinsert(queue, queueLen, number);
        queueLen += 1;
    } else {
        queue = pqremove(queue);
    }
    // TODO Print contents of queue. Probably an efficient way to do this but
    // iterating through the linked list will work.
}
