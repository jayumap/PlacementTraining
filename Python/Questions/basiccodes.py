

# #odd even
# if(num%2==0):
#     print("even")
# else:
#     print("odd")

# #sum
# num = int(input())
# sum = 0
# for i in range(num+1):
#     sum = sum+i
# print(sum)

# # largest element in list 
# num = int(input())
# l =[]
# for i in range(num):
#     el = int(input())
#     l.append(el)
# l.sort()
# lar = l[-1]
# print(lar)

str1 = input()
str2 = input()

str1 = str1.replace(" ","").lower()
str2 = str2.replace(" ","").lower()

sorted1 = sorted(str1)
sorted2 = sorted(str2)

if(sorted1 == sorted2):
    print(1)
else:
    print(0)
    

