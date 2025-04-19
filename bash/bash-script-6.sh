#!/bin/bash

greet() {
    echo "Hello, $1! Welcome to my script."
    echo "The time is $(date +"%H:%M:%S")"
}

calculate_sum() {
    local num1=$1
    local num2=$2
    local sum=$((num1 + num2))
    echo "The sum of $num1 and $num2 is $sum"
}

echo "Script name: $0"
echo "Total number of arguments: $#"

if [ $# -eq 0 ]
then
    echo "No arguments provided. Please enter your name:"
    read user_name
else
    user_name=$1
    echo "Arguments provided: $@"
fi

greet "$user_name"

echo "Let's add two numbers:"
echo "Enter first number:"
read first
echo "Enter second number:"
read second
calculate_sum $first $second

