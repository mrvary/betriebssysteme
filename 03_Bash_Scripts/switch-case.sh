var=$(date +%a)
echo $var
case "$var" in
	Mo) echo "Today is Monday" ;;
	Di) echo "Today is Tuesday" ;;
	Mi) echo "Today is Wednesay" ;;
	Do) echo "Today is Thursday" ;;
	Fr) echo "Today is Friday" ;;
	*) echo "Weekend"
esac
