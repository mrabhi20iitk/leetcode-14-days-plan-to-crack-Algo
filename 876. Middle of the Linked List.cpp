class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count =0;
        ListNode *temp = head;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        for(int i =1;i<(count+2)/2;i++){
            head = head->next;
        }
        return head;
    }
};
