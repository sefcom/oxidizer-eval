long _ZN6uu_fmt12process_file17hfbd28097bf8da567E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong local_228 [7];
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  undefined local_1d8;
  undefined local_1d0 [56];
  int local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  ulong local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined local_e8 [16];
  undefined8 local_d8;
  ulong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  
  cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hc5a01975fdb51be5E
                    (param_1,param_2,"-",1);
  if (cVar3 == '\0') {
    _ZN3std2fs4File4open17h137777d641029dbeE(local_e8,param_1,param_2);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17heba7adc2095f0446E
              (&local_198,local_e8,param_1,param_2);
    if (CONCAT44(uStack_194,local_198) != 0) {
      return CONCAT44(uStack_194,local_198);
    }
    local_228[0] = CONCAT44(local_228[0]._4_4_,uStack_190);
                    /* try { // try from 001647b4 to 00164861 has its CatchHandler @ 001648a8 */
    (*(code *)PTR__ZN3std2fs4File8metadata17h5e84e533705f8c98E_001f70d0)(local_e8,local_228);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h5d3d0e2f77a17a7fE
              (&local_198,local_e8,param_1,param_2);
    if (local_198 == 2) {
      lVar5 = CONCAT44(uStack_18c,uStack_190);
    }
    else {
      if ((uStack_160 & 0xf000) != 0x4000) {
        uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h998bec50ca1e407aE(local_228[0] & 0xffffffff);
        puVar7 = &DAT_001f0788;
        goto LAB_0016451c;
      }
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7c69efe601866818E
                (&local_198,"read error",10);
      local_d8 = local_188;
      local_d0 = CONCAT44(local_d0._4_4_,1);
      lVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2c9a23957ea0966aE(local_e8);
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h64583b23039ea895E(local_228);
  }
  else {
    uVar4 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001f70c8)();
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0a9e10fe9f2b8307E(uVar4);
    puVar7 = &DAT_001f07e0;
LAB_0016451c:
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h7ec671e489b617c0E
              (local_1d0,uVar4,puVar7);
    local_228[0] = 0x8000000000000002;
    local_1e8 = local_1d0;
    local_1d8 = 1;
    local_1f0 = param_3;
    local_1e0 = param_3;
LAB_00164570:
    do {
                    /* try { // try from 00164570 to 00164582 has its CatchHandler @ 001648df */
      (*(code *)
        PTR__ZN93__LT_uu_fmt__parasplit__ParagraphStream_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9892c27ee6853b6eE_001f6f98
      )(&local_198,local_228);
      uVar2 = local_180;
      uVar4 = local_188;
      if (CONCAT44(uStack_194,local_198) == -0x7fffffffffffffff) {
        _ZN4core3ptr55drop_in_place_LT_uu_fmt__parasplit__ParagraphStream_GT_17h55657f9840f97216E
                  (local_228);
                    /* try { // try from 00164754 to 00164763 has its CatchHandler @ 001648a3 */
        uVar4 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h82cd95ebe785134eE
                          (param_4);
        lVar5 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h004f836e07ea63f8E
                          (uVar4);
        if (lVar5 == 0) {
          _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17hce5e0a4644b5e569E
                    (local_1d0);
          return 0;
        }
        goto LAB_00164793;
      }
      uVar1 = CONCAT44(uStack_18c,uStack_190);
      if (CONCAT44(uStack_194,local_198) == -0x8000000000000000) {
        lVar5 = param_4[2];
        if (local_180 < (ulong)(*param_4 - lVar5)) {
          (*(code *)PTR_memcpy_001f6e90)(param_4[1] + lVar5,local_188,local_180);
          param_4[2] = lVar5 + uVar2;
          uVar6 = 0;
        }
        else {
                    /* try { // try from 001646d0 to 001646fb has its CatchHandler @ 001648bd */
          uVar6 = (*(code *)
                    PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hc701a8cfe4ea9e1eE_001f6f70
                  )(param_4,local_188,local_180);
        }
                    /* try { // try from 001645e6 to 00164620 has its CatchHandler @ 001648bd */
        lVar5 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h004f836e07ea63f8E
                          (uVar6);
        if (lVar5 == 0) {
          lVar5 = param_4[2];
          if ((ulong)(*param_4 - lVar5) < 2) {
            uVar6 = (*(code *)
                      PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hc701a8cfe4ea9e1eE_001f6f70
                    )(param_4,"\n",1);
          }
          else {
            *(undefined *)(param_4[1] + lVar5) = 10;
            param_4[2] = lVar5 + 1;
            uVar6 = 0;
          }
          lVar5 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h004f836e07ea63f8E
                            (uVar6);
          if (lVar5 == 0) {
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5cd0f203c67fbbb7E
                      (uVar1,uVar4);
            goto LAB_00164570;
          }
        }
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5cd0f203c67fbbb7E(uVar1,uVar4);
        break;
      }
      local_d8 = local_188;
      local_d0 = local_180;
      local_88 = local_138;
      uStack_80 = uStack_130;
      local_98 = local_148;
      uStack_94 = uStack_144;
      uStack_90 = uStack_140;
      uStack_8c = uStack_13c;
      local_a8 = local_158;
      uStack_a4 = uStack_154;
      uStack_a0 = uStack_150;
      uStack_9c = uStack_14c;
      local_b8 = local_168;
      uStack_b4 = uStack_164;
      uStack_b0 = uStack_160;
      uStack_ac = uStack_15c;
      local_c8 = local_178;
      uStack_c4 = uStack_174;
      uStack_c0 = uStack_170;
      uStack_bc = uStack_16c;
                    /* try { // try from 00164696 to 001646b1 has its CatchHandler @ 001648cd */
      uVar4 = _ZN6uu_fmt9linebreak11break_lines17hc2099fd01901faf2E(local_e8,param_3,param_4);
      lVar5 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h004f836e07ea63f8E
                        (uVar4);
      _ZN4core3ptr49drop_in_place_LT_uu_fmt__parasplit__Paragraph_GT_17h8b9159271f412e50E(local_e8);
    } while (lVar5 == 0);
    _ZN4core3ptr55drop_in_place_LT_uu_fmt__parasplit__ParagraphStream_GT_17h55657f9840f97216E
              (local_228);
LAB_00164793:
    _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17hce5e0a4644b5e569E
              (local_1d0);
  }
  return lVar5;
}