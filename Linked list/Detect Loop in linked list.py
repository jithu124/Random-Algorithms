"""
Detect Loop in linked list in python
Given a linked list of N nodes, check if the linked list has a loop. Linked list can contain self loop.
"""

def detectLoop(self, head):
        
        l ={}
        while head is not None:
            if id(head) in l:
                return True
            l[id(head)]=1
            
            head = head.next
        
        return False