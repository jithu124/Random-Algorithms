"""
Remove loop in Linked List
Given a linked list of N nodes such that it may contain a loop.
A loop here means that the last node of the link list is connected to the node at position X. If the link list does not have any loop, X=0.
Remove the loop from the linked list, if it is present.  

# node class:

class Node:
    def __init__(self,val):
        self.next=None
        self.data=val
"""


def removeLoop(self, head):
        # remove the loop without losing any nodes
        l = {}
        prev = None
        while head is not None:
            if id(head) in l:
                prev.next = None 
                return
            l[id(head)]=1
            prev = head
            head = head.next