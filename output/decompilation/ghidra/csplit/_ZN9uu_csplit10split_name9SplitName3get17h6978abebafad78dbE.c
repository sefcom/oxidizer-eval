undefined8
_ZN9uu_csplit10split_name9SplitName3get17h6978abebafad78dbE
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h74fbf09aad9a8f46E
            (local_50);
                    /* try { // try from 002bab65 to 002bab8f has its CatchHandler @ 002babe3 */
  uVar1 = _ZN6uucore8features6format15Format_LT_F_GT_3fmt17h5a5778834d3b2be7E
                    (param_2 + 0x18,local_50,param_3);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hce29fca315d99298E(uVar1);
  _ZN5alloc6string6String15from_utf8_lossy17hea505cf60d4f919bE(local_38,local_48,local_40);
                    /* try { // try from 002bab9a to 002baba1 has its CatchHandler @ 002babca */
  _ZN73__LT_alloc__borrow__Cow_LT_str_GT__u20_as_u20_alloc__string__ToString_GT_9to_string17ha2cb0370e40ab073E
            (param_1,local_30,local_28);
                    /* try { // try from 002baba2 to 002babab has its CatchHandler @ 002babc5 */
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h726eeb2c4de024cdE(local_50);
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb357b3c0ea91e7c1E(local_38);
  return param_1;
}