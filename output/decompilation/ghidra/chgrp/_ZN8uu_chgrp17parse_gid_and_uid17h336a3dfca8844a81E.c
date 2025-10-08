undefined8 *
_ZN8uu_chgrp17parse_gid_and_uid17h336a3dfca8844a81E(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 unaff_EBP;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long *local_78;
  code *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_58;
  undefined8 uStack_50;
  undefined local_48 [16];
  undefined8 local_38;
  
  _ZN8uu_chgrp12get_dest_gid17h4d05a3664157cc82E(&local_c8);
  uVar2 = local_b8;
  uVar1 = uStack_c0;
  local_58 = local_c8;
  uStack_50 = 0;
  local_68 = (undefined4)local_b8;
  uStack_64 = local_b8._4_4_;
  uStack_60 = (undefined4)uStack_b0;
  uStack_5c = uStack_b0._4_4_;
                    /* try { // try from 0015ffb0 to 0015fff6 has its CatchHandler @ 00160112 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h3e938edac5a056f4E
            (&local_c8,param_2,"from",4);
  local_98 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h400a437e510a09d7E
                       ("from",4,&local_c8);
  if (local_98 == 0) {
    uVar3 = 0;
    local_88 = unaff_EBP;
  }
  else {
    _ZN8uu_chgrp18parse_gid_from_str17h3091fc49b902fbfcE
              (&local_90,*(undefined8 *)(local_98 + 8),*(undefined8 *)(local_98 + 0x10));
    if (local_90 != -0x8000000000000000) {
      local_78 = &local_98;
      local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd0a34de72fe2a3f1E;
      local_c8 = &PTR_s_invalid_user____001f4910;
      uStack_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_78;
      uStack_b0 = 1;
                    /* try { // try from 00160088 to 001600c0 has its CatchHandler @ 00160100 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h10b49b386562c66cE(local_48,&local_c8);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,1);
      local_b8 = (long **)local_38;
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h80792f8261bee4f9E(&local_c8);
      param_1[1] = uVar4;
      param_1[2] = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17haa4ce8b8fdd9170bE_001f4898
      ;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u32_C_alloc__string__String_GT__GT_17h006ca93ec0283182E
                (local_90,CONCAT44(uStack_84,local_88));
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hde73add49f44b46dE(uVar1,uVar2);
      return param_1;
    }
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u32_C_alloc__string__String_GT__GT_17h006ca93ec0283182E
              (0x8000000000000000,CONCAT44(uStack_84,local_88));
    uVar3 = 2;
  }
  *param_1 = uStack_c0;
  param_1[1] = CONCAT44(uStack_64,local_68);
  param_1[2] = CONCAT44(uStack_5c,uStack_60);
  param_1[3] = local_58;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((long)param_1 + 0x2c) = local_88;
  return param_1;
}