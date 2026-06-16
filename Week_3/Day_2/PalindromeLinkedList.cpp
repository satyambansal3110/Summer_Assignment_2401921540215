class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> ans;
        ListNode* p=head;
        while(p){
            ans.push_back(p->val);
            p=p->next;
        }
        int i=0;
        int j=ans.size()-1;
        while(i<=j){
            if(ans[i] != ans[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
