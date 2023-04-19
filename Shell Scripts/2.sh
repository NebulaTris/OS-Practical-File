#Shell script for calculating the area of circle. Radius is to be entered by the user

read -p "Enter the radius : " r
echo "Area of the Circle is"
echo "3.14 * $r * $r" | bc

