void _ZN10uu_hashsum17uu_app_opt_length17ha4be398f09f1abb1E(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined *local_7e8;
  undefined local_7e0 [640];
  undefined local_560 [640];
  undefined local_2e0 [712];
  
  (*(code *)PTR_memcpy_0025ac18)(local_2e0,param_2,0x2c8);
  _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(local_560,"length",6);
  _ZN12clap_builder7builder3arg3Arg4long17h400c12573ef6d75cE(local_7e0,local_560,"length",6);
                    /* try { // try from 00183166 to 00183171 has its CatchHandler @ 00183221 */
  local_7f0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h69abcbfffaa76762E
                        (
                        _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17he7963e1397bf94dbE
                        );
  local_7f8 = 4;
  local_7e8 = &DAT_002515d8;
                    /* try { // try from 0018318b to 0018319f has its CatchHandler @ 0018321f */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hbbb42d02c19229f0E
            (local_560,local_7e0,&local_7f8);
  _ZN12clap_builder7builder3arg3Arg5short17h94ef1aed863077dbE(local_7e0,local_560,0x6c);
                    /* try { // try from 001831ba to 001831e7 has its CatchHandler @ 00183230 */
  _ZN12clap_builder7builder3arg3Arg4help17h2bc0660901b2ceb5E
            (local_560,local_7e0,
             "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8"
             ,99);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hc2db0b48d061391eE(local_7e0,local_560);
  _ZN12clap_builder7builder3arg3Arg6action17ha30e37a18dbb74d5E(local_560,local_7e0,0);
  _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(param_1,local_2e0,local_560);
  return;
}