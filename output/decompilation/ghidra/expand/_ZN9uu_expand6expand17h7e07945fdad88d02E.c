undefined  [16] _ZN9uu_expand6expand17h7e07945fdad88d02E(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined auVar8 [16];
  long *local_128;
  code *pcStack_120;
  undefined8 **local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined local_f0 [16];
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long local_b0;
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
  
  uVar3 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001ef130)();
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h62993fbbc8aa06bbE
            (local_58,uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_e0 = 0;
  local_d8 = 1;
  local_d0 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar6 = *(long *)(param_1 + 0x10) * 0x18 + *(long *)(param_1 + 8);
    lVar7 = *(long *)(param_1 + 8);
    local_a8 = lVar6;
    do {
      lVar4 = lVar7 + 0x18;
      local_b0 = lVar7;
                    /* try { // try from 0015d961 to 0015da59 has its CatchHandler @ 0015dc7f */
      cVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001ef2f8)
                        (*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
      if (cVar2 == '\0') {
        _ZN9uu_expand4open17hc6af5baed7605e7eE
                  (local_a0,*(undefined8 *)(local_b0 + 8),*(undefined8 *)(local_b0 + 0x10));
        if ((long *)local_a0._0_8_ == (long *)0x0) {
          local_c8 = local_a0._8_4_;
          uStack_c4 = uStack_94;
          uStack_c0 = local_90;
          uStack_bc = uStack_8c;
                    /* try { // try from 0015db0f to 0015dbd0 has its CatchHandler @ 0015dc6b */
          local_f0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ef0d8)();
          local_68 = (undefined8 *)local_f0;
          local_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7a55ce0d4da56261E;
          local_128 = (long *)&DAT_001e8ad0;
          pcStack_120 = (code *)0x2;
          local_108 = 0;
          local_118 = &local_68;
          uStack_110 = 1;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ef0e0)(&local_128);
          local_f0._0_8_ = &local_c8;
          local_f0._8_8_ =
               _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h27bb90d2eb185827E
          ;
          local_128 = (long *)&DAT_001e8b10;
          pcStack_120 = (code *)0x2;
          local_108 = 0;
          local_118 = (undefined8 **)local_f0;
          uStack_110 = 1;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ef0e0)(&local_128);
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ef300)(1);
                    /* try { // try from 0015dbdb to 0015dbdf has its CatchHandler @ 0015dc7f */
          _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hdb3e2bb4f9085848E
                    (CONCAT44(uStack_c4,local_c8),CONCAT44(uStack_bc,uStack_c0));
        }
        else {
          local_f8 = local_70;
          local_118 = (undefined8 **)CONCAT44(uStack_8c,local_90);
          local_108 = local_80;
          uStack_100 = uStack_78;
          uStack_110 = uStack_88;
          local_128 = (long *)local_a0._0_8_;
          pcStack_120 = stack0xffffffffffffff68;
LAB_0015daa0:
                    /* try { // try from 0015daa0 to 0015daf4 has its CatchHandler @ 0015dc84 */
          auVar8 = _ZN3std2io10read_until17he79a9ae76b7d0ac2E(&local_128,&local_e0);
          lVar6 = auVar8._8_8_;
          if ((auVar8 & (undefined  [16])0x1) != (undefined  [16])0x0) {
            if (local_d0 != 0) goto LAB_0015dbe7;
LAB_0015dac9:
            _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hdeb34bad757c41deE
                      (auVar8._0_8_,lVar6);
            uVar5 = _ZN9uu_expand11expand_line17h49356f72fbe6ed37E
                              (&local_e0,local_58,uVar3,uVar1,param_1);
            lVar6 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h4d94a61557d52f12E
                              (uVar5);
            if (lVar6 != 0) {
                    /* try { // try from 0015dc07 to 0015dc0e has its CatchHandler @ 0015dc64 */
              _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h4160db49dd893c24E
                        (&local_128);
              _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hb3894eaab1b20cfdE
                        (local_e0,local_d8);
              goto LAB_0015dc2f;
            }
            goto LAB_0015daa0;
          }
          if (lVar6 != 0) goto LAB_0015dac9;
          lVar6 = 0;
LAB_0015dbe7:
                    /* try { // try from 0015dbe7 to 0015dbf1 has its CatchHandler @ 0015dc69 */
          _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hdeb34bad757c41deE
                    (auVar8._0_8_,lVar6);
          lVar6 = local_a8;
                    /* try { // try from 0015dbfa to 0015dc01 has its CatchHandler @ 0015dc7f */
          _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h4160db49dd893c24E
                    (&local_128);
        }
      }
      else {
        _local_a0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ef0d8)();
        local_f0._0_8_ = local_a0;
        local_f0._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7a55ce0d4da56261E;
        local_128 = (long *)&DAT_001e8ad0;
        pcStack_120 = (code *)0x2;
        local_108 = 0;
        local_118 = (undefined8 **)local_f0;
        uStack_110 = 1;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ef0e0)(&local_128);
        local_a0._0_8_ = &local_b0;
        stack0xffffffffffffff68 =
             _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd97d1afc4e866689E;
        local_128 = (long *)&DAT_001e8af0;
        pcStack_120 = (code *)0x2;
        local_108 = 0;
        local_118 = (undefined8 **)local_a0;
        uStack_110 = 1;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ef0e0)(&local_128);
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ef300)(1);
      }
      lVar7 = lVar4;
    } while (lVar4 != lVar6);
  }
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hb3894eaab1b20cfdE
            (local_e0,local_d8);
  lVar6 = 0;
LAB_0015dc2f:
  _ZN4core3ptr90drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__Stdout_GT__GT_17h7c3e098b824165b9E
            (local_58);
  auVar8._8_8_ = &
                 PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h9b36ab50f5b0db09E_001e8558
  ;
  auVar8._0_8_ = lVar6;
  return auVar8;
}