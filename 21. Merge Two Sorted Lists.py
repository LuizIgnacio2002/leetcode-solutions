class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        # Create a dummy node to serve as the head of the merged list
        dummy_head = ListNode()
        current = dummy_head

        while list1 is not None and list2 is not None:
            if list1.val < list2.val:
                current.next = list1
                list1 = list1.next
            else:
                current.next = list2
                list2 = list2.next
            current = current.next

        # If one of the lists is exhausted, append the remaining elements of the other list
        if list1 is not None:
            current.next = list1
        elif list2 is not None:
            current.next = list2

        # The merged list starts from the next of the dummy head
        return dummy_head.next
