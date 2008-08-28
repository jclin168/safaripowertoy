#!/bin/sh

#./unicode2hash.pl

cat head.c tongwen/s_2_t_ppc.list > simp2trad.in
cat head.c tongwen/t_2_s_ppc.list > trad2simp.in
cat head.c tongwen/s_2_t_x86.list > simp2trad_x86.in
cat head.c tongwen/t_2_s_x86.list > trad2simp_x86.in
#cat head.c simp2trad.txt > simp2trad.in
#cat head.c trad2simp.txt > trad2simp.in

echo "building simp->trad table"
l=simp2trad
gperf -F ${l}_init -H ${l}_hash -N ${l}_lookup -C -c -G -D -W ${l}_wordlist ${l}.in > ${l}.c
l=simp2trad_x86
gperf -F ${l}_init -H ${l}_hash -N ${l}_lookup -C -c -G -D -W ${l}_wordlist ${l}.in > ${l}.c

echo "building trad->simp table"
l=trad2simp
gperf -F ${l}_init -H ${l}_hash -N ${l}_lookup -C -c -G -D -W ${l}_wordlist ${l}.in > ${l}.c
l=trad2simp_x86
gperf -F ${l}_init -H ${l}_hash -N ${l}_lookup -C -c -G -D -W ${l}_wordlist ${l}.in > ${l}.c

