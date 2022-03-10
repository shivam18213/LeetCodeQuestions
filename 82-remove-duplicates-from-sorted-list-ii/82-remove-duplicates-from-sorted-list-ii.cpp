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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        // define sentinal node
        ListNode* sentinal = new ListNode();
        sentinal->val = -1;
        sentinal->next = head;
        ListNode* p = sentinal;
        while(head != nullptr){
            if(head->next != nullptr && head->val == (head->next)->val){
                while(head->next != nullptr && head->val == (head->next)->val){
                    head = head->next;
                }
                p->next = head->next;
            }
            else{
                p = p->next;
            }
            head = head->next;
        }
        return sentinal->next;
    }
};