undefined  [16] _ZN11uu_unexpand8unexpand17h7da24873393494e4E(long param_1)

{
  undefined uVar1;
  undefined uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar9;
  undefined auVar10 [16];
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  undefined8 local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined local_128 [16];
  undefined8 *local_118;
  code *local_110;
  undefined8 *local_108;
  code *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined local_88 [40];
  undefined *local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  long lVar8;
  
  uVar6 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17hb9eeab36379c6f5dE
            (local_88,0x2000,uVar6);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar4 = *(ulong *)(param_1 + 0x28);
  local_150 = 0;
  local_148 = 1;
  local_140 = 0;
  if (uVar4 < 2) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(ulong *)(lVar3 + -8 + uVar4 * 8);
  }
  local_138 = *(long *)(param_1 + 8);
  local_130 = local_138 + *(long *)(param_1 + 0x10) * 0x18;
  lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcb914319815ce2a7E
                    (&local_138);
  if (lVar7 != 0) {
    uVar1 = *(undefined *)(param_1 + 0x30);
    uVar2 = *(undefined *)(param_1 + 0x31);
    do {
                    /* try { // try from 001b2ff6 to 001b3002 has its CatchHandler @ 001b321a */
      _ZN11uu_unexpand4open17h29e09d4acbe1a140E
                (&local_c0,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
      if (CONCAT44(uStack_bc,local_c0) == 0) {
        local_160 = CONCAT44(uStack_b4,uStack_b8);
        local_158 = local_b0;
                    /* try { // try from 001b30ca to 001b315e has its CatchHandler @ 001b3206 */
        uVar5 = (**(code **)(local_b0 + 0x60))();
        _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(uVar5);
        auVar10 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_118 = (undefined8 *)local_128;
        local_110 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf6a1d2ab1cd5850eE;
        local_108 = &local_160;
        local_100 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hb9e3d6c183a72ce2E
        ;
        local_60 = &DAT_0021d1d0;
        local_58 = 3;
        local_40 = 0;
        local_50 = &local_118;
        local_48 = 2;
        local_128 = auVar10;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_60);
                    /* try { // try from 001b3169 to 001b316d has its CatchHandler @ 001b321a */
        _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h0082e63b91b22250E
                  (local_160,local_158);
      }
      else {
        local_c8 = local_90;
        local_d8 = local_a0;
        uStack_d0 = uStack_98;
        local_e8 = local_b0;
        uStack_e0 = uStack_a8;
        local_f8 = local_c0;
        uStack_f4 = uStack_bc;
        uStack_f0 = uStack_b8;
        uStack_ec = uStack_b4;
        while( true ) {
                    /* try { // try from 001b3050 to 001b30a2 has its CatchHandler @ 001b321f */
          auVar10 = _ZN3std2io10read_until17h30a9c258ae3f26fbE(&local_f8,10,&local_150);
          auVar10._8_8_ = auVar10._8_8_;
          lVar8 = auVar10._0_8_;
          lVar7 = auVar10._8_8_;
          if (lVar8 != 0) {
            lVar7 = local_140;
          }
          if (lVar7 == 0) break;
          _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hd39866fef2216732E
                    (lVar8,auVar10._8_8_);
          lVar7 = _ZN11uu_unexpand13unexpand_line17hfe287a3731b6a7afE
                            (&local_150,local_88,uVar1,uVar2,uVar9,lVar3,uVar4);
          if (lVar7 != 0) {
                    /* try { // try from 001b31b3 to 001b31bb has its CatchHandler @ 001b31fd */
            auVar10 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                (lVar7);
                    /* try { // try from 001b31bc to 001b31cb has its CatchHandler @ 001b31fb */
            _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17haf1e40619ceb4b94E
                      (&local_f8);
                    /* try { // try from 001b31cc to 001b31d5 has its CatchHandler @ 001b3201 */
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h1bd5a48277eb07ccE
                      (&local_150);
            _ZN4core3ptr90drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__Stdout_GT__GT_17h91f26dab932e0aafE
                      (local_88);
            return auVar10;
          }
        }
                    /* try { // try from 001b3170 to 001b317a has its CatchHandler @ 001b31ff */
        _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hd39866fef2216732E
                  (lVar8,auVar10._8_8_);
                    /* try { // try from 001b317b to 001b3184 has its CatchHandler @ 001b321a */
        _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17haf1e40619ceb4b94E
                  (&local_f8);
      }
      lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcb914319815ce2a7E
                        (&local_138);
    } while (lVar7 != 0);
  }
                    /* try { // try from 001b3198 to 001b31a1 has its CatchHandler @ 001b3201 */
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h1bd5a48277eb07ccE(&local_150);
  _ZN4core3ptr90drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__Stdout_GT__GT_17h91f26dab932e0aafE
            (local_88);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar9;
  return auVar10 << 0x40;
}