long _ZN11uu_truncate18truncate_size_only17h1f53334980ddb1bcE
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long local_138;
  undefined8 *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined local_108;
  undefined local_100 [16];
  undefined8 local_f0;
  int local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_b0;
  undefined8 local_98;
  
  _ZN11uu_truncate19parse_mode_and_size17h9caa4c91beef10d4E(&local_168,param_1,param_2);
  if ((int)local_168 == 4) {
    if (((uStack_160 == 5) || ((int)uStack_160 == 6)) && (local_158 == (undefined8 **)0x0)) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc324d0392f7be5deE
                (&local_e8,&DAT_00116e60,0x10);
      uStack_d0 = 1;
      lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0fcae278b0f73f4aE(&local_e8);
    }
    else {
      lVar3 = 0;
      local_138 = param_3;
      do {
        if (param_4 * 0x18 == lVar3) {
          return 0;
        }
        _ZN3std2fs8metadata17h3bf47457d6321a54E(&local_e8,param_3);
        if (CONCAT44(uStack_e4,local_e8) == 2) {
          _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hd1c66196369792c3E
                    (2,CONCAT44(uStack_dc,iStack_e0));
          uVar1 = 0;
        }
        else {
          uVar1 = local_98;
          if ((local_b0 & 0xf000) == 0x1000) {
            local_118 = *(undefined8 *)(local_138 + 8 + lVar3);
            local_110 = *(undefined8 *)(local_138 + 0x10 + lVar3);
            local_120 = 0;
            local_108 = 1;
            local_130 = &local_120;
            local_128 = 
            PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001ea1b0
            ;
            local_168 = &PTR_s_cannot_open_for_writing__No_such_001e4020;
            uStack_160 = 2;
            local_148 = 0;
            local_158 = &local_130;
            uStack_150 = 1;
                    /* try { // try from 0015967c to 001596b3 has its CatchHandler @ 001596e3 */
            _ZN4core6option15Option_LT_T_GT_11map_or_else17hccc437e8064ad343E(local_100,&local_168);
            uStack_150 = CONCAT44(uStack_150._4_4_,1);
            local_158 = (undefined8 **)local_f0;
            lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0fcae278b0f73f4aE(&local_168);
            _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hd1c66196369792c3E
                      (CONCAT44(uStack_e4,local_e8),CONCAT44(uStack_dc,iStack_e0));
            return lVar2;
          }
        }
        uVar1 = _ZN11uu_truncate12TruncateMode7to_size17he28c50c65dad202dE
                          (uStack_160,local_158,uVar1);
        lVar2 = _ZN11uu_truncate13file_truncate17ha430ef778d6571e6E
                          (*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),param_5,
                           uVar1);
        lVar3 = lVar3 + 0x18;
        param_3 = param_3 + 0x18;
      } while (lVar2 == 0);
    }
  }
  else {
    local_d8 = (undefined4)local_158;
    uStack_d4 = local_158._4_4_;
    uStack_d0 = (undefined4)uStack_150;
    uStack_cc = uStack_150._4_4_;
    local_e8 = (int)local_168;
    uStack_e4 = local_168._4_4_;
    iStack_e0 = (int)uStack_160;
    uStack_dc = uStack_160._4_4_;
    lVar2 = _ZN11uu_truncate18truncate_size_only28__u7b__u7b_closure_u7d__u7d_17h9450d3b26670fc86E
                      (&local_e8);
  }
  return lVar2;
}