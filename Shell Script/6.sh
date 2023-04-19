#Shell script for simple calculator

sum=0
i="y"
read -p "Enter first number: " a
read -p "Enter second number: " b
while [ $i = "y" ]
do
        echo "1.Addition"
        echo "2.Subtraction"
        echo "3.Multiplication"
        echo "4.Division"
        echo "Enter choice"
        read ch
case $ch in
1)sum=$(echo " $a + $b" | bc )
echo "Sum is =" $sum;;
2)sum=$(echo "$a - $b" | bc )
echo "Difference is =" $sum;;
3)sum=$(echo "$a * $b" | bc )
echo "Product is =" $sum;;

4)sum=$(echo "$a / $b" | bc )
echo "Quotient is =" $sum;;
*)echo "invalid choice"
esac
echo "Do you want to continue"
read i
if [ $i != "y" ]
then
exit
fi
done
