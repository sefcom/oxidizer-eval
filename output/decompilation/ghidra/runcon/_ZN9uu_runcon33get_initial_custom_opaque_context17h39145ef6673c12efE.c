void _ZN9uu_runcon33get_initial_custom_opaque_context17h39145ef6673c12efE
               (int *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long local_d8;
  undefined auStack_d0 [16];
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  if (param_2 == 0) {
    (*(code *)PTR__ZN7selinux15SecurityContext7current17h79d84b1b82db0947E_001f23d0)(&local_b0,0);
    if (local_b0 != 10) {
      *(undefined8 *)(param_1 + 10) = local_88;
      *(undefined8 *)(param_1 + 0xc) = uStack_80;
      param_1[9] = local_8c;
      *(ulong *)(param_1 + 5) = CONCAT44(iStack_98,iStack_9c);
      *(ulong *)(param_1 + 7) = CONCAT44(uStack_90,iStack_94);
      *(ulong *)(param_1 + 1) = CONCAT44(iStack_a8,iStack_ac);
      *(ulong *)(param_1 + 3) = CONCAT44(iStack_a0,iStack_a4);
      *param_1 = local_b0;
      *(char **)(param_1 + 0xe) = "Getting security context of the current process";
      param_1[0x10] = 0x2f;
      param_1[0x11] = 0;
      return;
    }
  }
  else {
    _ZN9uu_runcon22get_transition_context17h61b6643746ed6c81E(&local_b0,param_3,param_4);
    if (local_b0 != 0x11) {
      *(undefined8 *)(param_1 + 0xe) = local_78;
      *(undefined8 *)(param_1 + 0x10) = uStack_70;
      *(undefined8 *)(param_1 + 10) = local_88;
      *(undefined8 *)(param_1 + 0xc) = uStack_80;
      param_1[9] = local_8c;
      *(ulong *)(param_1 + 5) = CONCAT44(iStack_98,iStack_9c);
      *(ulong *)(param_1 + 7) = CONCAT44(uStack_90,iStack_94);
      *(ulong *)(param_1 + 1) = CONCAT44(iStack_a8,iStack_ac);
      *(ulong *)(param_1 + 3) = CONCAT44(iStack_a0,iStack_a4);
      *param_1 = local_b0;
      return;
    }
  }
  local_68 = iStack_a8;
  iStack_64 = iStack_a4;
  iStack_60 = iStack_a0;
  iStack_5c = iStack_9c;
  local_58 = iStack_98;
  iStack_54 = iStack_94;
  uStack_50 = uStack_90;
  iStack_4c = local_8c;
                    /* try { // try from 001619f0 to 00161a2e has its CatchHandler @ 00161bb0 */
  (*(code *)PTR__ZN7selinux15SecurityContext11to_c_string17h0c9c9ed290d135c6E_001f23d8)
            (&local_b0,&local_68);
  if (local_b0 == 10) {
    local_d8 = CONCAT44(iStack_a4,iStack_a8);
    local_48 = iStack_a0;
    iStack_44 = iStack_9c;
    iStack_40 = iStack_98;
    iStack_3c = iStack_94;
    if (local_d8 == 2) {
      auStack_d0 = (*(code *)
                     PTR__ZN69__LT_alloc__ffi__c_str__CString_u20_as_u20_core__default__Default_GT_7default17h715230eacb8601c0E_001f2428
                   )();
      local_d8 = 1;
    }
    else {
      auStack_d0._4_4_ = iStack_9c;
      auStack_d0._0_4_ = iStack_a0;
      auStack_d0._12_4_ = iStack_94;
      auStack_d0._8_4_ = iStack_98;
    }
                    /* try { // try from 00161b2f to 00161b39 has its CatchHandler @ 00161ba3 */
    (*(code *)PTR__ZN7selinux21OpaqueSecurityContext10from_c_str17h368aba2e3de4a508E_001f2410)
              (&local_b0,auStack_d0._0_8_,auStack_d0._8_8_);
    if (local_b0 == 10) {
      *(ulong *)(param_1 + 2) = CONCAT44(iStack_a4,iStack_a8);
      *param_1 = 0x11;
    }
    else {
      *(undefined8 *)(param_1 + 0xc) = uStack_80;
      *(ulong *)(param_1 + 8) = CONCAT44(local_8c,uStack_90);
      *(undefined8 *)(param_1 + 10) = local_88;
      *(ulong *)(param_1 + 4) = CONCAT44(iStack_9c,iStack_a0);
      *(ulong *)(param_1 + 6) = CONCAT44(iStack_94,iStack_98);
      *param_1 = local_b0;
      param_1[1] = iStack_ac;
      param_1[2] = iStack_a8;
      param_1[3] = iStack_a4;
      *(char **)(param_1 + 0xe) = "Creating new context";
      param_1[0x10] = 0x14;
      param_1[0x11] = 0;
    }
    _ZN4core3ptr69drop_in_place_LT_alloc__borrow__Cow_LT_core__ffi__c_str__CStr_GT__GT_17h347652f5a30ae63eE
              (&local_d8);
  }
  else {
    *(undefined8 *)(param_1 + 0xc) = uStack_80;
    *(ulong *)(param_1 + 8) = CONCAT44(local_8c,uStack_90);
    *(undefined8 *)(param_1 + 10) = local_88;
    local_48 = iStack_a0;
    iStack_44 = iStack_9c;
    iStack_40 = iStack_98;
    iStack_3c = iStack_94;
    param_1[4] = iStack_a0;
    param_1[5] = iStack_9c;
    param_1[6] = iStack_98;
    param_1[7] = iStack_94;
    *param_1 = local_b0;
    param_1[1] = iStack_ac;
    *(ulong *)(param_1 + 2) = CONCAT44(iStack_a4,iStack_a8);
    *(char **)(param_1 + 0xe) = "Getting security context";
    param_1[0x10] = 0x18;
    param_1[0x11] = 0;
  }
  _ZN4core3ptr45drop_in_place_LT_selinux__SecurityContext_GT_17h1515c5d0d295c3c5E(&local_68);
  return;
}