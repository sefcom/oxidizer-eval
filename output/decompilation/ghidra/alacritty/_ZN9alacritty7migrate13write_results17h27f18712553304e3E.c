void _ZN9alacritty7migrate13write_results17h27f18712553304e3E
               (long *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_40 [16];
  
  local_50 = param_5;
  local_48 = param_6;
  local_40 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17hd53aef2935859e43E
                       (param_4);
  uVar3 = local_40._8_8_;
  uVar2 = local_40._0_8_;
  if ((param_2 & 1) == 0) {
    auVar4 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_009dfd90)(uVar2,uVar3);
    if (auVar4._0_8_ == 0) {
      uVar2 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_009de108)
                        (&PTR_s_alacritty_src_migrate_mod_rs_00983780);
                    /* catch() { ... } // from try @ 00560a96 with catch @ 00560bb4 */
                    /* try { // try from 00560bb7 to 00560bc0 has its CatchHandler @ 00560bc9 */
      _ZN4core3ptr50drop_in_place_LT_tempfile__file__NamedTempFile_GT_17h537a1cab63bc4ccbE
                (&local_b8);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar2);
    }
    local_f0 = 6;
    uStack_110 = &DAT_001eb77c;
    uStack_108 = (undefined8 *)0x4;
    uStack_100 = 1;
    local_f8 = (undefined *)0x0;
    local_e8 = 0;
    local_118 = (undefined **)((ulong)local_118._4_4_ << 0x20);
    _ZN8tempfile7Builder11tempfile_in17h203e62019191885cE
              (&local_e0,&local_118,auVar4._0_8_,auVar4._8_8_);
    if ((char)local_d0 == '\x02') {
      _ZN9alacritty7migrate13write_results28__u7b__u7b_closure_u7d__u7d_17hd303ff52691918baE
                (&local_98,local_e0);
      param_1[2] = CONCAT44(uStack_84,uStack_88);
      *param_1 = local_98;
      param_1[1] = CONCAT44(uStack_8c,uStack_90);
      return;
    }
    local_b8 = (int)local_e0;
    uStack_b4 = local_e0._4_4_;
    uStack_b0 = (undefined4)uStack_d8;
    uStack_ac = uStack_d8._4_4_;
    local_a8 = (undefined4)local_d0;
    uStack_a4 = local_d0._4_4_;
    uStack_a0 = (undefined4)uStack_c8;
    uStack_9c = uStack_c8._4_4_;
                    /* try { // try from 00560a96 to 00560ab0 has its CatchHandler @ 00560bb4 */
    lVar1 = _ZN3std2fs5write17h66f59f1b9d3e3b3eE(local_e0,uStack_d8,param_5,param_6);
    if (lVar1 != 0) {
      _ZN9alacritty7migrate13write_results28__u7b__u7b_closure_u7d__u7d_17h2c77f94bac6cdc40E
                (&local_118,lVar1);
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_110;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_110._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_108;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_108._4_4_;
      *param_1 = (long)local_118;
      _ZN4core3ptr50drop_in_place_LT_tempfile__file__NamedTempFile_GT_17h537a1cab63bc4ccbE
                (&local_b8);
      return;
    }
    uStack_108 = (undefined8 *)CONCAT44(uStack_a4,local_a8);
    uStack_100 = CONCAT44(uStack_9c,uStack_a0);
    local_118 = (undefined **)CONCAT44(uStack_b4,local_b8);
    uStack_110 = (undefined *)CONCAT44(uStack_ac,uStack_b0);
    _ZN8tempfile4file22NamedTempFile_LT_F_GT_7persist17hb8d3945b476b9032E
              (&local_e0,&local_118,uVar2,uVar3);
    if ((char)uStack_c8 != '\x02') {
      local_f8 = (undefined *)local_c0;
      _ZN9alacritty7migrate13write_results28__u7b__u7b_closure_u7d__u7d_17h55ffbd0b9d4ba002E
                (&local_98,&local_118);
      *(undefined4 *)((long)param_1 + 0x14) = uStack_84;
      *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_88,uStack_8c);
      *param_1 = local_98;
      *(undefined4 *)(param_1 + 1) = uStack_90;
      return;
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb4e0882300dc626aE((int)local_e0);
  }
  else if ((param_3 & 1) == 0) {
    local_e0 = local_40;
    uStack_d8 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h3a6a9966801425ecE;
    local_d0 = &local_50;
    uStack_c8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
    local_118 = &PTR_s_v_____Start_TOML_for_______End_T_00983740;
    uStack_110 = (undefined *)0x4;
    local_f8 = &DAT_00203ab0;
    local_f0 = 3;
    uStack_108 = &local_e0;
    uStack_100 = 2;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_009dff18)(&local_118);
  }
  *param_1 = -0x8000000000000000;
  return;
}