#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Sep  1 12:57:03 2021

@author: vishnu
"""
#TO CHECK A NUMBER IS DIVISIBLE BY 11 OR NOT.
x=input('Enter a number:')
l=len(x)
even=0
odd=0
for i in range(0,l):
    if(i%2==0):
        odd=odd+int(x[i])
    else:
        even=even+int(x[i])
if (odd-even)%11==0 :
    print(x,'is divisible by 11')
else:
    print(x,'is not divisible by 11')
     
    
    