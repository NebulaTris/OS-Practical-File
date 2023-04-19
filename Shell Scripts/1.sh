# Shell script for addition of two numbers

read -p "Enter first number: " a
read -p "Enter second number: " b
sum=$(( $a + $b ))
echo "Sum is: $sum"
