/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* A = headA;
        ListNode* B = headB;
        while(headA->next && headB->next){
            headA = headA->next;
            headB = headB->next;
        }
        int count=0;
        int flag=0;
        while(headA->next != nullptr){
            count++;
            flag=1;
            headA = headA -> next;
        }
        while(headB->next != nullptr){
            count++;
            flag=2;
            headB = headB -> next;
            
        }
        if(flag == 1){
            while(A->next && (count > 0)){
                count--;
                A = A->next;
            }
        }
        if(flag == 2){
            while(B->next && (count > 0)){
                count--;
                B = B->next;
            }
        }
        while(!(A == B)){
            A = A->next;
            B = B->next;
        }
        return A;
        
    }
};