r=int(input("no of rows in a matrix : "))
c=int(input("no of columns in a matrix : "))
def entry():
    m=[]
    for i in range(r):
        n=[]
        for j in range(c):
            a=int(input("enter a value : "))
            n.append(a)
        m.append(n)
    return m
def display(m):
    for i in range(r):
        for j in range(c):
            print(m[i][j],end=" ")
        print("\n")
def addition():
    for i in range(r):
        for j in range(c):
            print(m1[i][j]+m2[i][j],end=" ")
        print("\n")
def subtration():
    for i in range(r):
        for j in range(c):
            print(m1[i][j] - m2[i][j], end=" ")
        print("\n")
def mult():
    a=[]
    for i in range(r):
        b=[]
        for j in range(c):
            add=0
            for k in range(c):
                add+=m1[i][k]*m2[k][j]
            b.append(add)
        a.append(b)
    return a
def trans():
    for i in range(r):
        for j in range(c):
            print(m1[j][i],end=" ")
        print("\n")
    for i in range(r):
        for j in range(c):
            print(m2[j][i],end=" ")
        print("\n")

while(True):
    print(" 1)entry 1st matrix\n2)enter 2nd matrix\n3)display\n4)add\n5)sub\n6)mult\n7)trans\n")
    ch=int(input("enter choice : "))
    if(ch==1):
        m1=entry()
        display(m1)
    if(ch==2):
        m2=entry()
        display(m2)
    if(ch==4):
        addition()
    if(ch==5):
        subtration()
    if(ch==6):
        a=mult()
        display(a)
    if(ch==7):
        trans()
    if(ch==8):
        break
