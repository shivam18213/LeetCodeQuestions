/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
// using hashmaps
class Solution {
public:
    Node* copyRandomList(Node* head) {
        // 
        Node* p = head;
        unordered_map<Node*, Node*> nodes;
        while(p != nullptr){
            Node* nNode = new Node(p->val);
            nodes[p] = nNode;
            p= p->next;
        }
        // original node and its copies are stored in hashmap
        p = head;
        // traversing original linkedList again
        // and making new linkedlist
        while(p != nullptr){
            Node* clonePtr = nodes[p];
            clonePtr->next = nodes[p->next];
            clonePtr->random = nodes[p->random];
            p = p->next;
        }
        return nodes[head];
    }
};