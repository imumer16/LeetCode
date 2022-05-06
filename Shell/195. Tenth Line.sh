# Read from the file file.txt and output the tenth line to stdout.
n=1
while read line; do
    n=$((n+1))
    if(($n == 11))
    then 
        echo $line;
    fi
done < file.txt