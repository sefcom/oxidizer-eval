undefined  [16] _ZN10uu_install19check_unimplemented17h25e1c8c3cc575803E(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined auVar4 [16];
  undefined8 local_48;
  undefined local_40 [56];
  
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00209bc0
          )(param_1,"preserve-context",0x10);
  if (cVar1 == '\0') {
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00209bc0
            )(param_1,"context",7);
    if (cVar1 == '\0') {
      return ZEXT816(0x202208) << 0x40;
    }
    pcVar3 = "--context, -Z";
    uVar2 = 0xd;
  }
  else {
    pcVar3 = "--preserve-context, -P";
    uVar2 = 0x16;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7990a55799cbd755E
            (local_40,pcVar3,uVar2);
  local_48 = 0;
  auVar4._0_8_ = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_48);
  auVar4._8_8_ = &
                 PTR__ZN4core3ptr45drop_in_place_LT_uu_install__InstallError_GT_17haca1f059ca4c5a74E_00202208
  ;
  return auVar4;
}