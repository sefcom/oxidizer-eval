/* WARNING: Type propagation algorithm not settling */

undefined  [16] _ZN9uu_expand6expand17h37655ff09ea44da5E(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_R13;
  undefined auVar8 [16];
  long *local_138;
  code *pcStack_130;
  undefined8 **local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined local_f8 [16];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long local_d0 [5];
  long local_a8;
  undefined local_a0 [12];
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  code *local_60;
  undefined local_58 [40];
  long lVar7;
  
  uVar4 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h8dc6b6dd87838119E
            (local_58,0x2000,uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_d0[1] = 0;
  local_d0[2] = 1;
  local_d0[3] = 0;
  local_d0[4] = *(long *)(param_1 + 8);
  local_a8 = local_d0[4] + *(long *)(param_1 + 0x10) * 0x18;
  lVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h790f73d862f3e3c5E
                    (local_d0 + 4);
  if (lVar5 != 0) {
    do {
      local_d0[0] = lVar5;
                    /* try { // try from 001b3053 to 001b3149 has its CatchHandler @ 001b3374 */
      cVar3 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E
                        (*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
      if (cVar3 == '\0') {
        _ZN9uu_expand4open17h447e326a625c2cbfE
                  (local_a0,*(undefined8 *)(local_d0[0] + 8),*(undefined8 *)(local_d0[0] + 0x10));
        if ((long *)local_a0._0_8_ == (long *)0x0) {
          local_e8 = local_a0._8_4_;
          uStack_e4 = uStack_94;
          uStack_e0 = local_90;
          uStack_dc = uStack_8c;
                    /* try { // try from 001b320c to 001b32ca has its CatchHandler @ 001b3360 */
          local_f8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_68 = (undefined8 *)local_f8;
          local_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8e3d2bc035467f54E;
          local_138 = (long *)&DAT_0021cfa8;
          pcStack_130 = (code *)0x2;
          local_118 = 0;
          local_128 = &local_68;
          uStack_120 = 1;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_138);
          local_f8._0_8_ = &local_e8;
          local_f8._8_8_ =
               _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17he448dbddafa64936E
          ;
          local_138 = (long *)&DAT_0021cfe8;
          pcStack_130 = (code *)0x2;
          local_118 = 0;
          local_128 = (undefined8 **)local_f8;
          uStack_120 = 1;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_138);
          _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
                    /* try { // try from 001b32d5 to 001b32d9 has its CatchHandler @ 001b3374 */
          _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h235298a4064923efE
                    (CONCAT44(uStack_e4,local_e8),CONCAT44(uStack_dc,uStack_e0));
        }
        else {
          local_108 = local_70;
          local_128 = (undefined8 **)CONCAT44(uStack_8c,local_90);
          local_118 = local_80;
          uStack_110 = uStack_78;
          uStack_120 = uStack_88;
          local_138 = (long *)local_a0._0_8_;
          pcStack_130 = stack0xffffffffffffff68;
          while( true ) {
                    /* try { // try from 001b3190 to 001b31f1 has its CatchHandler @ 001b3379 */
            auVar8 = _ZN3std2io10read_until17h4bbf6f5e97af4faeE(&local_138,10,local_d0 + 1);
            lVar7 = auVar8._8_8_;
            lVar5 = auVar8._0_8_;
            bVar2 = lVar7 != 0;
            if (lVar5 != 0) {
              bVar2 = local_d0[3] == 0;
            }
            if (!bVar2) break;
            _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hce1404ba8c518a6fE
                      (lVar5,lVar7);
            uVar6 = _ZN9uu_expand11expand_line17h40856abb6fde71c0E
                              (local_d0 + 1,local_58,uVar4,uVar1,param_1);
            auVar8 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h402a94e6eef7bc71E
                               (uVar6);
            uVar6 = auVar8._8_8_;
            lVar5 = auVar8._0_8_;
            if (lVar5 != 0) {
                    /* try { // try from 001b32fe to 001b3308 has its CatchHandler @ 001b3354 */
              _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17hd7062a474f5e767bE
                        (&local_138);
                    /* try { // try from 001b3309 to 001b3312 has its CatchHandler @ 001b335b */
              _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h6ec78bf7a3f927d3E
                        (local_d0 + 1);
              _ZN4core3ptr90drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__Stdout_GT__GT_17h4862c1d11376e6d0E
                        (local_58);
              goto LAB_001b333c;
            }
          }
                    /* try { // try from 001b32df to 001b32e9 has its CatchHandler @ 001b3359 */
          _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hce1404ba8c518a6fE
                    (lVar5,lVar7);
                    /* try { // try from 001b32ea to 001b32f1 has its CatchHandler @ 001b3374 */
          _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17hd7062a474f5e767bE
                    (&local_138);
        }
      }
      else {
        _local_a0 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_f8._0_8_ = local_a0;
        local_f8._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8e3d2bc035467f54E;
        local_138 = (long *)&DAT_0021cfa8;
        pcStack_130 = (code *)0x2;
        local_118 = 0;
        local_128 = (undefined8 **)local_f8;
        uStack_120 = 1;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_138);
        local_a0._0_8_ = local_d0;
        stack0xffffffffffffff68 =
             _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17had14ffb2923220a0E;
        local_138 = (long *)&DAT_0021cfc8;
        pcStack_130 = (code *)0x2;
        local_118 = 0;
        local_128 = (undefined8 **)local_a0;
        uStack_120 = 1;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_138);
        _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
      }
      lVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h790f73d862f3e3c5E
                        (local_d0 + 4);
    } while (lVar5 != 0);
  }
                    /* try { // try from 001b3322 to 001b332b has its CatchHandler @ 001b335b */
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h6ec78bf7a3f927d3E(local_d0 + 1);
  _ZN4core3ptr90drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__Stdout_GT__GT_17h4862c1d11376e6d0E
            (local_58);
  lVar5 = 0;
  uVar6 = unaff_R13;
LAB_001b333c:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = lVar5;
  return auVar8;
}