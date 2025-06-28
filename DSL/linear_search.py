n = int(input("no.of students present for tranning program : "))
present = []

def entry():
    for i in range(n):
        p = int(input("enter roll no. of students who are present for tranning program : "))
        present.append(p)

def linear_search():
    if x in present:
        print(x," is present for tranning program")
    else:
        print(x," is absent for tranning program ")

def sentinel_search():
    if x not in present:
        present.append(x)
    print(x," is present for tranning program")

start=0
def binary_search(present,x,start,n):
    mid =(start+n)// 2
    if x==present[mid]:
        print(x,"is present for traning program")
    elif x<present[mid]:
        binary_search(present,x,start,mid-1)
    elif x>present[mid]:
        binary_search(present,x,mid+1,n)

def fibonacci_search(present,x,n):
    a1=0
    a2=1
    a3=a2+a1
    while(a3<n):
        a1=a2
        a2=a3
        a3=a2+a1
    offset=-1
    while(a3>1):
        i=min(offset+a1,n-1)
        if (present[i]>x):
            a3=a1
            a2=a2-a1
            a1=a3-a2
        elif(present[i]<x):
            a3=a2
            a2=a1
            a1=a3-a2
            offset=i
        else:
            return i
    if (a2 and present[n-1]==x):
        return n-1
    else:
        return -1

print(" 1) entry of roll no\n 2) linear search\n 3) sentinel search\n 4) binary search\n 5) fibonacci search ")
print("\t")

while(True):
    ch=int(input("enter choice : "))
    if ch==1:
        entry()
        print("present students for tranning program : ", present)
        print("\t")
    elif ch==2:
        x = int(input(("The roll no you want to check is : ")))
        linear_search()
        print("\t")
    elif ch==3:
        x = int(input(("The roll no that you want to add is : ")))
        sentinel_search()
        print("\t")
    elif ch==4:
        x = int(input(("The roll no you want to check is : ")))
        present.sort()
        if x not in present:
            print(x,"is absent for traning program ")
        binary_search(present,x,start,n)
        print("\t")
    elif ch==5:
        n=len(present)
        present.sort()
        print("sorted list",present)
        x = int(input(("The roll no you want to check : ")))
        b=fibonacci_search(present,x,n)
        if b>=0:
            print("at index ",b," element found")
        else:
            print("element not found")
        print("\t")
    else:
        print("enter valid choice")