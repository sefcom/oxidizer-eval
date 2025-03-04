void _ZN6uu_seq13done_printing17h3afd308e88daff24E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined local_50 [40];
  
  _ZN95__LT_uu_seq__extendedbigdecimal__ExtendedBigDecimal_u20_as_u20_num_traits__identities__Zero_GT_4zero17h4f643d68bc816ae7E
            (local_50);
                    /* try { // try from 001c7942 to 001c794c has its CatchHandler @ 001c797d */
  cVar1 = _ZN4core3cmp10PartialOrd2ge17ha62e7af76bf65c27E(param_2,local_50);
  _ZN4core3ptr67drop_in_place_LT_uu_seq__extendedbigdecimal__ExtendedBigDecimal_GT_17h34bd9961a5e5dc1cE
            (local_50);
  if (cVar1 == '\0') {
    _ZN4core3cmp10PartialOrd2lt17hdb41ac1001bf6e1aE(param_1,param_3);
  }
  else {
    _ZN4core3cmp10PartialOrd2gt17h2d167f4b16cd27b2E();
  }
  return;
}