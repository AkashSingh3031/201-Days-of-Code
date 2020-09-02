##### 5th solution
#--------------------------------------------------------------
class Person:
    def __init__(self,initialAge):
        # Add some more code to run some checks on initialAge
        self.age = 0
        if initialAge < 0:
            print("Age is not valid, setting age to 0.")
        else:
            self.age = initialAge

    def amIOld(self):
        # Do some computations in here and print out the correct statement to the console
        if age < 13:
            print("You are young.")
        elif 13 <= age < 18:
            print("You are a teenager.")
        elif age >= 18:
            print("You are old.")

    def yearPasses(self):
        # Increment the age of the person in here
        global age
        age += 1

t = int(input())

##### 6th solution
#---------------------------------------------------------
#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    print(*['%d x %d = %d' % (n, i, n*i) for i in range(1, 11)], sep='\n')

##### 7th solution
#---------------------------------------------------------
for i in range(int(input())):
    s = input()
    print(*[''.join(s[::2]), ''.join(s[1::2])])


##### 8th solution
#---------------------------------------------------------
#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    print(' '.join(map(str, arr[::-1])))
