#i)Shell script for swapping two numbers. Using third variable.

read -p "Enter first number: " a
read -p "Enter second number: " b
echo "Before Swapping"
echo "First number: $a"
echo "Second number: $b"
c=$a
a=$b
b=$c
echo "After Swapping"
echo "First number: $a"
echo "Second number: $b"

#ii)Shell script for swapping two numbers. Without using third variable.

read -p "Enter first number: " a
read -p "Enter second number: " b
echo "Before Swapping"
echo "First number: $a"
echo "Second number: $b"
a=$((a-b))
b=$((a+b))
a=$((b-a))

echo "After Swapping"
echo "First number: $a"
echo "Second number: $b"
