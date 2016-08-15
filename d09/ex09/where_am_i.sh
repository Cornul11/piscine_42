var=$(ifconfig | grep inet | sed 's/inet//' | sed '/::/d' | sed 's/[:blank:]/,/g' | cut -d , -f1 | tr -d '[:blank:]')
if test -z "$var"; then
	echo "Je suis perdu!"
else
	echo $var | tr ' ' '\n'
fi
