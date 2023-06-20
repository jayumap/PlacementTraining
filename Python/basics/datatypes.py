a=10;
print(type(a))

a="hi"
print(type(a))

a=1.7
print(type(a))

a=10+20j
print(type(a))

a=True
print(type(a))

a=10
print(memoryview(bytes(a)))

a=10
b=20
print(a is not b,a)

a=10
b=[10,20,30]
#print(a in a)
#print(b in a)
#print(b in b)
print(a in b, b in a)