#!/usr/bin/perl

open fs, "< simp.txt";
open ft, "< trad.txt";

$t = <ft>;
$s = <fs>;

close ft;
close fs;

@at = split( /%u/, $t );
@as = split( /%u/, $s );

$lt = $#at;
$ls = $#as;

if( $lt != $ls ) {
  print "the char number is not equal in simp/trad\n";
  exit;
}

open s2t, "> simp2trad.txt";
open t2s, "> trad2simp.txt";

for( $idx = 0; $idx < $lt; $idx++ ) {
  $ct = $at[ $idx ];
  $cs = $as[ $idx ];
  $ct =~ s/(..)(..)/\\x\1\\x\2/;
  $cs =~ s/(..)(..)/\\x\1\\x\2/;
  if( $ct ne '' && $cs ne '' ) {
    print s2t "\"$cs\", \"$ct\"\n";
    print t2s "\"$ct\", \"$cs\"\n";
  }
}
close s2t;
close t2s;

