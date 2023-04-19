#Shell script to print the Fibonacci series of ‘n’ elements and print the sum of the given series.

read -p "Enter the value of n: " n
a=0
b=1
c=2
echo "Fibonacci series:"
echo $a
echo $b
while [ $c -le $n ]
do
        fib=$(( $a + $b ))
        a=$b
        b=$fib
        echo $fib
        c=$(( $c + 1 ))
done
