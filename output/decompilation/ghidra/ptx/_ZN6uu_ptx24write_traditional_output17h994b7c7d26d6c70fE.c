undefined  [16]
_ZN6uu_ptx24write_traditional_output17h994b7c7d26d6c70fE
          (long param_1,undefined8 param_2,long *param_3,ulong param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  undefined uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined auVar12 [16];
  undefined local_138 [8];
  undefined4 local_130;
  undefined4 uStack_128;
  undefined *local_120;
  ulong local_118;
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
  undefined local_98 [24];
  undefined4 local_80 [2];
  undefined4 uStack_78;
  undefined local_60 [48];
  
  cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he450917857c3e673E
                    (param_4,param_5,&DAT_0015ec5a,1);
  if (cVar6 == '\0') {
    _ZN3std2fs4File6create17h7afd7399792ad865E(local_e0,param_4,param_5);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hcf4fec145e7d01a1E
              (&local_120,local_e0);
    auVar4._8_8_ = local_118;
    auVar4._0_8_ = local_120;
    if (local_120 != (undefined *)0x0) {
      return auVar4;
    }
    uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9f305fe194b67db1E(local_118 & 0xffffffff);
    ppuVar11 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hd08ffe348cbe9063E_003ee270;
  }
  else {
    uVar8 = _ZN3std2io5stdio6stdout17h077da66234850927E();
    uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb5cf39cdf7805947E(uVar8);
    ppuVar11 = (undefined **)&DAT_003ee2c0;
  }
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17hc28e5ceb504200eaE
            (local_60,0x2000,uVar8,ppuVar11);
                    /* try { // try from 002b8b3f to 002b8b68 has its CatchHandler @ 002b8e78 */
  _ZN5regex5regex6string5Regex3new17h2b022f3b326b0361E
            (local_e0,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hc501836100c48eb1E
            (local_80,local_e0,&PTR_s_src_uu_ptx_src_ptx_rs_003ee310);
  local_e0[2] = *param_3;
  local_c8 = param_3[1];
  local_a0 = local_e0[2];
  if (local_e0[2] != 0) {
    local_a0 = param_3[2];
  }
  local_e0[0] = (ulong)(local_e0[2] != 0);
  local_e0[1] = 0;
  local_b8 = 0;
  cVar6 = *(char *)(param_1 + 0x5d);
  uVar2 = *(undefined *)(param_1 + 0x59);
  uVar7 = (uint)*(byte *)(param_1 + 0x5a);
  ppuVar11 = &PTR_s_src_uu_ptx_src_ptx_rs_003ee370;
  local_c0 = local_e0[0];
  local_b0 = local_e0[2];
  local_a8 = local_c8;
  do {
                    /* try { // try from 002b8c00 to 002b8c76 has its CatchHandler @ 002b8ea2 */
    lVar9 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h42515bd069bd12f0E
                      (local_e0);
    if (lVar9 == 0) {
                    /* try { // try from 002b8dae to 002b8dba has its CatchHandler @ 002b8e78 */
      _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17hf34b8b1af3b36f38E(local_80);
      _ZN4core3ptr115drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17h4237c84ac900e5adE
                (local_60);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_4;
      return auVar5 << 0x40;
    }
    lVar10 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h5a6cffc6474407cfE
                       (param_2,lVar9 + 0x18);
    if (lVar10 == 0) {
      _ZN4core6option13expect_failed17h9e03a1f6ff88dbcfE
                (&DAT_0015ecf6,0x18,&PTR_s_src_uu_ptx_src_ptx_rs_003ee328);
LAB_002b8e6a:
                    /* try { // try from 002b8e6a to 002b8e77 has its CatchHandler @ 002b8e7d */
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(param_4);
    }
    param_4 = *(ulong *)(lVar9 + 0x38);
    if (*(ulong *)(lVar10 + 0x28) <= param_4) {
                    /* try { // try from 002b8e33 to 002b8e5d has its CatchHandler @ 002b8ea0 */
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                (param_4,*(ulong *)(lVar10 + 0x28),&PTR_s_src_uu_ptx_src_ptx_rs_003ee340);
    }
    lVar3 = *(long *)(lVar10 + 0x20);
    _ZN6uu_ptx13get_reference17hde200eae24bcb508E
              (local_138,uVar2,uVar7,lVar9,*(undefined8 *)(lVar3 + 8 + param_4 * 0x18),
               *(undefined8 *)(lVar3 + 0x10 + param_4 * 0x18),local_80[0],uStack_78);
    lVar3 = lVar3 + param_4 * 0x18;
    if (cVar6 == '\x01') {
      if (*(ulong *)(lVar10 + 0x40) <= param_4) goto LAB_002b8e6a;
      puVar1 = (undefined4 *)(*(long *)(lVar10 + 0x38) + 8 + param_4 * 0x18);
      _ZN6uu_ptx16format_roff_line17h4297720d7d6a4583E
                (local_98,param_1,*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x48),
                 *(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10),*puVar1,puVar1[2],
                 local_130,uStack_128);
    }
    else {
      if (cVar6 != '\x02') {
        local_120 = (undefined *)((ulong)local_120 & 0xffffffffffffff00);
        uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hfc4024115c711549E(&local_120);
        auVar12._8_8_ = &DAT_003edc08;
        auVar12._0_8_ = uVar8;
        goto LAB_002b8df7;
      }
      if (*(ulong *)(lVar10 + 0x40) <= param_4) goto LAB_002b8e6a;
      puVar1 = (undefined4 *)(*(long *)(lVar10 + 0x38) + 8 + param_4 * 0x18);
                    /* try { // try from 002b8cb5 to 002b8d29 has its CatchHandler @ 002b8e7f */
      _ZN6uu_ptx15format_tex_line17h116c5459a35e6a61E
                (local_98,param_1,*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x48),
                 *(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10),*puVar1,puVar1[2],
                 local_130,uStack_128,param_1,uVar7,ppuVar11);
    }
    local_e8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_120 = &DAT_003ee250;
    local_118 = 2;
    local_100 = 0;
    local_110 = &local_f0;
    local_108 = 1;
                    /* try { // try from 002b8d75 to 002b8d8e has its CatchHandler @ 002b8e84 */
    local_f0 = local_98;
    uVar8 = _ZN3std2io5Write9write_fmt17hc188f250100c2fb6E(local_60,&local_120);
    auVar12 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h12e604f0a0762086E
                        (uVar8);
    if (auVar12._0_8_ != 0) {
                    /* try { // try from 002b8dcc to 002b8dec has its CatchHandler @ 002b8e7d */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_98);
LAB_002b8df7:
                    /* try { // try from 002b8df7 to 002b8e00 has its CatchHandler @ 002b8ea0 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_138);
                    /* try { // try from 002b8e01 to 002b8e0d has its CatchHandler @ 002b8e78 */
      _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17hf34b8b1af3b36f38E(local_80);
      _ZN4core3ptr115drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17h4237c84ac900e5adE
                (local_60);
      return auVar12;
    }
                    /* try { // try from 002b8d97 to 002b8d9e has its CatchHandler @ 002b8e7f */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_98);
                    /* try { // try from 002b8d9f to 002b8da8 has its CatchHandler @ 002b8ea2 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_138);
  } while( true );
}