undefined  [16] _ZN11uu_unexpand8unexpand17he27a2d3deed158afE(long param_1)

{
  undefined uVar1;
  undefined uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong unaff_RBX;
  ulong uVar8;
  undefined auVar9 [16];
  undefined8 local_170;
  undefined8 local_168;
  long local_160;
  undefined8 local_158;
  long local_150;
  undefined8 local_148;
  ulong local_140;
  ulong local_138;
  ulong local_130;
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
  undefined *local_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined local_58 [40];
  
  uVar6 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001eea28)();
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h396c2b4f3a201ba9E
            (local_58,uVar6);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar4 = *(ulong *)(param_1 + 0x28);
  local_170 = 0;
  local_168 = 1;
  local_160 = 0;
  if (uVar4 < 2) {
    local_148 = 0;
    lVar7 = *(long *)(param_1 + 0x10);
  }
  else {
    local_148 = *(undefined8 *)(lVar3 + -8 + uVar4 * 8);
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 != 0) {
    unaff_RBX = *(ulong *)(param_1 + 8);
    uVar8 = unaff_RBX + lVar7 * 0x18;
    uVar1 = *(undefined *)(param_1 + 0x30);
    uVar2 = *(undefined *)(param_1 + 0x31);
    local_140 = uVar8;
    local_130 = uVar4;
    do {
                    /* try { // try from 0015d33b to 0015d347 has its CatchHandler @ 0015d58e */
      _ZN11uu_unexpand4open17h50e1d0eba05cf6a0E
                (&local_c0,*(undefined8 *)(unaff_RBX + 8),*(undefined8 *)(unaff_RBX + 0x10));
      if (CONCAT44(uStack_bc,local_c0) == 0) {
        local_158 = CONCAT44(uStack_b4,uStack_b8);
        local_150 = local_b0;
                    /* try { // try from 0015d42a to 0015d4be has its CatchHandler @ 0015d57a */
        uVar5 = (**(code **)(local_b0 + 0x58))();
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001eebe8)(uVar5);
        auVar9 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ee920)();
        local_118 = (undefined8 *)local_128;
        local_110 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3b2c8e4a8b65ef3fE;
        local_108 = &local_158;
        local_100 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h6fc909ecf6e591ecE
        ;
        local_88 = &DAT_001e8388;
        local_80 = 3;
        local_68 = 0;
        local_78 = &local_118;
        local_70 = 2;
        local_128 = auVar9;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ee928)(&local_88);
                    /* try { // try from 0015d4c9 to 0015d4cd has its CatchHandler @ 0015d58e */
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hb4ab6cf7cdea7204E
                  (local_158,local_150);
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
        local_138 = unaff_RBX;
        while( true ) {
                    /* try { // try from 0015d3a0 to 0015d3f5 has its CatchHandler @ 0015d593 */
          auVar9 = _ZN3std2io10read_until17h5aae19ff83fee6caE(&local_f8,&local_170);
          auVar9._8_8_ = auVar9._8_8_;
          lVar7 = auVar9._8_8_;
          if ((auVar9 & (undefined  [16])0x1) != (undefined  [16])0x0) {
            lVar7 = local_160;
          }
          if (lVar7 == 0) break;
          _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h549e604d5c5e935dE
                    (auVar9._0_8_,auVar9._8_8_);
          auVar9 = _ZN11uu_unexpand13unexpand_line17h1d2ec673d7b6113dE
                             (&local_170,local_58,uVar1,uVar2,local_148,lVar3,local_130);
          if (auVar9._0_8_ != 0) {
                    /* try { // try from 0015d50b to 0015d51a has its CatchHandler @ 0015d576 */
            _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17hcd1e4735b34a6ffaE
                      (&local_f8);
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc8e1e3a6a3c0f26aE
                      (local_170,local_168);
            goto LAB_0015d551;
          }
        }
                    /* try { // try from 0015d4d0 to 0015d4da has its CatchHandler @ 0015d578 */
        _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h549e604d5c5e935dE
                  (auVar9._0_8_,auVar9._8_8_);
                    /* try { // try from 0015d4db to 0015d4e7 has its CatchHandler @ 0015d58e */
        _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17hcd1e4735b34a6ffaE
                  (&local_f8);
        unaff_RBX = local_138;
        uVar8 = local_140;
      }
      unaff_RBX = unaff_RBX + 0x18;
    } while (unaff_RBX != uVar8);
  }
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc8e1e3a6a3c0f26aE
            (local_170,local_168);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = unaff_RBX;
  auVar9 = auVar9 << 0x40;
LAB_0015d551:
  _ZN4core3ptr90drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__Stdout_GT__GT_17h0b67ea383d9d318bE
            (local_58);
  return auVar9;
}