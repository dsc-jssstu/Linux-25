echo "Counting from 1 to 5 using a for loop:"
for number in 1 2 3 4 5
do
    echo "Number: $number"
    sleep 1
done

echo -e "\nCounting from 10 to 15 using a range:"
for number in {10..15}
do
    echo "Number: $number"
    sleep 1
done

echo -e "\nCounting down from 5 to 1 using a while loop:"
countdown=5
while [ $countdown -gt 0 ]
do
    echo "Countdown: $countdown"
    countdown=$((countdown - 1))
    sleep 1
done

echo "Blast off!"

