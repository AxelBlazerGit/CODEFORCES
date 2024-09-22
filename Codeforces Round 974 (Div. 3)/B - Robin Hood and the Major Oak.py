for i in range(int(input())):
    n,k=map(int,input().split())
    s=n-k+1
    segment=n-s+ 1
    if not s%2:
        if segment==1 or not (segment//2)%2:
            print("YES")
        else:
            print("NO")
    else:
        if segment>1 and not ((segment+1)//2)%2:
            print("YES")
        else:
            print("NO")
