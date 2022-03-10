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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        if((head -> next)->next == nullptr){
            ListNode* a = head;
            ListNode* b = head->next;
            a->next = nullptr;
            b->next = a;
            return b;
        }
        ListNode* p = head;
        ListNode* q = head->next;
        ListNode* r = (head->next)->next;
        int c = 0;
        while(q->next != nullptr){
            if(c == 0){
                p->next = nullptr;
            }
            q->next = p;
            p = q;
            q = r;
            r = r->next;
            c++;
        }
        q->next = p;
        return q;
    }
};