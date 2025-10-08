int * _ZN9uu_runcon21set_next_exec_context17h3c5444e4c838f269E(int *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  undefined8 local_88;
  long local_80;
  undefined2 local_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined8 local_28;
  
  (*(code *)PTR__ZN7selinux21OpaqueSecurityContext11to_c_string17h430491ec1faf4b27E_001f23f0)
            (&local_68);
  if (local_68 == 10) {
    uVar2 = CONCAT44(iStack_5c,iStack_60);
    lVar3 = CONCAT44(iStack_54,local_58);
    lVar1 = lVar3 + -1;
    local_88 = 1;
    local_70 = 0;
    local_80 = lVar1;
                    /* try { // try from 00161459 to 001614ef has its CatchHandler @ 00161583 */
    bVar4 = (*(code *)PTR__ZN7selinux15SecurityContext5check17he42cb34df3f2af54E_001f23f8)
                      (&local_88);
    if ((bVar4 == 2) || ((bVar4 & 1) == 0)) {
      _ZN9uu_runcon6errors5Error8from_io117h2e5a1b363c345453E
                (&local_68,"Checking security context",0x19,uVar2,lVar1,0x1400000003);
      *(undefined8 *)(param_1 + 0x10) = local_28;
      param_1[0xc] = local_38;
      param_1[0xd] = iStack_34;
      param_1[0xe] = iStack_30;
      param_1[0xf] = iStack_2c;
      param_1[8] = local_48;
      param_1[9] = iStack_44;
      param_1[10] = iStack_40;
      param_1[0xb] = iStack_3c;
      param_1[4] = local_58;
      param_1[5] = iStack_54;
      param_1[6] = iStack_50;
      param_1[7] = iStack_4c;
      *param_1 = local_68;
      param_1[1] = iStack_64;
      param_1[2] = iStack_60;
      param_1[3] = iStack_5c;
                    /* try { // try from 0016151c to 00161563 has its CatchHandler @ 0016157e */
      _ZN4core3ptr45drop_in_place_LT_selinux__SecurityContext_GT_17h1515c5d0d295c3c5E(&local_88);
    }
    else {
      (*(code *)PTR__ZN7selinux15SecurityContext17set_for_next_exec17hf9f24e15c430b405E_001f2400)
                (&local_68,&local_88);
      if (local_68 == 10) {
        *param_1 = 0x11;
      }
      else {
        *(ulong *)(param_1 + 0xc) = CONCAT44(iStack_34,local_38);
        *(ulong *)(param_1 + 8) = CONCAT44(iStack_44,local_48);
        *(ulong *)(param_1 + 10) = CONCAT44(iStack_3c,iStack_40);
        *(ulong *)(param_1 + 4) = CONCAT44(iStack_54,local_58);
        *(ulong *)(param_1 + 6) = CONCAT44(iStack_4c,iStack_50);
        *param_1 = local_68;
        param_1[1] = iStack_64;
        param_1[2] = iStack_60;
        param_1[3] = iStack_5c;
        *(char **)(param_1 + 0xe) = "Setting new security context";
        param_1[0x10] = 0x1c;
        param_1[0x11] = 0;
      }
      _ZN4core3ptr45drop_in_place_LT_selinux__SecurityContext_GT_17h1515c5d0d295c3c5E(&local_88);
    }
    _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h9db586c62cff4b59E(uVar2,lVar3);
  }
  else {
    *(ulong *)(param_1 + 6) = CONCAT44(iStack_4c,iStack_50);
    *(ulong *)(param_1 + 8) = CONCAT44(iStack_44,local_48);
    *(ulong *)(param_1 + 10) = CONCAT44(iStack_3c,iStack_40);
    *(ulong *)(param_1 + 0xc) = CONCAT44(iStack_34,local_38);
    *param_1 = local_68;
    param_1[1] = iStack_64;
    *(ulong *)(param_1 + 2) = CONCAT44(iStack_5c,iStack_60);
    *(ulong *)(param_1 + 4) = CONCAT44(iStack_54,local_58);
    *(char **)(param_1 + 0xe) = "Creating new context";
    param_1[0x10] = 0x14;
    param_1[0x11] = 0;
  }
  return param_1;
}