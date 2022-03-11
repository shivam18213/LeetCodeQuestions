/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       if(head == nullptr || head->next == nullptr)
            return head;
        ListNode* p = head;
        int length =0;
        // length
        while(p->next != nullptr){
            length++;
            p = p->next;
        }
        length++;
        while( k > length){
            k = k % length;
        }
        if(head == nullptr || head->next == nullptr || k % length == 0){
            return head;
        }
        // make last point to first(circular linked list)
        p->next = head;
        p=head;
        for(int i= 0; i < length-k-1; i++){
            p=p->next;
        }
        ListNode* ret;
        ret = p->next;;
        p->next = nullptr;
        return ret;
    }
};