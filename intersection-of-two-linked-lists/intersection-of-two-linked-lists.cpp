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
        // count A
        ListNode* p1=headA;
        ListNode* p2=headB;
        int c1=0;
        int c2=0;
        while(p1 != nullptr || p2 !=nullptr){
            if(p1 != nullptr){
                c1++;
                p1=p1->next;
            }
            if(p2 != nullptr){
                c2++;
                p2=p2->next;
            }
        }
        p1= headA;
        p2= headB;
        int d=0;
        if(c1 >= c2){
            d=c1-c2;
            while(d !=0){
                p1=p1->next;
                d--;
            }
        }
        if(c1 < c2){
            d=c2-c1;
            while(d !=0){
                p2=p2->next;
                d--;
            }
        }
        while(p1 != nullptr && p2 != nullptr){
            if(p1 == p2)
                return p1;
            cout<<"p1"<<p1->val<<'\n';
            cout<<"p2"<<p2->val<<'\n';
            p2=p2->next;
            p1=p1->next;
        }
        return nullptr;
        }
};