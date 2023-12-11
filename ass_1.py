def accept(A,str):
    n=int(input("Enter the total no. of student who play %s : "%str))
    for i in range(n):
        x=input("Enter the name of student %d who play %s : "%((i+1),str))
        A.append(x)
    print("Set accepted succesfully.")
def display(A,str):
    n=len(A)
    if(n==0):
        print("Group of students who play",str,"is {}")
    else:
        print("Group of students who play",str,"is {",end=" ")
        for i in range(n-1):
            print(A[i],end=",")
        print(A[n-1],"}")
def search(A,X):
    n=len(A)
    for i in range(n):
        if(A[i]==X):
            return 1
    return 0
def intersection(A,B,C):
    n=len(A)
    for i in range(n):
        flag=search(B,A[i])
        if(flag==1):
            C.append(A[i])
def union(A,B,C):
    n=len(A)
    for i in range(n):
        C.append(A[i])
    for i in range(len(B)):
        flag=search(C,B[i])
        if(flag==0):
            C.append(B[i])
def diff(A,B,C):
    n=len(A)
    for i in range(n):
        flag=search(B,A[i])
        if(flag==0):
            C.append(A[i])


def main():
    gpa=[]
    gpb=[]
    gpc=[]
    
    while True:
       grp=[]
       print ("\t1 : Accept the Information")
       print ("\t2 : List of students who play both cricket and badminton")
       print ("\t3 : List of students who play either cricket or badminton but not both")
       print ("\t4 : Number of students who play neither cricket nor badminton")
       print ("\t5 : Number of students who play cricket and football but not badminton")
       print ("\t6 : Exit")  
       ch=int(input("Enter the choice:"))
       if(ch==6):
           print("End of program!")
           break
       elif(ch==1):
           accept(gpa,"Cricket")
           accept(gpb,"Badminton")
           accept(gpc,"Football")
           display(gpa,"Cricket")
           display(gpb,"Badminton")
           display(gpc,"Football")
       elif(ch==2):
           display(gpa,"Cricket")
           display(gpb,"Badminton")
           intersection(gpa,gpb,grp)
           display(grp,"both cricket and badminton")
       elif(ch==3):
           display(gpa,"Cricket")
           display(gpb,"Badminton")
           r1=[]
           r2=[]
           union(gpa,gpb,r1)
           intersection(gpa,gpb,r2)
           diff(r1,r2,grp)
           display(grp,"either cricket or badminton")
       elif(ch==4):
           display(gpa,"Cricket")
           display(gpb,"Badminton")
           r1=[]
           union(gpa,gpb,r1)
           diff(gpc,r1,grp)
           display(grp,"Only football")
       elif(ch==5):
           display(gpa,"cricket")
           display(gpc,"Football")
           display(gpb,"Badminton")
           r1=[]
           union(gpa,gpc,r1)
           diff(r1,gpb,grp)
           display(grp,"Cricket and football but not badminton1")
       else:
           print("Wrong choice!")
          
main()
quit()