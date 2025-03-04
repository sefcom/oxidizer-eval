void _ZN7uu_tail4args10FilterMode4from17h013a88fb4d6b4428E(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **local_d8;
  undefined8 uStack_d0;
  int **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int *local_88;
  code *local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined local_58 [16];
  undefined8 local_48;
  undefined local_40 [16];
  undefined8 local_30;
  
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"zero-terminated",0xf);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0a7145d185c82391E
            (&local_d8,param_2,"bytes",5);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hd5b58983d4d3848bE
                    ("bytes",5,&local_d8);
  if (lVar2 == 0) {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0a7145d185c82391E
              (&local_d8,param_2,"lines",5);
    lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hd5b58983d4d3848bE
                      ("lines",5,&local_d8);
    if (lVar2 == 0) {
      uVar3 = 0;
      uVar4 = 10;
      uVar5 = 10;
      if (cVar1 != '\0') {
        uVar5 = uVar3;
      }
    }
    else {
      _ZN7uu_tail4args9parse_num17hf0843dd0db285fb1E
                (&local_a8,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
      if (local_a8 != 3) {
        local_68 = local_98;
        uStack_64 = uStack_94;
        uStack_60 = uStack_90;
        uStack_5c = uStack_8c;
        local_78 = local_a8;
        uStack_74 = uStack_a4;
        uStack_70 = uStack_a0;
        uStack_6c = uStack_9c;
        local_88 = &local_78;
        local_80 = 
        _ZN81__LT_uucore__parser__parse_size__ParseSizeError_u20_as_u20_core__fmt__Display_GT_3fmt17h1bebe12c07ded6a0E
        ;
        local_d8 = &PTR_s_invalid_number_of_lines__002bb380;
        uStack_d0 = 1;
        local_b8 = 0;
        local_c8 = &local_88;
        local_c0 = 1;
                    /* try { // try from 001f8c34 to 001f8c6c has its CatchHandler @ 001f8c9d */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hb4ba59fb1ad49b60E(local_40,&local_d8);
        local_c0 = CONCAT44(local_c0._4_4_,1);
        local_c8 = (int **)local_30;
        uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7645b42f7bfbf581E(&local_d8);
        goto LAB_001f8c6d;
      }
      uVar3 = CONCAT44(uStack_9c,uStack_a0);
      uVar4 = CONCAT44(uStack_94,local_98);
      uVar5 = 10;
      if (cVar1 != '\0') {
        uVar5 = 0;
      }
    }
  }
  else {
    _ZN7uu_tail4args9parse_num17hf0843dd0db285fb1E
              (&local_a8,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
    if (local_a8 != 3) {
      local_68 = local_98;
      uStack_64 = uStack_94;
      uStack_60 = uStack_90;
      uStack_5c = uStack_8c;
      local_78 = local_a8;
      uStack_74 = uStack_a4;
      uStack_70 = uStack_a0;
      uStack_6c = uStack_9c;
      local_88 = &local_78;
      local_80 = 
      _ZN81__LT_uucore__parser__parse_size__ParseSizeError_u20_as_u20_core__fmt__Display_GT_3fmt17h1bebe12c07ded6a0E
      ;
      local_d8 = &PTR_s_invalid_number_of_bytes_____002bb360;
      uStack_d0 = 2;
      local_b8 = 0;
      local_c8 = &local_88;
      local_c0 = 1;
                    /* try { // try from 001f8b79 to 001f8bb1 has its CatchHandler @ 001f8cac */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hb4ba59fb1ad49b60E(local_58,&local_d8);
      local_c0 = CONCAT44(local_c0._4_4_,1);
      local_c8 = (int **)local_48;
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7645b42f7bfbf581E(&local_d8);
LAB_001f8c6d:
      param_1[1] = uVar4;
      param_1[2] = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17he6319248e6802a40E_002bb3c8
      ;
      *param_1 = 5;
      _ZN4core3ptr63drop_in_place_LT_uucore__parser__parse_size__ParseSizeError_GT_17h26b9fa8eae44921dE
                (&local_78);
      return;
    }
    uVar4 = CONCAT44(uStack_9c,uStack_a0);
    uVar3 = 4;
    uVar5 = CONCAT44(uStack_94,local_98);
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  return;
}