#!/bin/sh

#carbonbin=./carbon-gcc-32
#carbonbin=./carbon-gcc-64
#carbonbin=./carbon-clang-32
carbonbin=./carbon-clang-64
#carbonbin="node-env node carbon.js"

find explorer/testdata -name '*.carbon' -exec echo --==-- {} \; -exec $carbonbin --prelude=explorer/data/prelude.carbon {} \;

