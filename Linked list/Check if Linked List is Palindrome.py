"""
Given a singly linked list of size N of integers,check if the given linked list is palindrome or not.
"""

class Node:
		    def __init__(self, data):   # data -> value stored in node
		        self.data = data
		        self.next = None
		
	



def isPalindrome(self, head):
        temp = head
        stack = []
        while temp is not None:
            stack.append(temp.data)
            temp = temp.next
            
        temp = head
        while temp is not None:
            if(stack.pop() !=temp.data):
                return 0;
            temp = temp.next
            
        return 1