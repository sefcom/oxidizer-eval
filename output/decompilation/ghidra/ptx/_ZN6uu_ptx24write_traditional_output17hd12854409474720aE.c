undefined  [16]
_ZN6uu_ptx24write_traditional_output17hd12854409474720aE
          (long param_1,undefined8 param_2,long *param_3,undefined **param_4,undefined8 param_5)

{
  undefined uVar1;
  undefined uVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined auVar11 [16];
  undefined **local_150;
  undefined local_138 [8];
  undefined4 local_130;
  undefined4 uStack_128;
  undefined *local_120;
  undefined **local_118;
  undefined **local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f0;
  code *local_e8;
  ulong local_e0 [3];
  long local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined4 local_98 [2];
  undefined4 uStack_90;
  undefined local_78 [48];
  undefined local_48 [24];
  
  cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hc639eb17d6278023E
                    (param_4,param_5,"-",1);
  if (cVar5 == '\0') {
    _ZN3std2fs4File6create17h80385a49d02ea4fbE(local_e0,param_4,param_5);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h0143a7b0968f907cE
              (&local_120,local_e0,param_4,param_5);
    param_4 = local_118;
    if (local_120 != (undefined *)0x0) goto LAB_0022de50;
    uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h78f68dd9e7792e5eE((ulong)local_118 & 0xffffffff);
    ppuVar9 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h1597f39cce541ee6E_00351ce8;
  }
  else {
    uVar6 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00380088)();
    uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h16f26c34398979dfE(uVar6);
    ppuVar9 = (undefined **)&DAT_00351d38;
  }
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h48c1eff1ee71fcceE
            (local_78,uVar6,ppuVar9);
                    /* try { // try from 0022db4e to 0022db77 has its CatchHandler @ 0022dece */
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17h830f62d081924685E_003802b0)
            (local_e0,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hcfdbcfab40fd90b7E
            (local_98,local_e0,&PTR_s_src_uu_ptx_src_ptx_rs_00351d88);
  local_e0[2] = *param_3;
  local_c8 = param_3[1];
  local_a0 = local_e0[2];
  if (local_e0[2] != 0) {
    local_a0 = param_3[2];
  }
  local_e0[0] = (ulong)(local_e0[2] != 0);
  local_e0[1] = 0;
  local_b8 = 0;
  cVar5 = *(char *)(param_1 + 0x5d);
  uVar1 = *(undefined *)(param_1 + 0x59);
  uVar2 = *(undefined *)(param_1 + 0x5a);
  local_150 = &PTR_s_src_uu_ptx_src_ptx_rs_00351e00;
  local_c0 = local_e0[0];
  local_b0 = local_e0[2];
  local_a8 = local_c8;
                    /* try { // try from 0022dc10 to 0022dc83 has its CatchHandler @ 0022def6 */
  while (lVar7 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h68f71da84148c088E
                           (local_e0), lVar7 != 0) {
    param_4 = (undefined **)
              _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h4de00bcffe1eea4eE
                        (param_2,lVar7 + 0x18);
    if (param_4 == (undefined **)0x0) {
                    /* try { // try from 0022de79 to 0022dea0 has its CatchHandler @ 0022def8 */
      (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0037ff10)
                ("Missing file in file map\n",0x18,&PTR_s_src_uu_ptx_src_ptx_rs_00351da0);
      goto LAB_0022decc;
    }
    puVar8 = *(undefined **)(lVar7 + 0x38);
    if (param_4[5] <= puVar8) {
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0037fef0)
                (puVar8,param_4[5],&PTR_s_src_uu_ptx_src_ptx_rs_00351db8);
      goto LAB_0022decc;
    }
    _ZN6uu_ptx13get_reference17h1c80303ca2b5f184E
              (local_138,uVar1,uVar2,lVar7,*(undefined8 *)(param_4[4] + (long)puVar8 * 0x18 + 8),
               *(undefined8 *)(param_4[4] + (long)puVar8 * 0x18 + 0x10),local_98[0],uStack_90);
    if (cVar5 != '\x01') {
      if (cVar5 == '\x02') {
        puVar8 = *(undefined **)(lVar7 + 0x38);
        puVar10 = param_4[5];
        if (puVar8 < puVar10) {
          puVar10 = param_4[8];
          if (puVar8 < puVar10) {
            lVar4 = (long)puVar8 * 0x18;
                    /* try { // try from 0022dcde to 0022dd5f has its CatchHandler @ 0022ded3 */
            _ZN6uu_ptx15format_tex_line17hd442331aff487d86E
                      (local_48,param_1,*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x48),
                       *(undefined8 *)(param_4[4] + lVar4 + 8),
                       *(undefined8 *)(param_4[4] + lVar4 + 0x10),
                       *(undefined4 *)(param_4[7] + lVar4 + 8),
                       *(undefined4 *)((long)(param_4[7] + lVar4 + 8) + 8),local_130,uStack_128);
            goto LAB_0022dd60;
          }
          local_150 = &PTR_s_src_uu_ptx_src_ptx_rs_00351e18;
        }
LAB_0022dec1:
                    /* try { // try from 0022dec1 to 0022decb has its CatchHandler @ 0022dee7 */
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0037fef0)
                  (puVar8,puVar10,local_150);
LAB_0022decc:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_120 = (undefined *)((ulong)local_120 & 0xffffffffffffff00);
                    /* try { // try from 0022de18 to 0022de21 has its CatchHandler @ 0022dee7 */
      puVar8 = (undefined *)_ZN5alloc5boxed12Box_LT_T_GT_3new17h2875cf048a4ad78bE(&local_120);
      param_4 = (undefined **)&DAT_00351798;
LAB_0022de2c:
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(local_138);
      goto LAB_0022de36;
    }
    puVar8 = *(undefined **)(lVar7 + 0x38);
    puVar10 = param_4[5];
    if (puVar10 <= puVar8) {
      local_150 = &PTR_s_src_uu_ptx_src_ptx_rs_00351dd0;
      goto LAB_0022dec1;
    }
    puVar10 = param_4[8];
    if (puVar10 <= puVar8) {
      local_150 = &PTR_s_src_uu_ptx_src_ptx_rs_00351de8;
      goto LAB_0022dec1;
    }
    lVar4 = (long)puVar8 * 0x18;
    _ZN6uu_ptx16format_roff_line17he10d8fad25b32594E
              (local_48,param_1,*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x48),
               *(undefined8 *)(param_4[4] + lVar4 + 8),*(undefined8 *)(param_4[4] + lVar4 + 0x10),
               *(undefined4 *)(param_4[7] + lVar4 + 8),
               *(undefined4 *)((long)(param_4[7] + lVar4 + 8) + 8),local_130,uStack_128);
LAB_0022dd60:
    local_e8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_120 = &DAT_00351cc8;
    local_118 = (undefined **)0x2;
    local_100 = 0;
    local_110 = &local_f0;
    local_108 = 1;
                    /* try { // try from 0022ddab to 0022ddc4 has its CatchHandler @ 0022ded5 */
    local_f0 = local_48;
    uVar6 = _ZN3std2io5Write9write_fmt17h4c6bccb60aebda36E(local_78,&local_120);
    puVar8 = (undefined *)
             _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h09421af0a19fc6ceE
                       (uVar6);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(local_48);
    if (puVar8 != (undefined *)0x0) {
      param_4 = &
                PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h2cef641013a4d700E_00351040
      ;
      goto LAB_0022de2c;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(local_138);
  }
                    /* try { // try from 0022dde4 to 0022ddf8 has its CatchHandler @ 0022def8 */
  uVar6 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17hbac5442ed2d7edafE
                    (local_78);
  puVar8 = (undefined *)
           _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h09421af0a19fc6ceE
                     (uVar6);
  if (puVar8 == (undefined *)0x0) {
                    /* try { // try from 0022de68 to 0022de74 has its CatchHandler @ 0022dece */
    _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h1c6ec398caf69ee4E(local_98);
    puVar8 = (undefined *)0x0;
  }
  else {
    param_4 = &
              PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h2cef641013a4d700E_00351040
    ;
LAB_0022de36:
                    /* try { // try from 0022de36 to 0022de42 has its CatchHandler @ 0022dece */
    _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h1c6ec398caf69ee4E(local_98);
  }
  _ZN4core3ptr115drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17hda5f8bf0ece5e0b5E
            (local_78);
  local_120 = puVar8;
  local_118 = param_4;
LAB_0022de50:
  auVar11._8_8_ = local_118;
  auVar11._0_8_ = local_120;
  return auVar11;
}