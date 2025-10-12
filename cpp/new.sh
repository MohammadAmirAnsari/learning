#!/usr/bin/env bash

TEMPLATE='#include <bits/stdc++.h>
using namespace std;


int main(){

    return 0;
}
'

# check if filename diya gaya hai
if [ -z "$1" ]; then
  echo "❌ Please provide a filename!"
  echo "Usage: mia <filename>"
  exit 1
fi

# filename store karna
fname="$1"

# agar extension nahi hai to .cpp lagana
if [[ "$fname" != *.* ]]; then
  fname="${fname}.cpp"
fi

# check agar file already exist karti hai
if [ -f "$fname" ]; then
  echo "⚠️  File '$fname' already exists!"
  exit 0
else
  echo "$TEMPLATE" > "$fname"
  echo "✅ Created new file: $fname"
fi
