void _ZN6uu_seq13done_printing17he8fe76a3e6ee8b49E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_50;
  undefined8 local_48;
  
  _ZN105__LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_u20_as_u20_num_traits__identities__Zero_GT_4zero17hb293fbd21ab567d0E
            (&local_50);
                    /* try { // try from 00172032 to 0017203c has its CatchHandler @ 00172072 */
  cVar1 = _ZN4core3cmp10PartialOrd2ge17hc497c7e4cdd4f8b8E(param_2,&local_50);
  _ZN4core3ptr77drop_in_place_LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_GT_17hb99107a2a8b00042E
            (local_50,local_48);
  if (cVar1 == '\0') {
    _ZN4core3cmp10PartialOrd2lt17h6f60e0b8255b0449E(param_1,param_3);
  }
  else {
    _ZN4core3cmp10PartialOrd2gt17hf14522079f787b61E();
  }
  return;
}