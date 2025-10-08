long _ZN9uu_factor12write_result17ha66cf5c020a2d08bE
               (long *param_1,undefined *param_2,undefined8 param_3,char param_4)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined **local_120;
  code *local_118;
  undefined4 **local_110;
  undefined8 local_108;
  undefined8 local_100;
  ulong local_f0;
  undefined4 *local_e8;
  undefined *local_e0;
  ulong *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  ulong local_98;
  undefined *local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined ***local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 *local_40;
  undefined *local_38;
  
  local_120 = &local_90;
  local_118 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8cff5feb862da75fE;
  local_88 = (undefined **)&DAT_00244140;
  local_80 = 2;
  uStack_68 = 0;
  local_78 = &local_120;
  local_70 = 1;
                    /* try { // try from 0019298a to 00192996 has its CatchHandler @ 00192d28 */
  local_90 = param_2;
  lVar7 = _ZN3std2io5Write9write_fmt17h11e288cd92d07ac5E(param_1,&local_88);
  if (lVar7 == 0) {
    _ZN119__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h1d9ebb26ff28ed15E
              (&local_88,param_3);
    if (param_4 == '\0') {
                    /* try { // try from 00192b10 to 00192b24 has its CatchHandler @ 00192d5c */
      while (_ZN116__LT_alloc__collections__btree__map__IntoIter_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb07204be7eeaa0b8E
                       (&local_b0,&local_88), uVar6 = local_98,
            CONCAT44(uStack_ac,local_b0) != -0x8000000000000000) {
        local_b8 = local_a0;
        local_c8 = local_b0;
        uStack_c4 = uStack_ac;
        uStack_c0 = uStack_a8;
        uStack_bc = uStack_a4;
        local_f0 = local_98;
        local_38 = 
        PTR__ZN67__LT_num_bigint__biguint__BigUint_u20_as_u20_core__fmt__Display_GT_3fmt17ha6e9d0f1c82ff230E_0024d100
        ;
        local_120 = &PTR_DAT_00244180;
        local_118 = (code *)0x1;
        local_100 = 0;
        local_110 = &local_40;
        local_108 = 1;
                    /* try { // try from 00192bb2 to 00192bbe has its CatchHandler @ 00192d4d */
        local_40 = &local_c8;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17he93485f1b03d4307E(&local_e8,&local_120);
        puVar5 = local_e0;
        puVar4 = local_e8;
                    /* try { // try from 00192bd3 to 00192be5 has its CatchHandler @ 00192d39 */
        _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17hbd55229d6ccd7063E
                  (&local_120,local_e0,local_d8,uVar6);
        ppuVar3 = local_110;
        pcVar2 = local_118;
        ppuVar1 = local_120;
        lVar7 = param_1[2];
        if (local_110 < (undefined4 **)(*param_1 - lVar7)) {
          (*(code *)PTR_memcpy_0024d0d0)(param_1[1] + lVar7,local_118,local_110);
          param_1[2] = lVar7 + (long)ppuVar3;
        }
        else {
                    /* try { // try from 00192c53 to 00192c60 has its CatchHandler @ 00192d17 */
          lVar7 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hdfe7125df86ebea5E
                            (param_1,local_118,local_110);
          if (lVar7 != 0) {
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9cf4137fd0897025E
                      (ppuVar1,pcVar2);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9cf4137fd0897025E
                      (puVar4,puVar5);
            goto LAB_00192c87;
          }
        }
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9cf4137fd0897025E(ppuVar1,pcVar2)
        ;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9cf4137fd0897025E(puVar4,puVar5);
        _ZN4core3ptr49drop_in_place_LT_num_bigint__biguint__BigUint_GT_17h68b709cb09988ceaE
                  (&local_c8);
      }
    }
    else {
                    /* try { // try from 001929e0 to 001929ef has its CatchHandler @ 00192d37 */
      while (_ZN116__LT_alloc__collections__btree__map__IntoIter_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb07204be7eeaa0b8E
                       (&local_b0,&local_88), CONCAT44(uStack_ac,local_b0) != -0x8000000000000000) {
        local_b8 = local_a0;
        local_c8 = local_b0;
        uStack_c4 = uStack_ac;
        uStack_c0 = uStack_a8;
        uStack_bc = uStack_a4;
        local_f0 = local_98;
        local_110 = &local_e8;
        local_e8 = &local_c8;
        if (local_98 < 2) {
          local_e0 = 
          PTR__ZN67__LT_num_bigint__biguint__BigUint_u20_as_u20_core__fmt__Display_GT_3fmt17ha6e9d0f1c82ff230E_0024d100
          ;
          local_120 = &PTR_DAT_00244180;
          local_118 = (code *)0x1;
          local_100 = 0;
          local_108 = 1;
          lVar7 = _ZN3std2io5Write9write_fmt17h11e288cd92d07ac5E(param_1,&local_120);
        }
        else {
          local_e0 = 
          PTR__ZN67__LT_num_bigint__biguint__BigUint_u20_as_u20_core__fmt__Display_GT_3fmt17ha6e9d0f1c82ff230E_0024d100
          ;
          local_d8 = &local_f0;
          local_d0 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0024d248
          ;
          local_120 = &PTR_DAT_00244160;
          local_118 = (code *)0x2;
          local_100 = 0;
          local_108 = 2;
                    /* try { // try from 00192a8b to 00192ae7 has its CatchHandler @ 00192d35 */
          lVar7 = _ZN3std2io5Write9write_fmt17h11e288cd92d07ac5E(param_1,&local_120);
        }
        if (lVar7 != 0) {
LAB_00192c87:
          _ZN4core3ptr49drop_in_place_LT_num_bigint__biguint__BigUint_GT_17h68b709cb09988ceaE
                    (&local_c8);
          _ZN4core3ptr105drop_in_place_LT_alloc__collections__btree__map__IntoIter_LT_num_bigint__biguint__BigUint_C_usize_GT__GT_17he4aa61b1160a476dE
                    (&local_88);
          return lVar7;
        }
        _ZN4core3ptr49drop_in_place_LT_num_bigint__biguint__BigUint_GT_17h68b709cb09988ceaE
                  (&local_c8);
      }
    }
    _ZN4core3ptr105drop_in_place_LT_alloc__collections__btree__map__IntoIter_LT_num_bigint__biguint__BigUint_C_usize_GT__GT_17he4aa61b1160a476dE
              (&local_88);
    local_88 = &PTR_DAT_00244190;
    local_80 = 1;
    local_78 = (undefined ***)0x8;
    local_70 = 0;
    uStack_68 = 0;
    lVar7 = _ZN3std2io5Write9write_fmt17h11e288cd92d07ac5E(param_1,&local_88);
    if (lVar7 == 0) {
      lVar7 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h8312d51ea439d633E
                        (param_1);
    }
  }
  else {
    _ZN4core3ptr105drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT_num_bigint__biguint__BigUint_C_usize_GT__GT_17h54aa05dedcd35041E
              (param_3);
  }
  return lVar7;
}