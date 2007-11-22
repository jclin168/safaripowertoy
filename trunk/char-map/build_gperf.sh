#!/bin/sh

./unicode2hash.pl

cat head.c simp2trad.txt > simp2trad.in
cat head.c trad2simp.txt > trad2simp.in

echo "building simp->trad table"
l=simp2trad
gperf -F ${l}_init -H ${l}_hash -N ${l}_lookup -C -c -G -D -W ${l}_wordlist ${l}.in > ${l}.c

echo "building trad->simp table"
l=trad2simp
gperf -F ${l}_init -H ${l}_hash -N ${l}_lookup -C -c -G -D -W ${l}_wordlist ${l}.in > ${l}.c

