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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1;
        stack<int> s2;
        stack<int> s3;
        ListNode* p = l1;
        ListNode* q = l2;
        while(p != nullptr){
            s1.push(p->val);
            p= p->next;
        }
        while(q != nullptr){

            s2.push(q->val);

            q= q->next;

}
        int c = 0;
        ListNode* dummy = new ListNode();
        ListNode*head = dummy;
        while(!s1.empty() || !s2.empty() || c > 0){
            int sum=0;
            if(!s1.empty()){
                sum += s1.top();
                s1.pop();
                
            }
            if(!s2.empty()){

                sum += s2.top();
                s2.pop();
                
                
                


            }
            sum += c;
            c = sum / 10;
            sum = sum % 10;
            s3.push(sum);
           
            
        }
        while(!s3.empty()){
            ListNode* n = new ListNode(s3.top());
            head-> next= n;
            head = head->next;
            s3.pop();

            
        }
        return dummy-> next;
        
    }
};