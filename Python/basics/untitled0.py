# #list
# a = [10,20,30,10,20]
# print(a)
# print(len(a))
# a[2]=60
# print(a)

# #list constructor 
# b = list((100,200,300))
# print(b)

# #oprations
# a=[10,20,30,40,50]
# b=['a','b','c']
# print("Insertion")
# a.insert(3,60)
# print(a)
# a.append(20)
# print(a)
# a.extend(b)
# print(a)

# a =  {'a':10,'b':10}
# print(a)
# a['b']=49
# print(a)
# a['c']=100
# print(a)


a=[]
num = int(input())
for i in range(num):
    n = int(input())
    a.append(n)
print(sum(a))
