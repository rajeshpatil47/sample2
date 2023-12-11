def accept(A):
    n=int(input("Enter the no of students:"))
    for i in range(n):
        while(True):
            x=input("Enter the marks score of student %d : "%(i+1))
            if(x=='AB'):
                x=-1
                break
            x=int(x)
            if(x>=0 and x<=30):
                break
            else:
                print("Please enter valid marks!")
        A.append(x)
    print("Marks accepted successfully.")
def display(A):
    print("Marks scored in fds subject:")
    for i in range(len(A)):
        if(A[i]==-1):
            print("Student : ",i+1,"Absent")
        else:
            print("Student :",i+1,A[i])
def avg(A):
    sum=0
    for i in range(len(A)):
        if(A[i]!=-1):
            sum+=A[i]
    average=sum/len(A)
    print("\nAverage score of class is",average)
def high_and_low(A):
    high=-1
    low=30
    for i in range(len(A)):
        if(A[i]!=-1):
            if(A[i]>high):
                high=A[i]
                max_index=i+1
            if(A[i]<low):
                low=A[i]
                min_index=i+1
    print("The highest score is",high,"of student",max_index)
    print("The lowest score is",low,"of student",min_index)
def abs(A):
    absent=0
    for i in range(len(A)):
        if(A[i]==-1):
            absent+=1
    print("No of absent students is :",absent)
def freq(A):
    freq=0
    for i in range(len(A)):
        count=0
        if(A[i]!=-1):
            for j in range(len(A)):
                if(A[i]==A[j]):
                    count+=1
            if(freq<count):
                freq=count
                marks=A[i]
    if(freq>1):
        display(A)
        print("The marks with highest frequency are",marks,"with frequency",freq)        
    else:
        print("There are no repeated marks.")        
        


def main():
    FDS=[]
    while True:
        print("\t\t1.Accept FDS marks")
        print("\t\t2.Average score of class")
        print("\t\t3.Highesh score and lowest score of class")
        print("\t\t4.Count of students who were absent")
        print("\t\t5.Display marks with highest frequency")
        print("\t\t6.Exit")
        ch=int(input("Enter the choice:"))
        if(ch==1):
            accept(FDS)
            display(FDS)
        elif(ch==2):
            avg(FDS)
        elif(ch==3):
            high_and_low(FDS)
        elif(ch==4):
            abs(FDS)
        elif(ch==5):
            freq(FDS)
        elif(ch==6):
            break
        else:
            print("Invalid choice!")
            
main()
quit()