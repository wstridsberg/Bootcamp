#!/usr/bin/env bash

wget -O website.txt https://www.volvogroup.com/en-en/news/2020/oct/news-3805494.html 

sed 's/^[ \t]*//;s/[ \t]*$//;s/Volvo/The Best Company Ever/' website.txt > new_website.txt


