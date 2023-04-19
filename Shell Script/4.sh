#Shell script to find the factorial of any number.

read -p "Enter number: " a
fact=1

while [ $a -gt 1 ]
do
        fact=$((fact*a))
        a=$((a-1))
done
echo "Factorial is: $fact"
