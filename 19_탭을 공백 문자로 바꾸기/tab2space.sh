cp $1 $1.bak
sed 's/\t/    /' $1.bak > $1
