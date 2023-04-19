#Shell script that delete all lines containing a specified word.

echo "Enter file name: "
read file
echo "Enter word: "
read word
echo "File before removing $word: "
cat $file
grep -v -i $word $file > test
mv test $file
echo " File after removing $word:"
cat $file
