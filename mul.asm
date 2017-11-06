# data
x:   .fill 10
y:   .fill 20

# logic
#lli r1 &x
#lui r1 &x

#lli r2 &y
#lui r2 &y

#loop: add r3 r1 r1
#	shf r1 r1 1
#	shf r2 r2 -1
#bgz r2 &loo

# test 1010 << 5
lli r1 10 # r1 == x
lui r1 10
lli r2 20 # r2 == y
lui r2 20
lli r3 0 # r3 == reg
lui r3 0
LOOP: istrue: and &y 1
add r3 r3 &x
shf r1 r1 1
shf r2 r2 -1
bgz r2 &LOOP
out r3

.halt
