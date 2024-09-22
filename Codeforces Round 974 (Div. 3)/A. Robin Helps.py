for i in range(int(input())):
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    gold=0
    ans=0
    for t in arr:
        if t>=k:
            gold+=t
        elif t==0 and gold:
            ans+=1
    print(ans)
