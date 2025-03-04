byte _ZN5uu_rm6remove17ha4133918b1aa389dE(long param_1,long param_2,char *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_168;
  uint local_15c;
  char *local_158;
  undefined8 *local_150;
  code *local_148;
  long local_140;
  long local_138;
  undefined local_130 [16];
  undefined8 local_120;
  undefined local_118;
  undefined **local_110;
  undefined8 local_108;
  undefined8 **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e0 [2];
  undefined8 local_d8;
  uint local_a8;
  
  local_138 = param_2 * 0x10 + param_1;
  local_140 = param_1;
  puVar6 = (undefined8 *)
           _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0300d8f33fee60f7E
                     (&local_140);
  if (puVar6 == (undefined8 *)0x0) {
    bVar7 = 0;
  }
  else {
    cVar1 = param_3[5];
    bVar5 = param_3[6];
    local_158 = param_3;
    if (*param_3 == '\0') {
      bVar7 = 0;
      local_15c = (uint)bVar5;
      do {
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        _ZN3std2fs16symlink_metadata17h9e12b59fb6df20f8E(local_e0,uVar2,uVar3);
        if (local_e0[0] == 2) {
          local_168 = local_d8;
                    /* try { // try from 001b7092 to 001b715f has its CatchHandler @ 001b71ae */
          local_130 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_150 = (undefined8 *)local_130;
          local_148 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
          local_110 = (undefined **)&DAT_00227970;
          local_108 = 2;
          local_f0 = 0;
          local_100 = &local_150;
          local_f8 = 1;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_110);
          local_130._0_8_ = 1;
          local_118 = 1;
          local_150 = (undefined8 *)local_130;
          local_148 = 
          _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
          local_110 = &PTR_DAT_00227990;
          local_108 = 2;
          local_f0 = 0;
          local_100 = &local_150;
          local_f8 = 1;
          local_130._8_8_ = uVar2;
          local_120 = uVar3;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_110);
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h333f14ee3ed91a78E(&local_168);
          bVar5 = 1;
        }
        else if ((local_a8 & 0xf000) == 0x4000) {
          bVar5 = _ZN5uu_rm10handle_dir17h040a6908c8ea150bE(uVar2,uVar3,local_158);
        }
        else {
          bVar5 = _ZN5uu_rm11remove_file17hfb41d07f759de271E(uVar2,uVar3,cVar1,local_15c);
        }
        bVar7 = bVar7 | bVar5;
        puVar6 = (undefined8 *)
                 _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0300d8f33fee60f7E
                           (&local_140);
      } while (puVar6 != (undefined8 *)0x0);
    }
    else {
      bVar7 = 0;
      do {
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        _ZN3std2fs16symlink_metadata17h9e12b59fb6df20f8E(local_e0,uVar2,uVar3);
        if (local_e0[0] == 2) {
          local_168 = local_d8;
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h333f14ee3ed91a78E(&local_168);
          bVar4 = 0;
        }
        else if ((local_a8 & 0xf000) == 0x4000) {
          bVar4 = _ZN5uu_rm10handle_dir17h040a6908c8ea150bE(uVar2,uVar3,local_158);
        }
        else {
          bVar4 = _ZN5uu_rm11remove_file17hfb41d07f759de271E(uVar2,uVar3,cVar1,bVar5);
        }
        bVar7 = bVar7 | bVar4;
        puVar6 = (undefined8 *)
                 _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0300d8f33fee60f7E
                           (&local_140);
      } while (puVar6 != (undefined8 *)0x0);
    }
  }
  return bVar7 & 1;
}