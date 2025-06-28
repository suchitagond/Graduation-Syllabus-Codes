n=int(input("no of student "))
p=[]
def entry():
    for i in range(n):
        a=int(input("enter persentage "))
        if(a>100 or a<0):
            a = int(input("enter persentage "))
        p.append(a)
    print("unsorted ",p)
entry()
def partition(low,high):
    pivot=p[high]
    i=low-1
    for j in range(low,high):
        if p[j]<pivot:
            i+=1
            (p[i],p[j])=(p[j],p[i])
    (p[i+1],p[high])=(p[high],p[i+1])
    return  i+1
def quick(low,high):
    if low<high:
        pi=partition(low,high)
        quick(low,pi-1)
        quick(pi+1,high)
quick(0,n-1)
print("sorted ",p)