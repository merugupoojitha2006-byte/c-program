Python 3.14.3 (tags/v3.14.3:323c59a, Feb  3 2026, 16:04:56) [MSC v.1944 64 bit (AMD64)] on win32
Enter "help" below or click "Help" above for more information.
list1=[1,2,2,2.0,"poojitha"True]
SyntaxError: invalid syntax. Perhaps you forgot a comma?
list1=[1,2,2,2.0,"poojitha",True]
print (list1)
[1, 2, 2, 2.0, 'poojitha', True]
 print(len(list1)
       
SyntaxError: unexpected indent
print(len(list))
       
Traceback (most recent call last):
  File "<pyshell#4>", line 1, in <module>
    print(len(list))
TypeError: object of type 'type' has no len()
print(len(list1))
       
6
print(type(list1))
       
<class 'list'>
print(list1[3])
       
2.0
print(list1[3.5])
       
Traceback (most recent call last):
  File "<pyshell#8>", line 1, in <module>
    print(list1[3.5])
TypeError: list indices must be integers or slices, not float
print(list1[3:5])
       
[2.0, 'poojitha']
print(list1[1:4])
       
[2, 2, 2.0]
print(list1[:4])
       
[1, 2, 2, 2.0]
print(list1[:])
       
[1, 2, 2, 2.0, 'poojitha', True]
print(list1[:-1])
       
[1, 2, 2, 2.0, 'poojitha']
print(list1[-1:5])
       
[]
list1[2]=3
       
print(list1)
       
[1, 2, 3, 2.0, 'poojitha', True]
list1[2/5]=3/6
       
Traceback (most recent call last):
  File "<pyshell#17>", line 1, in <module>
    list1[2/5]=3/6
TypeError: list indices must be integers or slices, not float
list1[1:4]=[5,6,7]
       
print(list1)
       
[1, 5, 6, 7, 'poojitha', True]
list1[1:2]=["hello","bye"]
       
print(list1)
       
[1, 'hello', 'bye', 6, 7, 'poojitha', True]
list1.insert(2,"good morning")
...        
>>> print(list1)
...        
[1, 'hello', 'good morning', 'bye', 6, 7, 'poojitha', True]
>>> list1.append("good night")
...        
>>> print(list1)
...        
[1, 'hello', 'good morning', 'bye', 6, 7, 'poojitha', True, 'good night']
>>> list2=["i","am"]
...        
>>> list3=["girl"]
...        
>>> list2.extend(list3)
...        
>>> print(list2)
...        
['i', 'am', 'girl']
>>> list2.remove("girl")
...        
>>> print(list2)
...        
['i', 'am']
>>> list5.remove(1)
...        
Traceback (most recent call last):
  File "<pyshell#32>", line 1, in <module>
    list5.remove(1)
NameError: name 'list5' is not defined. Did you mean: 'list1'?
>>> list5=[1,1,1,1,1]
...        
>>> list5.remove(1)
...        
>>> print(list5)
...        
[1, 1, 1, 1]
>>> list1.pop(0)
...        
1
>>> print(list1)
...        
['hello', 'good morning', 'bye', 6, 7, 'poojitha', True, 'good night']
