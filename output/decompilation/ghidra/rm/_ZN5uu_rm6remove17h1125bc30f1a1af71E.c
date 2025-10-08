byte _ZN5uu_rm6remove17h1125bc30f1a1af71E(undefined8 *param_1,long param_2,byte *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *local_140;
  code *local_138;
  undefined **local_130;
  undefined8 local_128;
  undefined8 **local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined local_100 [16];
  undefined8 local_f0;
  undefined local_e8;
  int local_e0 [2];
  undefined8 local_d8;
  uint local_a8;
  
  if (param_2 == 0) {
    bVar6 = 0;
  }
  else {
    puVar7 = param_1 + param_2 * 2;
    bVar5 = *param_3 ^ 1;
    bVar6 = 0;
    if ((*param_3 & 1) == 0) {
      do {
        uVar1 = *param_1;
        uVar2 = param_1[1];
        _ZN3std2fs16symlink_metadata17h2654b7702b6620cdE(local_e0,uVar1,uVar2);
        uVar3 = local_d8;
        if (local_e0[0] == 2) {
                    /* try { // try from 0015c653 to 0015c71e has its CatchHandler @ 0015c76e */
          local_100 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
          local_140 = (undefined8 *)local_100;
          local_138 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
          local_130 = (undefined **)&DAT_001ea4a0;
          local_128 = 2;
          local_110 = 0;
          local_120 = &local_140;
          local_118 = 1;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_130);
          local_100._0_8_ = 1;
          local_e8 = 1;
          local_140 = (undefined8 *)local_100;
          local_138 = (code *)
                      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
          ;
          local_130 = &PTR_DAT_001ea4c0;
          local_128 = 2;
          local_110 = 0;
          local_120 = &local_140;
          local_118 = 1;
          local_100._8_8_ = uVar1;
          local_f0 = uVar2;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_130);
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17haf081cf9ad72b71dE(uVar3);
          bVar4 = bVar5;
        }
        else if ((local_a8 & 0xf000) == 0x4000) {
          bVar4 = _ZN5uu_rm10handle_dir17hb9074543311991f9E(uVar1,uVar2,param_3);
        }
        else {
          bVar4 = _ZN5uu_rm11remove_file17h42f0a78696bb1093E(uVar1,uVar2,param_3);
        }
        bVar6 = bVar6 | bVar4;
        param_1 = param_1 + 2;
      } while (param_1 != puVar7);
    }
    else {
      do {
        uVar1 = *param_1;
        uVar2 = param_1[1];
        _ZN3std2fs16symlink_metadata17h2654b7702b6620cdE(local_e0,uVar1,uVar2);
        if (local_e0[0] == 2) {
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17haf081cf9ad72b71dE(local_d8);
          bVar4 = bVar5;
        }
        else if ((local_a8 & 0xf000) == 0x4000) {
          bVar4 = _ZN5uu_rm10handle_dir17hb9074543311991f9E(uVar1,uVar2,param_3);
        }
        else {
          bVar4 = _ZN5uu_rm11remove_file17h42f0a78696bb1093E(uVar1,uVar2,param_3);
        }
        bVar6 = bVar6 | bVar4;
        param_1 = param_1 + 2;
      } while (param_1 != puVar7);
    }
  }
  return bVar6 & 1;
}