undefined8 *
_ZN6uu_fmt10FmtOptions12from_matches17ha8709eba89c06adbE(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  byte bVar9;
  undefined uVar10;
  undefined uVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint uVar16;
  undefined local_139;
  undefined **local_138;
  undefined8 uStack_130;
  ulong ***local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong *local_100;
  code *pcStack_f8;
  ulong local_f0;
  undefined local_e8;
  char local_e0;
  undefined local_df;
  ulong local_d8;
  ulong local_d0;
  undefined **local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong **local_98;
  code *local_90;
  undefined *local_88;
  code *local_80;
  undefined local_78 [16];
  ulong local_68;
  undefined local_60 [16];
  ulong local_50;
  undefined local_48 [16];
  ulong local_38;
  
  bVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,&DAT_00115090,0x10);
  bVar5 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"crown-margin",0xc);
  uVar6 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,&DAT_00115100,0x10);
  uVar7 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"uniform-spacing",0xf);
  uVar8 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"quick",5);
  bVar9 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"split-only",10);
  uVar10 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                     (param_2,"exact-prefix",0xc);
  uVar11 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                     (param_2,"skip-prefix",0xb);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5d676eefe7e492ecE
            (&local_138,param_2,"prefix",6);
  lVar13 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h98df6b0c915d5d1bE
                     ("prefix",6,&local_138);
  if (lVar13 == 0) {
    local_b0 = 0x8000000000000000;
  }
  else {
    _ZN4core3ops8function6FnOnce9call_once17hc073dae0b047a59bE(&local_b0,lVar13);
  }
                    /* try { // try from 001b4d61 to 001b4da1 has its CatchHandler @ 001b5315 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5d676eefe7e492ecE
            (&local_138,param_2,"skip-prefix",0xb);
  lVar13 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h98df6b0c915d5d1bE
                     ("skip-prefix",0xb,&local_138);
  if (lVar13 == 0) {
    local_c8 = (undefined **)0x8000000000000000;
  }
  else {
    _ZN4core3ops8function6FnOnce9call_once17hc073dae0b047a59bE(&local_138,lVar13);
    local_b8 = (ulong)local_128;
    local_c8 = local_138;
    uStack_c0 = (undefined4)uStack_130;
    uStack_bc = uStack_130._4_4_;
  }
                    /* try { // try from 001b4dca to 001b51d5 has its CatchHandler @ 001b5303 */
  _ZN6uu_fmt13extract_width17h607b918514420837E(&local_138,param_2);
  if (local_138 != (undefined **)0x0) {
    param_1[1] = uStack_130;
    param_1[2] = local_128;
    goto LAB_001b51e5;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5d676eefe7e492ecE
            (&local_138,param_2,&DAT_00114928,4);
  lVar13 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h98df6b0c915d5d1bE
                     (&DAT_00114928,4,&local_138);
  if (lVar13 == 0) {
    if (uStack_130 != 0) {
      uVar15 = _ZN4core3cmp6max_by17h34a806462d46b061E
                         ((ulong)((long)local_128 * 0x5d) / 100,local_128 != (ulong ***)0x0);
      goto LAB_001b5013;
    }
    local_d0 = 0x4b;
    uVar15 = 0x46;
LAB_001b50af:
    uVar2 = local_d0;
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5d676eefe7e492ecE
              (&local_138,param_2,"tab-width: ",9);
    lVar13 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h98df6b0c915d5d1bE
                       ("tab-width: ",9,&local_138);
    if (lVar13 == 0) {
      local_d8 = 8;
LAB_001b522d:
      *param_1 = local_b0;
      param_1[1] = uStack_a8;
      param_1[4] = CONCAT44(uStack_bc,uStack_c0);
      param_1[5] = local_b8;
      param_1[2] = local_a0;
      param_1[3] = local_c8;
      param_1[6] = uVar2;
      param_1[7] = uVar15;
      param_1[8] = local_d8 + (local_d8 == 0);
      param_1[9] = CONCAT26(CONCAT11(uVar8,uVar7),
                            CONCAT24(CONCAT11(uVar11,uVar10),
                                     CONCAT13(bVar9,CONCAT12(uVar6,CONCAT11(bVar4 & ((bVar5 | bVar9)
                                                                                    ^ 1),
                                                                            (bVar9 ^ 1) & bVar5)))))
      ;
      return param_1;
    }
    pcVar1 = *(code **)(lVar13 + 8);
    uVar3 = *(ulong *)(lVar13 + 0x10);
    _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
              (&local_e0,pcVar1,uVar3);
    if (local_e0 == '\0') goto LAB_001b522d;
    local_139 = local_df;
    local_100 = (ulong *)0x0;
    local_e8 = 1;
    local_98 = &local_100;
    local_90 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_88 = &local_139;
    local_80 = 
    _ZN70__LT_core__num__error__ParseIntError_u20_as_u20_core__fmt__Display_GT_3fmt17h98d79d8d19892e5aE
    ;
    local_138 = &PTR_s_Invalid_TABWIDTH_specification__002263a8;
    uStack_130 = 2;
    uStack_118 = 0;
    local_128 = &local_98;
    uStack_120 = 2;
    pcStack_f8 = pcVar1;
    local_f0 = uVar3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h57a000129381aa23E(local_48,&local_138);
    uStack_120 = CONCAT44(uStack_120._4_4_,1);
    local_128 = (ulong ***)local_38;
    uVar14 = _ZN5alloc5boxed12Box_LT_T_GT_3new17had2f12c6fe048da6E(&local_138);
  }
  else {
    pcVar1 = *(code **)(lVar13 + 8);
    uVar2 = *(ulong *)(lVar13 + 0x10);
    _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
              (&local_e0,pcVar1,uVar2);
    uVar15 = local_d8;
    if (local_e0 == '\0') {
      if (uStack_130 == 0) {
        if (local_d8 < 0x4c) {
          uVar12 = (int)local_d8 * 100;
          uVar16 = (uVar12 & 0xffff) * 0x6059 >> 0x10;
          local_128 = (ulong ***)
                      _ZN4core3cmp6max_by17h34a806462d46b061E
                                (((uVar12 - uVar16 & 0xffff) >> 1) + uVar16 >> 6,local_d8 + 3);
          goto LAB_001b5013;
        }
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h5bbd8c4ce611c1c9E
                  (&local_100,"GOAL cannot be greater than WIDTH.",0x22);
        local_128 = (ulong ***)local_f0;
        uStack_120 = CONCAT44(uStack_120._4_4_,1);
        uVar14 = _ZN5alloc5boxed12Box_LT_T_GT_3new17had2f12c6fe048da6E(&local_138);
      }
      else if (local_128 < local_d8) {
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h5bbd8c4ce611c1c9E
                  (&local_100,"GOAL cannot be greater than WIDTH.",0x22);
        local_128 = (ulong ***)local_f0;
        uStack_120 = CONCAT44(uStack_120._4_4_,1);
        uVar14 = _ZN5alloc5boxed12Box_LT_T_GT_3new17had2f12c6fe048da6E(&local_138);
      }
      else {
LAB_001b5013:
        local_d0 = (ulong)local_128;
        if (local_128 < 0x9c5) goto LAB_001b50af;
        local_100 = &local_d0;
        pcStack_f8 = 
        _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
        ;
        local_138 = &PTR_DAT_00226388;
        uStack_130 = 2;
        uStack_118 = 0;
        uStack_120 = 1;
        local_128 = (ulong ***)&local_100;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h57a000129381aa23E(local_60,&local_138);
        uStack_120 = CONCAT44(uStack_120._4_4_,1);
        local_128 = (ulong ***)local_50;
        uVar14 = _ZN5alloc5boxed12Box_LT_T_GT_3new17had2f12c6fe048da6E(&local_138);
      }
    }
    else {
      local_100 = (ulong *)0x0;
      local_e8 = 1;
      local_98 = &local_100;
      local_90 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_138 = &PTR_s_invalid_goal__00226378;
      uStack_130 = 1;
      uStack_118 = 0;
      local_128 = &local_98;
      uStack_120 = 1;
      pcStack_f8 = pcVar1;
      local_f0 = uVar2;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h57a000129381aa23E(local_78,&local_138);
      uStack_120 = CONCAT44(uStack_120._4_4_,1);
      local_128 = (ulong ***)local_68;
      uVar14 = _ZN5alloc5boxed12Box_LT_T_GT_3new17had2f12c6fe048da6E(&local_138);
    }
  }
  param_1[1] = uVar14;
  param_1[2] = &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hbb2ca950e64d5c64E_00226400
  ;
LAB_001b51e5:
  *param_1 = 0x8000000000000001;
                    /* try { // try from 001b51f2 to 001b51fe has its CatchHandler @ 001b5315 */
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hd911d0772c4acc23E
            (&local_c8);
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hd911d0772c4acc23E
            (&local_b0);
  return param_1;
}