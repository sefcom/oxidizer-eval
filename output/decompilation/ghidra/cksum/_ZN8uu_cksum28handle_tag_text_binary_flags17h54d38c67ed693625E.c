undefined8 *
_ZN8uu_cksum28handle_tag_text_binary_flags17h54d38c67ed693625E
          (undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined local_48 [32];
  
  bVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"untagged",8);
  bVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,&DAT_00165d75,3);
  bVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,&DAT_00165d78,6);
  _ZN3std3env7args_os17h433b833009c91492E(local_48);
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h1b0607e581fae2c2E
            (local_60,local_48);
                    /* try { // try from 002e25cc to 002e25d0 has its CatchHandler @ 002e2609 */
  bVar4 = _ZN8uu_cksum9had_reset17h64707811948cf7faE(local_58,local_50);
  bVar2 = bVar2 | bVar1 ^ 1;
  *(byte *)(param_1 + 1) = bVar2;
  *(byte *)((long)param_1 + 9) = bVar3 & ((bVar4 | bVar2) ^ 1);
  *param_1 = 0;
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h821faefc0bb30cebE
            (local_60);
  return param_1;
}