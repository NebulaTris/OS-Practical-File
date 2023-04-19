#Shell script that accept a file name starting and ending line numbers as arguments and display all  the lines between given line no.

echo "Enter filename"
read fname
echo "Enter the  starting line number"
read s
echo "Enter the ending line number"
read n
sed -n $s,$n\p $fname | cat > newline
cat newline
