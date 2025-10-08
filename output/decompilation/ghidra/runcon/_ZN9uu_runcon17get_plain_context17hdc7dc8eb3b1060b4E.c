int * _ZN9uu_runcon17get_plain_context17hdc7dc8eb3b1060b4E
                (int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  cVar3 = (*(code *)PTR__ZN6uucore8features7selinux18is_selinux_enabled17h2d0474223322b7deE_001f2408
          )();
  if (cVar3 == '\0') {
    *param_1 = 0xb;
  }
  else {
    _ZN9uu_runcon18os_str_to_c_string17h048fb3727ae8a25aE(&local_60,param_2,param_3);
    uVar2 = local_50;
    if (local_60 == 0x11) {
      uVar1 = CONCAT44(iStack_54,iStack_58);
                    /* try { // try from 001615ef to 001615ff has its CatchHandler @ 0016169d */
      (*(code *)PTR__ZN7selinux21OpaqueSecurityContext10from_c_str17h368aba2e3de4a508E_001f2410)
                (&local_60,uVar1,local_50);
      if (local_60 == 10) {
        *(ulong *)(param_1 + 2) = CONCAT44(iStack_54,iStack_58);
        *param_1 = 0x11;
      }
      else {
        *(undefined8 *)(param_1 + 0xc) = local_30;
        *(undefined8 *)(param_1 + 8) = local_40;
        *(undefined8 *)(param_1 + 10) = uStack_38;
        *(undefined8 *)(param_1 + 4) = local_50;
        *(undefined8 *)(param_1 + 6) = uStack_48;
        *param_1 = local_60;
        param_1[1] = iStack_5c;
        param_1[2] = iStack_58;
        param_1[3] = iStack_54;
        *(char **)(param_1 + 0xe) = "Creating new context";
        param_1[0x10] = 0x14;
        param_1[0x11] = 0;
      }
      _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h9db586c62cff4b59E(uVar1,uVar2)
      ;
    }
    else {
      *(undefined8 *)(param_1 + 6) = uStack_48;
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 10) = uStack_38;
      *(undefined8 *)(param_1 + 0xc) = local_30;
      *(undefined8 *)(param_1 + 0xe) = local_28;
      *(undefined8 *)(param_1 + 0x10) = uStack_20;
      *param_1 = local_60;
      param_1[1] = iStack_5c;
      *(ulong *)(param_1 + 2) = CONCAT44(iStack_54,iStack_58);
      *(undefined8 *)(param_1 + 4) = local_50;
    }
  }
  return param_1;
}