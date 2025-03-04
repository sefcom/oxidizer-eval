undefined8 *
_ZN5uu_nl6helper13parse_options17h06a5fa1f1b26e68cE
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 **ppuVar2;
  undefined uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b8;
  code *pcStack_b0;
  undefined8 local_a8;
  long local_98;
  long *local_90;
  code *local_88;
  undefined8 local_80;
  long *local_78;
  code *local_70;
  undefined8 local_68;
  long *local_60;
  code *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_d0 = 0;
  uStack_c8 = 8;
  local_c0 = 0;
                    /* try { // try from 002b82a5 to 002b837c has its CatchHandler @ 002b87df */
  uVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_3,"no-renumber",0xb);
  *(undefined *)(param_2 + 0x10) = uVar3;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h9fd557f246527b84E
            (&local_108,param_3,&DAT_0016fe8c,0x11);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hbd6da3a7af6b6ad0E
                    (&DAT_0016fe8c,0x11,&local_108);
  if (lVar4 != 0) {
    local_98 = lVar4;
    if (*(long *)(lVar4 + 0x10) == 1) {
      local_b8 = &local_98;
      pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc35cb14290081d65E;
      local_108 = (long *)&DAT_003d9f88;
      uStack_100 = (code *)0x2;
      local_e8 = 0;
      local_f8 = &local_b8;
      local_f0 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h0a2f0cb8f97eeebdE(&local_48,&local_108);
      local_108 = (long *)CONCAT44(uStack_44,local_48);
      uStack_100 = (code *)CONCAT44(uStack_3c,uStack_40);
      local_f8 = (undefined8 **)local_38;
    }
    else {
      _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
                (&local_108,lVar4);
    }
                    /* try { // try from 002b8381 to 002b8388 has its CatchHandler @ 002b87c7 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4abdf3701c16e9bbE(param_2 + 6);
    param_2[8] = local_f8;
    *(undefined4 *)(param_2 + 6) = (undefined4)local_108;
    *(undefined4 *)((long)param_2 + 0x34) = local_108._4_4_;
    *(undefined4 *)(param_2 + 7) = (undefined4)uStack_100;
    *(undefined4 *)((long)param_2 + 0x3c) = uStack_100._4_4_;
  }
                    /* try { // try from 002b839c to 002b846c has its CatchHandler @ 002b87df */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h9fd557f246527b84E
            (&local_108,param_3,&DAT_00161770,0x10);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hbd6da3a7af6b6ad0E
                    (&DAT_00161770,0x10,&local_108);
  if (lVar4 != 0) {
    _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_10clone_from17h4a05e4567e966646E
              (param_2 + 9,lVar4);
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h9fd557f246527b84E
            (&local_108,param_3,&DAT_0016fe9e,0xd);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hbd6da3a7af6b6ad0E
                    (&DAT_0016fe9e,0xd,&local_108);
  if (lVar4 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = _ZN4core3ops8function6FnOnce9call_once17h937765a0df65f30aE(lVar4);
  }
  *(undefined *)((long)param_2 + 0x81) = uVar3;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h9fd557f246527b84E
            (&local_108,param_3,&DAT_00161680,0x10);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hbd6da3a7af6b6ad0E
                    (&DAT_00161680,0x10,&local_108);
  if (lVar4 != 0) {
    uVar5 = _ZN4core3ops8function6FnOnce9call_once17h15abc7b7abe22b04E
                      (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    _ZN4core3ops8function6FnOnce9call_once17hb333d555e2f01f4dE(&local_108,uVar5);
    ppuVar2 = local_f8;
    pcVar1 = uStack_100;
    if (local_108 != (long *)0x8000000000000001) {
      if (local_108 == (long *)0x8000000000000000) {
                    /* try { // try from 002b8496 to 002b849a has its CatchHandler @ 002b87bb */
        _ZN4core3ptr42drop_in_place_LT_uu_nl__NumberingStyle_GT_17hba651119877d43fdE
                  (*param_2,param_2[1]);
        *param_2 = pcVar1;
        param_2[1] = ppuVar2;
      }
      else {
        local_90 = local_108;
        local_88 = uStack_100;
        local_80 = local_f8;
                    /* try { // try from 002b84b9 to 002b84c7 has its CatchHandler @ 002b87b9 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h32d38cb1e0ac2383E(&local_d0,&local_90);
      }
    }
  }
                    /* try { // try from 002b84c8 to 002b850f has its CatchHandler @ 002b87df */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h9fd557f246527b84E
            (&local_108,param_3,"body-numbering",0xe);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hbd6da3a7af6b6ad0E
                    ("body-numbering",0xe,&local_108);
  if (lVar4 != 0) {
    uVar5 = _ZN4core3ops8function6FnOnce9call_once17h15abc7b7abe22b04E
                      (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    _ZN4core3ops8function6FnOnce9call_once17hb333d555e2f01f4dE(&local_108,uVar5);
    ppuVar2 = local_f8;
    pcVar1 = uStack_100;
    if (local_108 != (long *)0x8000000000000001) {
      if (local_108 == (long *)0x8000000000000000) {
                    /* try { // try from 002b853a to 002b853e has its CatchHandler @ 002b87ac */
        _ZN4core3ptr42drop_in_place_LT_uu_nl__NumberingStyle_GT_17hba651119877d43fdE
                  (param_2[2],param_2[3]);
        param_2[2] = pcVar1;
        param_2[3] = ppuVar2;
      }
      else {
        local_78 = local_108;
        local_70 = uStack_100;
        local_68 = local_f8;
                    /* try { // try from 002b8561 to 002b8572 has its CatchHandler @ 002b87aa */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h32d38cb1e0ac2383E(&local_d0,&local_78);
      }
    }
  }
                    /* try { // try from 002b8573 to 002b85ba has its CatchHandler @ 002b87df */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h9fd557f246527b84E
            (&local_108,param_3,&DAT_00160e70,0x10);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hbd6da3a7af6b6ad0E
                    (&DAT_00160e70,0x10,&local_108);
  if (lVar4 != 0) {
    uVar5 = _ZN4core3ops8function6FnOnce9call_once17h15abc7b7abe22b04E
                      (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    _ZN4core3ops8function6FnOnce9call_once17hb333d555e2f01f4dE(&local_108,uVar5);
    ppuVar2 = local_f8;
    pcVar1 = uStack_100;
    if (local_108 != (long *)0x8000000000000001) {
      if (local_108 == (long *)0x8000000000000000) {
                    /* try { // try from 002b85e5 to 002b85e9 has its CatchHandler @ 002b879d */
        _ZN4core3ptr42drop_in_place_LT_uu_nl__NumberingStyle_GT_17hba651119877d43fdE
                  (param_2[4],param_2[5]);
        param_2[4] = pcVar1;
        param_2[5] = ppuVar2;
      }
      else {
        local_60 = local_108;
        local_58 = uStack_100;
        local_50 = local_f8;
                    /* try { // try from 002b860c to 002b861d has its CatchHandler @ 002b879b */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h32d38cb1e0ac2383E(&local_d0,&local_60);
      }
    }
  }
                    /* try { // try from 002b861e to 002b8767 has its CatchHandler @ 002b87df */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h317836ece4e1d627E
            (&local_108,param_3,"number-width",0xc);
  plVar6 = (long *)_ZN12clap_builder6parser5error12MatchesError6unwrap17h6a78314316764992E
                             ("number-width",0xc,&local_108);
  if (plVar6 != (long *)0x0) {
    if (*plVar6 == 0) {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h44c9454a11a431b7E
                (&local_108,&DAT_0016feab,0x47);
      local_a8 = local_f8;
      local_b8 = local_108;
      pcStack_b0 = uStack_100;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h32d38cb1e0ac2383E(&local_d0,&local_b8);
    }
    else {
      param_2[0xf] = *plVar6;
    }
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5fc9f16b33f0a403E
            (&local_108,param_3,"join-blank-lines",0x10);
  plVar6 = (long *)_ZN12clap_builder6parser5error12MatchesError6unwrap17h5ce44c2cd6f84e85E
                             ("join-blank-lines",0x10,&local_108);
  if (plVar6 != (long *)0x0) {
    if (*plVar6 == 0) {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h44c9454a11a431b7E
                (&local_108,&DAT_0016fef2,0x4a);
      local_a8 = local_f8;
      local_b8 = local_108;
      pcStack_b0 = uStack_100;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h32d38cb1e0ac2383E(&local_d0,&local_b8);
    }
    else {
      param_2[0xe] = *plVar6;
    }
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h559ca5751dacbf50E
            (&local_108,param_3,"line-increment",0xe);
  puVar7 = (undefined8 *)
           _ZN12clap_builder6parser5error12MatchesError6unwrap17h07d1e4ab11518c4dE
                     ("line-increment",0xe,&local_108);
  if (puVar7 != (undefined8 *)0x0) {
    param_2[0xd] = *puVar7;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h559ca5751dacbf50E
            (&local_108,param_3,"starting-line-number",0x14);
  puVar7 = (undefined8 *)
           _ZN12clap_builder6parser5error12MatchesError6unwrap17h07d1e4ab11518c4dE
                     ("starting-line-number",0x14,&local_108);
  if (puVar7 != (undefined8 *)0x0) {
    param_2[0xc] = *puVar7;
  }
  param_1[2] = local_c0;
  *param_1 = local_d0;
  param_1[1] = uStack_c8;
  return param_1;
}