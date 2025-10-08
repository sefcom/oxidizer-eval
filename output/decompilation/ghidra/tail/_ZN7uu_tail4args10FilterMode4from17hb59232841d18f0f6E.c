void _ZN7uu_tail4args10FilterMode4from17hb59232841d18f0f6E(undefined8 *param_1,undefined8 param_2)

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
  undefined *local_80;
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
  
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0027d740
          )(param_2,&DAT_00124544,0xf);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7b3d077d0028ebf2E
            (&local_d8,param_2,&DAT_00124553,5);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf1a769ab7d4b2739E
                    (&DAT_00124553,5,&local_d8);
  if (lVar2 == 0) {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7b3d077d0028ebf2E
              (&local_d8,param_2,&DAT_00124558,5);
    lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf1a769ab7d4b2739E
                      (&DAT_00124558,5,&local_d8);
    if (lVar2 == 0) {
      uVar3 = 0;
      uVar4 = 10;
      uVar5 = 10;
      if (cVar1 != '\0') {
        uVar5 = uVar3;
      }
    }
    else {
      _ZN7uu_tail4args9parse_num17h777295376e2c5b82E
                (&local_a8,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
      if (local_a8 != 4) {
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
        PTR__ZN91__LT_uucore__features__parser__parse_size__ParseSizeError_u20_as_u20_core__fmt__Display_GT_3fmt17he618d31d336be9c1E_0027d748
        ;
        local_d8 = &PTR_DAT_00272ee8;
        uStack_d0 = 1;
        local_b8 = 0;
        local_c8 = &local_88;
        local_c0 = 1;
                    /* try { // try from 0019ee24 to 0019ee5c has its CatchHandler @ 0019ee8d */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h0ad4dbebb1db8692E(local_40,&local_d8);
        local_c0 = CONCAT44(local_c0._4_4_,1);
        local_c8 = (int **)local_30;
        uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb525c77ba03b79d9E(&local_d8);
        goto LAB_0019ee5d;
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
    _ZN7uu_tail4args9parse_num17h777295376e2c5b82E
              (&local_a8,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
    if (local_a8 != 4) {
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
      PTR__ZN91__LT_uucore__features__parser__parse_size__ParseSizeError_u20_as_u20_core__fmt__Display_GT_3fmt17he618d31d336be9c1E_0027d748
      ;
      local_d8 = &PTR_DAT_00272ec8;
      uStack_d0 = 2;
      local_b8 = 0;
      local_c8 = &local_88;
      local_c0 = 1;
                    /* try { // try from 0019ed69 to 0019eda1 has its CatchHandler @ 0019ee8f */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h0ad4dbebb1db8692E(local_58,&local_d8);
      local_c0 = CONCAT44(local_c0._4_4_,1);
      local_c8 = (int **)local_48;
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb525c77ba03b79d9E(&local_d8);
LAB_0019ee5d:
      param_1[1] = uVar4;
      param_1[2] = &
                   PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h92141829766abf5aE_00272f18
      ;
      *param_1 = 5;
      _ZN4core3ptr73drop_in_place_LT_uucore__features__parser__parse_size__ParseSizeError_GT_17hd5c1a77d921c35e8E
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