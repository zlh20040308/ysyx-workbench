#!/bin/bash

# 使用 magick 命令
magick slides.pdf \
  -sharpen "0x1.0" \
  -type truecolor -resize 400x300\! slides.bmp

mkdir -p $NAVY_HOME/fsimg/share/slides/
rm $NAVY_HOME/fsimg/share/slides/*
mv *.bmp $NAVY_HOME/fsimg/share/slides/