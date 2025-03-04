undefined  [16]
_ZN6uu_fmt12process_file17h286817e23c9d96bbE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined auVar9 [16];
  ulong local_220 [7];
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined local_1d0;
  undefined local_1c8 [8];
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined local_68 [56];
  
  cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h49c5b64196a2a340E
                    (param_1,param_2,"-",1);
  if (cVar5 == '\0') {
    _ZN3std2fs4File4open17hd2fbbd470609400eE(local_1c8,param_1,param_2);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h432ca70cabaeacd8E
              (&local_118,local_1c8,param_1,param_2);
    if (CONCAT44(uStack_114,local_118) != 0) {
      auVar2._12_4_ = uStack_10c;
      auVar2._8_4_ = uStack_110;
      auVar2._0_8_ = CONCAT44(uStack_114,local_118);
      return auVar2;
    }
    local_220[0] = CONCAT44(local_220[0]._4_4_,uStack_110);
                    /* try { // try from 001b55d1 to 001b55f8 has its CatchHandler @ 001b571f */
    _ZN3std2fs4File8metadata17he899a18112e6f19eE(local_1c8,local_220);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17he0390d0a07b9e259E
              (&local_118,local_1c8,param_1,param_2);
    if (local_118 == 2) {
      uVar6 = CONCAT44(uStack_10c,uStack_110);
      ppuVar7 = (undefined **)CONCAT44(uStack_104,uStack_108);
    }
    else {
      if ((uStack_e0 & 0xf000) != 0x4000) {
        uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h95508db5fa9d8c2fE(local_220[0] & 0xffffffff);
        ppuVar7 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h6154f541d864a002E_00226470
        ;
        goto LAB_001b538f;
      }
                    /* try { // try from 001b5683 to 001b56c7 has its CatchHandler @ 001b571f */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h5bbd8c4ce611c1c9E
                (&local_118,"read error",10);
      local_1b0 = (undefined *)CONCAT44(local_1b0._4_4_,1);
      uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17had2f12c6fe048da6E(local_1c8);
      ppuVar7 = &
                PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hbb2ca950e64d5c64E_00226400
      ;
    }
    auVar9._8_8_ = ppuVar7;
    auVar9._0_8_ = uVar6;
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h6154f541d864a002E(local_220);
  }
  else {
    uVar6 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1ab2cedcdb833c55E(uVar6);
    ppuVar7 = (undefined **)&DAT_002264c8;
LAB_001b538f:
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h0f92bd0684144666E
              (local_68,0x2000,uVar6,ppuVar7);
    local_220[0] = 0x8000000000000002;
    local_1d0 = 1;
    puVar8 = local_68;
    local_1e8 = param_3;
    local_1e0 = local_68;
    local_1d8 = param_3;
    while( true ) {
      while( true ) {
                    /* try { // try from 001b53e0 to 001b53f2 has its CatchHandler @ 001b5757 */
        _ZN93__LT_uu_fmt__parasplit__ParagraphStream_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6ed28343c896a546E
                  (&local_118,local_220);
        puVar4 = local_100;
        if (CONCAT44(uStack_114,local_118) == -0x8000000000000000) break;
        if (CONCAT44(uStack_114,local_118) == -0x7fffffffffffffff) {
                    /* try { // try from 001b5618 to 001b5631 has its CatchHandler @ 001b5734 */
          _ZN4core3ptr55drop_in_place_LT_uu_fmt__parasplit__ParagraphStream_GT_17h55f4efc3b7686e22E
                    (local_220);
          uVar6 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h4270cc0ec3c16399E
                            (param_4);
          auVar9 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hf81386728380d136E
                             (uVar6);
          if (auVar9._0_8_ == 0) {
            _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17ha2681e07678ff023E
                      (local_68);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = puVar8;
            return auVar3 << 0x40;
          }
          goto LAB_001b565a;
        }
        local_1b0 = local_100;
        puStack_1b8 = (undefined *)CONCAT44(uStack_104,uStack_108);
        local_168 = local_b8;
        uStack_160 = uStack_b0;
        local_178 = local_c8;
        uStack_174 = uStack_c4;
        uStack_170 = uStack_c0;
        uStack_16c = uStack_bc;
        local_188 = local_d8;
        uStack_184 = uStack_d4;
        uStack_180 = uStack_d0;
        uStack_17c = uStack_cc;
        local_198 = local_e8;
        uStack_194 = uStack_e4;
        uStack_190 = uStack_e0;
        uStack_18c = uStack_dc;
        local_1a8 = local_f8;
        uStack_1a4 = uStack_f4;
        uStack_1a0 = uStack_f0;
        uStack_19c = uStack_ec;
                    /* try { // try from 001b546f to 001b5485 has its CatchHandler @ 001b5739 */
        uVar6 = _ZN6uu_fmt9linebreak11break_lines17h90fda31618924b44E(local_1c8,param_3,param_4);
        auVar9 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17haf36b358a89fa26fE
                           (uVar6);
        if (auVar9._0_8_ != 0) {
                    /* try { // try from 001b5643 to 001b564f has its CatchHandler @ 001b571d */
          _ZN4core3ptr49drop_in_place_LT_uu_fmt__parasplit__Paragraph_GT_17ha3be4e98cabf6d8cE
                    (local_1c8);
          goto LAB_001b5650;
        }
                    /* try { // try from 001b5492 to 001b5499 has its CatchHandler @ 001b5757 */
        _ZN4core3ptr49drop_in_place_LT_uu_fmt__parasplit__Paragraph_GT_17ha3be4e98cabf6d8cE
                  (local_1c8);
      }
      uStack_1c0 = CONCAT44(uStack_104,uStack_108);
      puStack_1b8 = local_100;
      lVar1 = param_4[2];
      if (local_100 < (undefined *)(*param_4 - lVar1)) {
        (*(code *)PTR_memcpy_0022a4a8)(param_4[1] + lVar1,uStack_1c0,local_100);
        param_4[2] = (long)(puVar4 + lVar1);
        uVar6 = 0;
      }
      else {
                    /* try { // try from 001b54f0 to 001b555b has its CatchHandler @ 001b5748 */
        uVar6 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17ha7722a1d537a2c8aE
                          (param_4,uStack_1c0,local_100);
      }
      auVar9 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hd26104e1c49ad79dE
                         (uVar6);
      if (auVar9._0_8_ != 0) break;
      lVar1 = param_4[2];
      if ((ulong)(*param_4 - lVar1) < 2) {
        uVar6 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17ha7722a1d537a2c8aE
                          (param_4,"\n",1);
      }
      else {
        *(undefined *)(param_4[1] + lVar1) = 10;
        param_4[2] = lVar1 + 1;
        uVar6 = 0;
      }
      auVar9 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hb12cfa95b25ccb95E
                         (uVar6);
      if (auVar9._0_8_ != 0) break;
                    /* try { // try from 001b5564 to 001b556b has its CatchHandler @ 001b5757 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h99cf2aa6339f3e38E(local_1c8);
      puVar8 = puVar4;
    }
                    /* try { // try from 001b55b7 to 001b55c0 has its CatchHandler @ 001b571d */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h99cf2aa6339f3e38E(local_1c8);
LAB_001b5650:
                    /* try { // try from 001b5650 to 001b5659 has its CatchHandler @ 001b5734 */
    _ZN4core3ptr55drop_in_place_LT_uu_fmt__parasplit__ParagraphStream_GT_17h55f4efc3b7686e22E
              (local_220);
LAB_001b565a:
    _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17ha2681e07678ff023E
              (local_68);
  }
  return auVar9;
}