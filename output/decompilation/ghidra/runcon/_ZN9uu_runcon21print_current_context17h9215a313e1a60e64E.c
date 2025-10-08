int * _ZN9uu_runcon21print_current_context17h9215a313e1a60e64E(int *param_1)

{
  int local_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined local_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined local_68 [48];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined local_28 [32];
  
  (*(code *)PTR__ZN7selinux15SecurityContext7current17h79d84b1b82db0947E_001f23d0)(&local_d0,0);
  if (local_d0 != 10) {
    *(undefined8 *)(param_1 + 10) = local_a8;
    *(undefined8 *)(param_1 + 0xc) = uStack_a0;
    param_1[9] = iStack_ac;
    *(ulong *)(param_1 + 5) = CONCAT44(iStack_b8,uStack_c0._4_4_);
    *(ulong *)(param_1 + 7) = CONCAT44(uStack_b0,iStack_b4);
    *(ulong *)(param_1 + 1) = CONCAT44(uStack_c8,iStack_cc);
    *(ulong *)(param_1 + 3) = CONCAT44((int)uStack_c0,uStack_c4);
    *param_1 = local_d0;
    *(char **)(param_1 + 0xe) = "Getting security context of the current process";
    param_1[0x10] = 0x2f;
    param_1[0x11] = 0;
    return param_1;
  }
                    /* try { // try from 001611bc to 001611cb has its CatchHandler @ 001613f2 */
  (*(code *)PTR__ZN7selinux15SecurityContext11to_c_string17h0c9c9ed290d135c6E_001f23d8)
            (&local_d0,local_68);
  if (local_d0 == 10) {
    if (CONCAT44(uStack_c4,uStack_c8) == 2) {
      local_d0 = 0x1ebbe8;
      iStack_cc = 0;
      uStack_c8 = 1;
      uStack_c4 = 0;
      uStack_c0._0_4_ = 8;
      uStack_c0._4_4_ = 0;
      iStack_b8 = 0;
      iStack_b4 = 0;
      uStack_b0 = 0;
      iStack_ac = 0;
                    /* try { // try from 0016121b to 00161225 has its CatchHandler @ 001613e1 */
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001f23e0)(&local_d0);
    }
    else {
      uStack_90 = CONCAT44(uStack_c0._4_4_,(int)uStack_c0);
      uStack_88 = CONCAT44(iStack_b4,iStack_b8);
                    /* try { // try from 00161317 to 001613ba has its CatchHandler @ 001613e3 */
      (*(code *)PTR__ZN4core3ffi5c_str4CStr6to_str17h7208c416e44d9521E_001f23e8)
                (&local_d0,uStack_90,uStack_88);
      if (local_d0 == 1) {
        *param_1 = 0xc;
        *(ulong *)(param_1 + 2) = CONCAT44(uStack_c4,uStack_c8);
        *(ulong *)(param_1 + 4) = CONCAT44(uStack_c0._4_4_,(int)uStack_c0);
        _ZN4core3ptr69drop_in_place_LT_alloc__borrow__Cow_LT_core__ffi__c_str__CStr_GT__GT_17h347652f5a30ae63eE
                  (local_98);
        goto LAB_001613cb;
      }
      local_38 = local_28;
      uStack_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdc64247fdccea966E;
      local_d0 = 0x1ebc08;
      iStack_cc = 0;
      uStack_c8 = 2;
      uStack_c4 = 0;
      uStack_b0 = 0;
      iStack_ac = 0;
      uStack_c0 = &local_38;
      iStack_b8 = 1;
      iStack_b4 = 0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001f23e0)(&local_d0);
      _ZN4core3ptr69drop_in_place_LT_alloc__borrow__Cow_LT_core__ffi__c_str__CStr_GT__GT_17h347652f5a30ae63eE
                (local_98);
    }
    *param_1 = 0x11;
  }
  else {
    *(undefined8 *)(param_1 + 0xc) = uStack_a0;
    *(ulong *)(param_1 + 8) = CONCAT44(iStack_ac,uStack_b0);
    *(undefined8 *)(param_1 + 10) = local_a8;
    local_38 = (undefined *)CONCAT44(uStack_c0._4_4_,(int)uStack_c0);
    uStack_30 = (code *)CONCAT44(iStack_b4,iStack_b8);
    param_1[4] = (int)uStack_c0;
    param_1[5] = uStack_c0._4_4_;
    param_1[6] = iStack_b8;
    param_1[7] = iStack_b4;
    *param_1 = local_d0;
    param_1[1] = iStack_cc;
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_c4,uStack_c8);
    *(char **)(param_1 + 0xe) = "Getting security context of the current process";
    param_1[0x10] = 0x2f;
    param_1[0x11] = 0;
  }
LAB_001613cb:
  _ZN4core3ptr45drop_in_place_LT_selinux__SecurityContext_GT_17h1515c5d0d295c3c5E(local_68);
  return param_1;
}