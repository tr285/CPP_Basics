a = int(input("Enter the first num"))
b = int (input("Enter the second num"))
c = int (input ("Enter the third num"))

p = a*b
q = b*c
r = c*a

if p>q and p>r :
    print ("p is greater then q and r")
elif q>p and q>r :
    print ("q is greater p and r")
elif r>p and r>q :
    print ("r is greater then p and r")

