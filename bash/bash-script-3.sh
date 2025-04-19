#!/bin/bash

echo "Please enter a number:"
read number

if [ $number -gt 10 ]
then
    echo "The number $number is greater than 10!"
else
    echo "The number $number is less than or equal to 10!"
fi



