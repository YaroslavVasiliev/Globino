N=int(input("N="))
A=[]
for i in range (0,N):
    A.append(input("Введите элементы масива:"))
for k in range (0,N//4):
    print(A[2*k])
    print(A[2*k+1])      
    print(A[-1-2*k])
    print(A[-2-2*k])
if N%4>0:
    print(A(N//4+1])
if N%4>1:
    print(A[N//4+2])
if N%4>2:
    print(A[N//4+3])
