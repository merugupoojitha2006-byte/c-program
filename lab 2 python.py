Python 3.14.3 (tags/v3.14.3:323c59a, Feb  3 2026, 16:04:56) [MSC v.1944 64 bit (AMD64)] on win32
Enter "help" below or click "Help" above for more information.
a=int(input("enter first number"))
enter first number 10
b=int(input("enter second number"))
enter second number 20
c=int(input("enter third number"))
enter third number 30
greatest=a if (a>b and a>c) else (b if b>c else c)
print(greatest)
30
for ch is "poojitha"
SyntaxError: invalid syntax
for ch in "poojitha":
    print(ch)

    
p
o
o
j
i
t
h
a
for ch in "teja":
    print (ch)

    
t
e
j
a
for ch in "harikishan":
    print (ch)

    
h
a
r
i
k
i
s
h
a
n
for ch in "sujatha":
    print (ch)

    
s
u
j
a
t
h
a
for x in "pandu"
SyntaxError: expected ':'
for x in "pandu":
    print (x,end="%")

    
p%a%n%d%u%
print (x,end="
       
SyntaxError: unterminated string literal (detected at line 1)









,
print(x,end="<")
       
u<
for x in "pooji":
       print (x,end="/")

       
p/o/o/j/i/
for x in "poojitha":
       print (x,end="pooji")

       
ppoojiopoojiopoojijpoojiipoojitpoojihpoojiapooji
for x in "poojitha":
       print (x,end:"")
       
SyntaxError: invalid syntax
for x in "poojitha":
       print (x,end="")

       
poojitha
for x in "sujatha":
       print (x,end="&")

       
s&u&j&a&t&h&a&
for i in range(5)
       
SyntaxError: expected ':'
for i in range (5):
       print (i)

       
0
1
2
3
4
for x in range (10):
       print (x)

       
0
1
2
3
4
5
6
7
8
9
for x in range(start,end,step)
       
SyntaxError: expected ':'
for x in range (start,end,step):
       print (x)

       
Traceback (most recent call last):
  File "<pyshell#55>", line 1, in <module>
    for x in range (start,end,step):
NameError: name 'start' is not defined
for x on range (20):
       
SyntaxError: invalid syntax
for x in range (20):
       print (x)

       
0
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
for i in range (4,45,64):
       print (i)

       
4
for i in range (0,21,2):
       print (i)

       
0
2
4
6
8
10
12
14
16
18
20
for i in range (0,25,3):
       print (i)

       
0
3
6
9
12
15
18
21
24
for i in range (0,100,2):
       print (i,end="&")

       
0&2&4&6&8&10&12&14&16&18&20&22&24&26&28&30&32&34&36&38&40&42&44&46&48&50&52&54&56&58&60&62&64&66&68&70&72&74&76&78&80&82&84&86&88&90&92&94&96&98&
for x in range (0,50,1):
       print (x,end="")

       
012345678910111213141516171819202122232425262728293031323334353637383940414243444546474849
for i in range(1,11):
       print (5,"x",i,"=",num *i)

       
Traceback (most recent call last):
  File "<pyshell#77>", line 2, in <module>
    print (5,"x",i,"=",num *i)
NameError: name 'num' is not defined. Did you mean: 'sum'?
for i in range (1,11):
       print (5,"*",i,"=",5*i)

       
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
for i in range (1,21):
       print (7,"*",i,"=",7*i)

       
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70
7 * 11 = 77
7 * 12 = 84
7 * 13 = 91
7 * 14 = 98
7 * 15 = 105
7 * 16 = 112
7 * 17 = 119
7 * 18 = 126
7 * 19 = 133
7 * 20 = 140
for i in range (1,15):
       print (18,"*",i,"=",18*i)

       
18 * 1 = 18
18 * 2 = 36
18 * 3 = 54
18 * 4 = 72
18 * 5 = 90
18 * 6 = 108
18 * 7 = 126
18 * 8 = 144
18 * 9 = 162
18 * 10 = 180
18 * 11 = 198
18 * 12 = 216
18 * 13 = 234
18 * 14 = 252
for i in range (3):
       for j in range (3):
       print (i,j)
       
SyntaxError: expected an indented block after 'for' statement on line 2
for i in range(3):
       for j in range(3):
...          print (i,j)
... 
...        
0 0
0 1
0 2
1 0
1 1
1 2
2 0
2 1
2 2
>>> for i in range (5):
...        for j in range (5):
...          print (i,j)
... 
...        
0 0
0 1
0 2
0 3
0 4
1 0
1 1
1 2
1 3
1 4
2 0
2 1
2 2
2 3
2 4
3 0
3 1
3 2
3 3
3 4
4 0
4 1
4 2
4 3
4 4
