class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p=head;
        int c=0;
        while(p){
            c++;
            p=p->next;

        }
        ListNode*p1=head;
        int pos=c-n;
        if (pos == 0) {
            return head->next;
        }
        int m=0;
        while(p1){
            m++;
            if(m==pos){
                p1->next=p1->next->next;
            }
            p1=p1->next;
        }
        return head;
    }
};
