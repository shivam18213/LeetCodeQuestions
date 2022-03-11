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
    vector<int> rotateArray(vector<int> v, int k){
        while( k > v.size()){
            k = k % v.size();
        }
        vector<int> a(v.size());
        for(int i=0; i < v.size(); i++){
            a[(i+k)%v.size()] = v[i];
        }
        return a;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        // store the elements of ll in vector
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        vector<int> v;
        ListNode* p = head;
        while(p != nullptr){
            v.push_back(p->val);
            p = p->next;
        }
        vector<int> a = rotateArray(v, k);
        ListNode* dummy = new ListNode();
        head = dummy;
        for(int i = 0; i < a.size(); i++){
            ListNode* node = new ListNode(a[i],nullptr);
            head->next = node;
            head = head->next;
        }
        return dummy->next;
        
    }
};