print('SUB : Fundamental of Data Structure')
n=int(input("enter no. of students in a class : "))
marks=[]
for i in range(n):
    m = int(input("enter marks of student : "))
    marks.append(m)
marks1=[]
for i in marks:
    if i!=-1:
        marks1.append(i)
l=len(marks1)

#case 1
def avg():
    sum=0
    for i in marks:
        if i!=-1:
            sum=sum+i
    print("sum of score of the class is : ", sum)
    a = sum / l
    print("average of marks is : ",a)
avg()

#case 2
def max_min():
    max=marks1[0]
    for i in marks1:
        if i>max:
            max=i
    print("maximum score is :",max)
    min=marks1[0]
    for i in marks1:
        if i<min:
            min=i
    print("minimum score is :",min)
max_min()

#case 3
def absent():
    count=0
    for i in marks:
        if i==-1:
            count+=1
    print("no. of students absent for the test are : ",count)
absent()

#case 4
def frequency():
    p=[]
    for i in marks1:
        if i not in p:
            p.append(i)
    for j in p:
        fre=marks1.count(j)
        print("frequency of marks ",j,"is ",fre)
frequency()
