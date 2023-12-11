def accept(M):
    r=int(input("Enter the no of rows:"))
    c=int(input("Enter the no of columns:"))
    for i in range(r):
        A=[]
        for j in range(c):
            A.append(int(input("")))
        M.append(A)
    print("Matrix accepted successfully.")
def display(M,r,c):
    print("Matrix :")
    for i in range(r):
        for j in range(c):
            print(" ",M[i][j]," ")
        print()
def add(M1,M2,M3,r,c):
    for i in range(r):
        A=[]
        for j in range(c):
            A.append(M1[i][j]+M2[i][j])
        M3.append(A)
def sub(M1,M2,M3,r,c):
    for i in range(r):
        A=[]
        for j in range(c):
            A.append(M1[i][j]-M2[i][j])
        M3.append(A)
def mul(M1,M2,M3,r,c1,c2):
    for i in range(r):
        A=[]
        for j in range(c2):
            sum=0
            for k in range(c1):
                sum+=(M1[i][k] * M2[k][j])
            A.append(sum)
        M3.append(A)
        
def transpose(M,T,r,c):
    for i in range(c):
        A=[]
        for j in range(r):
            A.append[j][i]
        T.append(A)       

def main():
    while(True):
        print("\t\t\t1: Accept Matrix");
        print("\t\t\t2: Display Matrix");
        print("\t\t\t3: Addition of Matrices");
        print("\t\t\t4: Substraction of Matrices");
        print("\t\t\t5: Multiplication of Matrices");
        print("\t\t\t6: Transpose Matrix");
        print("\t\t\t7: Exit");
        
        ch=int(input("Enter your choice:"))
        M1=[]
        M2=[]
        M3=[]
        if(ch==7):
            break
        elif(ch==1):
            print("Input first matrix.")
            accept(M1)
            print("Enter second matrix.")
            accept(M2)
            r1=len(M1)
            c1=len(M1[0])
            r2=len(M2)
            c2=len(M2[0])
        elif(ch==2):
            print("First matrix:")
            display(M1,r1,c1)
            print("Second matrix")
            display(M2,r2,c2)
            
        elif(ch==3):
            if(r1==r2 and c1==c2):
                add(M1,M2,M3,r1,c1)
                print("Addition :")
                display(M3,r1,c1)
            else:
                print("Addition is not possible!")
        elif(ch==4):
            if(r1==r2 and c1==c2):
                sub(M1,M2,M3,r1,c1)
                print("Subtraction:")
                display(M3,r1,c1)
            else:
                print("Subtraction is not possible!")
        elif(ch==5):
            if(c1==r2):
                mul(M1,M2,M3,r1,c1,c2)
                print("Multiplication:")
                display(M3,r1,c2)
                
            else:
                print("Multiplication is not possible!")
        elif(ch==6):
            transpose(M1,M3,r1,c1)
            print("Transpose of first matrix:")
            display(M3,c1,r1)
            transpose(M2,M3,r2,c2)
            print("Transpose of second matrix:")
            display(M3,c2,r2)
        else:
            print("Invalid choice!")
main()
quit()