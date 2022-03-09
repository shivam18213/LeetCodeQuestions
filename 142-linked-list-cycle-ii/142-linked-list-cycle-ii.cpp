class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      ListNode* n= NULL;
        if (head==NULL || head->next == NULL || (head->next)->next == NULL)
            return n;
        ListNode *s=head;
        ListNode *f=head;
        s=s->next;
        f=(f->next)->next;
        while (f != nullptr){
          if(f->next==NULL || f->next->next == NULL)
            break;
          if(f==s)
            break;
          s=s->next;
          f=f->next->next;
        }
      if(f!=s)
       return n;      
      s=head;
      while(s!=f){
        s=s->next;
        f=f->next;
      }
      return s;
    }
};