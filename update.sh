#!/usr/bin/env bash

set -e
set -x

SRC="tmp"
DEST="src/GKlib"

git clone https://github.com/KarypisLab/GKlib.git $SRC
mkdir -p $DEST

cp -f $SRC/LICENSE.txt $DEST/LICENSE.txt
cp -fa $SRC/*.{c,h} $DEST/
cp -fa $SRC/win32/. $DEST/win32
cp -fa $SRC/test/. test

# Apply patches for Windows
git apply --directory $DEST .github/patches/adapt.c.patch
git apply --directory $DEST .github/patches/adapt.h.patch

# Remove files that are not needed
rm -rf $SRC
