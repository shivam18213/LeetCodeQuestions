
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* front = head;
        Node* back = head;
        // inserting buffer nodes in between
        while(back != nullptr){
            Node* n = new Node(back -> val);
            front= back->next;
            back->next = n;
            n->next = front;
            back = front;
        }
        // arangeing random pointers
        back = head;
        while(back != nullptr){
            if(back->random != nullptr)
                back->next->random = back->random->next;
            back = back->next->next;
        }
        
        back = head;
        Node* dummy = new Node(-1);
        Node* buffers = dummy;
        while(back != nullptr){
            front = back->next->next;
            buffers->next = back->next;
            back->next = front;
            buffers = buffers->next;
            back = front;
        }
        return dummy->next;
    }       
};