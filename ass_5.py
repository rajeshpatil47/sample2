def accept(A):
    n=int(input("Enter the no of students:"))
    for i in range(n):
        m=int(input("Enter the marks of students:"))
        A.append(m)
    print("Marks successfully accepted.")
def display(A):
    if(len(A)==0):
        print("No records found!")
    else:
        print("Marks of students are : ")
        for i in range(len(A)):
            print(A[i],end=" ")
        print()
#def binary(A):
def ss(A):
    n=len(A)
    for i in range(n-1):
        min_index=i
        for j in range(i+1,n):
            if(A[j]<A[min_index]):
                min_index=j
        if(A[min_index]!=A[i]):
            temp=A[i]
            A[i]=A[min_index]
            A[min_index]=temp
                
def bbs(A):
    n=len(A)
    for i in range(n-1):
        for j in range(n-i-1):
            if(A[j]>A[j+1]):
                temp=A[j]
                A[j]=A[j+1]
                A[j+1]=temp

def main():
    FDS=[]
    while(True):
        print("\n\n")
        print("\t1: Accept percentage of First Year Students ")
        print("\t2: Display percentage of students  ")
        print("\t3: Selection Sort ")
        print("\t4: Bubble sort")
        print("\t5: Display top five scores")
        print("\t6: Exit")
        ch=int(input("Enter the choice:"))
        if(ch==6):
            break
        elif(ch==1):
            accept(FDS)
        elif(ch==2):
            display(FDS)
        elif(ch==3):
            ss(FDS)
            display(FDS)
        elif(ch==4):
            bbs(FDS)
            display(FDS)
        elif(ch==5):
            bbs(FDS)
            if(len(FDS)<=5):
                print("Top",len(FDS),"scores are:")
                print(FDS[::-1])
            else:
                print("The top five scores are:")
                print(FDS[len(FDS)-1:len(FDS)-7:-1])
        else:
            print("Enter valid option!")
main()
quit()
