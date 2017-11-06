# x = 5
# y = 52
# x = x + (y >> 2)

#load x from memory
lli r1 &x
lui r1 &x
lw r5 r1 0

#load y from memory
lli r2 &y
lui r2 &y
lw r6 r2 0

#shift right 2
shf r6 r6 -2

#add 
add r5 r5 r6

#stores x back to memory
sw r5 r1 0

#output it
out r3

#stop program
.halt

x: .fill 5
y: .fill 52
