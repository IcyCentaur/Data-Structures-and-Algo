from collections import deque

class Stack:
    def __init__(self):
        self.buffer = deque()
    
    def push(self, data):
        self.buffer.append(data)
    def pop(self):
        if self.buffer:
            self.buffer.pop()
    def size(self):
        return len(self.buffer)
    def peek(self):
        if self.buffer:
            return self.buffer[-1]


class Solution:
    def isValid(self, s: str) -> bool:
        t = Stack()
        for i in s:
            if i in '([{':
                t.push(i)
            elif i in ')]}':
                if (i == ')' and t.peek() == '(') or (i == '}' and t.peek() == '{') or (i == ']' and t.peek() == '['):
                    t.pop()
                else:
                    return False
        if t.size():
            return False
        return True
