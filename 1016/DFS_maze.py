def dfs(y, x, depth):
    if x <0 or y <0 or y>=N or x>=M:
        return
 
    if y== N-1 and x== M-1:
        global Min
        if depth <Min:
            Min = depth
        return
 
    for i in range(4):
        wX= x+ dir[i][0]
        wY= y+ dir[i][1]
        if wX < 0 or wY < 0 or wY >= N or wX >= M:
            pass
        elif visit[wY][wX]== 0 and map[wY][wX]== '1':
            visit[wY][wX]= 1
            dfs(wY, wX, depth+1)
            visit[wY][wX]= 0
 
 
N, M= map(int,input().split())
map = [""]* N
visit= [[0]* M for i in range(N)]
dir = [[0,1], [1,0], [0,-1], [-1,0]]
 
Min = N*M
 
for i in range(N):
    map[i]= input()
 
dfs(0,0,1)
print(Min)
