cat $1 | grep -wi nicolas | grep -wi bomber | awk '{print $(NF-1)}'
