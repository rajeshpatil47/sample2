def accept(A):
	n=int(input("Enter the total no of students:"))
	for i in range(n):
		name=input("Enter the names of student:")
		mob=input("Enter the mob no of student:")
		x=[name,mob]
		A.append(x)
	print("Friends details accepted successfully!")
	return n
	
def display(A,n):
	if(n==0):
		print("No record of students.")
	else:
		print("Friends information:")
		for i in range(n):
			print("Friend",i+1,":",A[i][0],A[i][1])
		print()
	
def rbin(A,s,l,strr):
	if(s<=l):
		mid=int((s+l)/2)
		if(A[mid][0] ==strr):
			return mid
		else:
			if(strr<A[mid][0]):
				return rbin(A,s,mid-1,strr)
			else:
				return rbin(A,mid+1,l,strr)
			
		
def ibin(A,n,strr):
	s=0
	l=n-1
	while(s<=l):
		mid=int((s+l)/2)
		if(A[mid][0]==strr):
			return mid
		else:
			if(A[mid][0]>strr):
				l=mid-1
			else:
				s=mid+1
	return -1
	
	
def fib(A,n,strr):
	f1=0
	f2=1
	f3=f1+f2
	offset=-1
	while(f3<n):
		f1=f2
		f2=f3
		f3=f1+f2
	while(f3>0):
		i=min(offset+f1,n-1)
		if(A[i][0] ==strr):
			return i
		else:
			if(strr<A[i][0]):
				f3=f1
				f2=f2-f1
				f1=f3-f2
				
			else:
				f3=f2
				f2=f1
				f1=f3-f2
				offset=i
	return -1

def insert(A,n,name):
	mob=input("Enter the mobile no of friend:")
	x=[name,mob]
	A.append(x)
	i=n-1
	while(i>=0):
		if(A[i][0]<=name):
			break
		else:
			A[i+1] =A[i]
		i-=1
	A[i+1]=name	
	print("Friend info added in the database")
	display(A,n+1)
	

def main():
	A=[]
	while(True):
		print("1.Accept and Display students info:")
		print("2.Recursive Binary search.")
		print("3.Iterative binary search.")
		print("4.Fibonacci search.")
		print("5.Exit.")
		ch=int(input("Enter the choice:"))
		if(ch==5):
			break
		elif(ch==1):
			n=accept(A)
			display(A,n)
		elif(ch==2):
			strr=input("Enter the name to be searched:")
			flag=rbin(A,0,n-1,strr)
			if(flag==-1):
				print("Friend to be searched not found!")
				insert(A,n,strr)
				n=n+1
			else:
				print("Friend found at location",int(flag)+1)
				
		elif(ch==3):
			strr=input("Enter the name to be searched:")
			flag=ibin(A,n,strr)
			if(flag==-1):
				print("Friend not found!")
				insert(A,n,strr)
				n=n+1
			else:
				print("Friend found at location",int(flag)+1)
				
		elif(ch==4):
			strr=input("Enter the name to be searched:")
			flag=fib(A,n,strr)
			if(flag==-1):
				print("Friend not found!")
				insert(A,n,strr)
				n+=1
			else:
				print("friend found at location",int(flag)+1)
		else:
			print("Enter valid option.")
			
main()
quit()