Python 3.14.3 (tags/v3.14.3:323c59a, Feb  3 2026, 16:04:56) [MSC v.1944 64 bit (AMD64)] on win32
Enter "help" below or click "Help" above for more information.
>>> list1=[1,2,3]
>>> print(list1[0])
1
>>> set1=(1,2,3)
>>> set2={1,2,3}
>>> for x in set2:
...     print(x)
... 
...     
1
2
3
>>> set2.add("hello")
>>> print(set2)
{'hello', 1, 2, 3}
>>> AADD
Traceback (most recent call last):
  File "<pyshell#9>", line 1, in <module>
    AADD
NameError: name 'AADD' is not defined
>>> set3={4,5,6}
>>> set2.update(set3)
>>> print(set2)
{'hello', 1, 2, 3, 4, 5, 6}
>>> set2.remove(1)
>>> print(set2)
{'hello', 2, 3, 4, 5, 6}
>>> set2.discard(2)
>>> print(set2)
{'hello', 3, 4, 5, 6}
>>> set2.discard(232341234)
>>> print(set2)
{'hello', 3, 4, 5, 6}
>>> set_1={1,2,3,4}
>>> set_2={9,6,1,7,3}
>>> print(set_1.union(set_2))
{1, 2, 3, 4, 6, 7, 9}
>>> x=frozenset({1,2,3})
>>> print (x)
frozenset({1, 2, 3})
>>> print(type(x))
<class 'frozenset'>
