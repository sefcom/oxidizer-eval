undefined8 *
_ZN6uu_fmt10FmtOptions12from_matches17hd6bbd71d93b7e3cdE(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  byte bVar8;
  undefined uVar9;
  undefined uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  uint uVar15;
  undefined *puVar16;
  undefined local_139;
  undefined **local_138;
  undefined *puStack_130;
  undefined ****local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined **local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined local_e8;
  char local_e0;
  undefined local_df;
  undefined *local_d8;
  undefined *local_d0;
  undefined **local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined ***local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined **local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined **local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined **local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  puVar14 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f70a0
  ;
  bVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f70a0
          )(param_2,"tagged-paragraph",0x10);
  bVar4 = (*(code *)puVar14)(param_2,"crown-margin",0xc);
  uVar5 = (*(code *)puVar14)(param_2,&DAT_001180a0,0x10);
  uVar6 = (*(code *)puVar14)(param_2,"uniform-spacing",0xf);
  uVar7 = (*(code *)puVar14)(param_2,"quick",5);
  bVar8 = (*(code *)puVar14)(param_2,"split-only",10);
  puVar14 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001f70a8
  ;
  uVar9 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001f70a8
          )(param_2,"exact-prefix",0xc);
  uVar10 = (*(code *)puVar14)(param_2,"skip-prefix",0xb);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h44c4a3f5845ce8d4E
            (&local_138,param_2,"prefix",6);
  lVar12 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h80b30bf7e42be37cE
                     ("prefix",6,&local_138);
  if (lVar12 == 0) {
    local_b0 = 0x8000000000000000;
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001f70b0
    )(&local_b0,lVar12);
  }
                    /* try { // try from 00163e82 to 00163ec3 has its CatchHandler @ 00164486 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h44c4a3f5845ce8d4E
            (&local_138,param_2,"skip-prefix",0xb);
  lVar12 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h80b30bf7e42be37cE
                     ("skip-prefix",0xb,&local_138);
  if (lVar12 == 0) {
    local_c8 = (undefined **)&DAT_8000000000000000;
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001f70b0
    )(&local_138,lVar12);
    local_b8 = (undefined *)local_128;
    local_c8 = local_138;
    puStack_c0 = puStack_130;
  }
                    /* try { // try from 00163eee to 0016437a has its CatchHandler @ 0016449e */
  _ZN6uu_fmt13extract_width17h7438790f5cc9b932E(&local_138,param_2);
  if ((int)local_138 == 1) {
    param_1[1] = puStack_130;
    param_1[2] = local_128;
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h44c4a3f5845ce8d4E
              (&local_138,param_2,&DAT_00118588,4);
    lVar12 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h80b30bf7e42be37cE
                       (&DAT_00118588,4,&local_138);
    if (lVar12 == 0) {
      if (((ulong)puStack_130 & 1) == 0) {
        puVar14 = (undefined *)0x46;
        puVar16 = (undefined *)0x4b;
      }
      else {
        if (local_128 != (undefined ****)0x0) {
          puVar14 = (undefined *)
                    _ZN4core3cmp3Ord3max17hec69546a31dcf558E
                              ((ulong)((long)local_128 * 0x5d) / 100,1);
          goto LAB_0016416b;
        }
        puVar16 = (undefined *)0x0;
        puVar14 = (undefined *)0x0;
      }
LAB_00164250:
      local_d0 = puVar16;
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h44c4a3f5845ce8d4E
                (&local_138,param_2,"tab-width",9);
      lVar12 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h80b30bf7e42be37cE
                         ("tab-width",9,&local_138);
      if (lVar12 == 0) {
        local_d8 = (undefined *)0x8;
LAB_0016439e:
        *param_1 = local_b0;
        param_1[1] = uStack_a8;
        param_1[4] = puStack_c0;
        param_1[5] = local_b8;
        param_1[2] = local_a0;
        param_1[3] = local_c8;
        param_1[6] = puVar16;
        param_1[7] = puVar14;
        param_1[8] = local_d8 + (local_d8 == (undefined *)0x0);
        param_1[9] = CONCAT26(CONCAT11(uVar7,uVar6),
                              CONCAT24(CONCAT11(uVar10,uVar9),
                                       CONCAT13(bVar8,CONCAT12(uVar5,CONCAT11(bVar3 & ((bVar4 | 
                                                  bVar8) ^ 1),(bVar8 ^ 1) & bVar4)))));
        return param_1;
      }
      puVar1 = *(undefined **)(lVar12 + 8);
      puVar2 = *(undefined **)(lVar12 + 0x10);
      _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                (&local_e0,puVar1,puVar2);
      if (local_e0 != '\x01') goto LAB_0016439e;
      local_139 = local_df;
      local_100 = (undefined **)0x0;
      local_e8 = 1;
      local_98 = &local_100;
      local_90 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f6ed8
      ;
      local_88 = &local_139;
      local_80 = 
      PTR__ZN70__LT_core__num__error__ParseIntError_u20_as_u20_core__fmt__Display_GT_3fmt17h3e61086f3d7b9af4E_001f70c0
      ;
      local_138 = &PTR_s_Invalid_TABWIDTH_specification__001f06e0;
      puStack_130 = (undefined *)0x2;
      uStack_118 = 0;
      local_128 = &local_98;
      local_120 = 2;
      puStack_f8 = puVar1;
      local_f0 = puVar2;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h974ccb46cc19ceacE(&local_48,&local_138);
      local_120 = CONCAT44(local_120._4_4_,1);
      local_138 = local_48;
      puStack_130 = puStack_40;
      local_128 = (undefined ****)local_38;
      uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2c9a23957ea0966aE(&local_138);
      param_1[1] = uVar13;
      param_1[2] = &
                   PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17heb5419a7ab07f1ccE_001f0720
      ;
      *param_1 = 0x8000000000000001;
      goto LAB_00164216;
    }
    puVar16 = *(undefined **)(lVar12 + 8);
    puVar1 = *(undefined **)(lVar12 + 0x10);
    _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
              (&local_e0,puVar16,puVar1);
    puVar14 = local_d8;
    if (local_e0 == '\x01') {
      local_100 = (undefined **)0x0;
      local_e8 = 1;
      local_98 = &local_100;
      local_90 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f6ed8
      ;
      local_138 = &PTR_s_invalid_goal__001f06b0;
      puStack_130 = (undefined *)0x1;
      uStack_118 = 0;
      local_128 = &local_98;
      local_120 = 1;
      puStack_f8 = puVar16;
      local_f0 = puVar1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h974ccb46cc19ceacE(&local_78,&local_138);
      local_120 = CONCAT44(local_120._4_4_,1);
      local_138 = local_78;
      puStack_130 = puStack_70;
      local_128 = (undefined ****)local_68;
      uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2c9a23957ea0966aE(&local_138);
      param_1[1] = uVar13;
      param_1[2] = &
                   PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17heb5419a7ab07f1ccE_001f0720
      ;
      *param_1 = 0x8000000000000001;
      goto LAB_00164216;
    }
    if (((ulong)puStack_130 & 1) == 0) {
      if (local_d8 < (undefined *)0x4c) {
        uVar11 = (int)local_d8 * 100;
        uVar15 = (uVar11 & 0xffff) * 0x6059 >> 0x10;
        local_128 = (undefined ****)
                    _ZN4core3cmp3Ord3max17hec69546a31dcf558E
                              (((uVar11 - uVar15 & 0xffff) >> 1) + uVar15 >> 6,local_d8 + 3);
        goto LAB_0016416b;
      }
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7c69efe601866818E
                (&local_100,"GOAL cannot be greater than WIDTH.",0x22);
      local_128 = (undefined ****)local_f0;
      local_138 = local_100;
      puStack_130 = puStack_f8;
      local_120 = CONCAT44(local_120._4_4_,1);
      uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2c9a23957ea0966aE(&local_138);
    }
    else if (local_128 < local_d8) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7c69efe601866818E
                (&local_100,"GOAL cannot be greater than WIDTH.",0x22);
      local_128 = (undefined ****)local_f0;
      local_138 = local_100;
      puStack_130 = puStack_f8;
      local_120 = CONCAT44(local_120._4_4_,1);
      uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2c9a23957ea0966aE(&local_138);
    }
    else {
LAB_0016416b:
      puVar16 = (undefined *)local_128;
      if (local_128 < (undefined *)0x9c5) goto LAB_00164250;
      local_100 = &local_d0;
      puStack_f8 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001f70b8
      ;
      local_138 = &PTR_DAT_001f06c0;
      puStack_130 = (undefined *)0x2;
      uStack_118 = 0;
      local_120 = 1;
      local_d0 = (undefined *)local_128;
      local_128 = (undefined ****)&local_100;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h974ccb46cc19ceacE(&local_60,&local_138);
      local_120 = CONCAT44(local_120._4_4_,1);
      local_138 = local_60;
      puStack_130 = puStack_58;
      local_128 = (undefined ****)local_50;
      uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2c9a23957ea0966aE(&local_138);
    }
    param_1[1] = uVar13;
    param_1[2] = &
                 PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17heb5419a7ab07f1ccE_001f0720
    ;
  }
  *param_1 = 0x8000000000000001;
LAB_00164216:
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hed5affe035b3a656E
            (&local_c8);
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hed5affe035b3a656E
            (&local_b0);
  return param_1;
}