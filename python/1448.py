import sys

#여러 줄에 걸친 입력이므로 sys.stdin.readline함수를 쓰는 편이 시간초과 안 걸림
n=int(sys.stdin.readline())
length=[]
ans=0

#입력 후 정렬
for i in range(n):
    length.append(int(sys.stdin.readline()))
length.sort(reverse=True)

#삼각형 판별 후 출력
for i in range(n-2):
    if(length[i] < length[i+1] + length[i+2]):
        ans=length[i]+length[i+1]+length[i+2]
        break
if(ans==0): print(-1)
else: print(ans)