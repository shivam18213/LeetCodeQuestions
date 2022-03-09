class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
      ListNode* q =head;
      ListNode* p =NULL;
      
      if(q!= NULL && q->next != NULL)
      {
        p=q;
        q=q->next;
      }
      else{
        return head;
      }
      while(p->next != NULL ){
       
        if(p->val != q->val){
          p=q;
          q=q->next;}
        else{
          p->next = q->next;
          q=q->next;
         } 
        }
  return head;
   }};