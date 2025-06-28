n=int(input("no of student in a class "))
p=[]
def entry():
    for i in range(n):
        a=int(input("enter persentage "))
        if(a>100 and a<0):
            print("enter valid persentage : ")
            a = int(input("enter persentage "))
        p.append(a)
    print("unsorted persentage  ",p)
def selection():
    for i in range(n-1):
        for j in range(n):
            if i<j:
                if p[j]<p[i]:
                    temp=p[i]
                    p[i]=p[j]
                    p[j]=temp
    print("sortd array ", p)
    top = p[n:n - 6:-1]
    print("top five score ", top)
def bubble():
    for i in range(n-1):
        for j in range(n-1):
            if p[j]>p[j+1]:
                temp=p[j]
                p[j]=[j+1]
                p[j+1]=temp
    print("sortd array ", p)
    top = p[n:n - 6:-1]
    print("top five score ", top)
while(True):
    ch=int(input("enter choice "))
    if ch==1:
        entry()
    if ch==2:
        selection()
    if ch==3:
        bubble()
    if ch==4:
        break