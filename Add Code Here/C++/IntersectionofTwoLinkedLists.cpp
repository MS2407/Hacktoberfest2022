ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* node1 = headA,*node2 = headB;
        int len1 = 0,len2 = 0;
        
        while(node1!=NULL){
            node1 = node1->next;
            len1++;
        }
         while(node2!=NULL){
            node2 = node2->next;
            len2++;
        }
        
        int dif = 0;
        ListNode* mov,*notMov;
        
       if(len1 > len2){
            mov = headA;
            notMov = headB;
        }
        else{
            mov = headB;
            notMov = headA;
        }
        dif = abs(len1-len2);
        while(dif > 0){
            mov = mov->next;
            dif--;
        }
        
        while(mov!=NULL && notMov!=NULL && mov != notMov){
            mov = mov->next;
            notMov = notMov->next;
        }
        
        return mov;
        
    }
