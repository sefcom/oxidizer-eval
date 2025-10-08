int * _ZN9uu_runcon18get_custom_context17hfc7b7c6ca4bc17a5E
                (int *param_1,undefined param_2,long param_3,undefined8 param_4,long param_5,
                undefined8 param_6,long param_7,undefined8 param_8,long param_9,undefined8 param_10,
                undefined8 param_11,undefined8 param_12)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_80;
  int local_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  cVar1 = (*(code *)PTR__ZN6uucore8features7selinux18is_selinux_enabled17h2d0474223322b7deE_001f2408
          )();
  if (cVar1 == '\0') {
    *param_1 = 0xb;
    return param_1;
  }
  _ZN9uu_runcon33get_initial_custom_opaque_context17h39145ef6673c12efE
            (&local_78,param_2,param_11,param_12);
  if (local_78 != 0x11) {
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    *(ulong *)(param_1 + 0xc) = CONCAT44(local_44,iStack_48);
    *(undefined8 *)(param_1 + 0xe) = local_40;
    *(ulong *)(param_1 + 8) = CONCAT44(iStack_54,iStack_58);
    *(ulong *)(param_1 + 10) = CONCAT44(iStack_4c,iStack_50);
    *(ulong *)(param_1 + 4) = CONCAT44(iStack_64,iStack_68);
    *(ulong *)(param_1 + 6) = CONCAT44(iStack_5c,iStack_60);
    *param_1 = local_78;
    param_1[1] = local_74;
    *(ulong *)(param_1 + 2) = CONCAT44(iStack_6c,iStack_70);
    return param_1;
  }
  local_80 = CONCAT44(iStack_6c,iStack_70);
  if (param_3 == 0) {
LAB_00161c8c:
    if (param_5 != 0) {
                    /* try { // try from 00161c91 to 00161ca0 has its CatchHandler @ 00161ed0 */
      _ZN9uu_runcon18os_str_to_c_string17h048fb3727ae8a25aE(&local_78,param_5,param_6);
      if (local_78 != 0x11) goto LAB_00161e08;
      uVar5 = CONCAT44(iStack_6c,iStack_70);
      uVar4 = CONCAT44(iStack_64,iStack_68);
                    /* try { // try from 00161cb8 to 00161ccd has its CatchHandler @ 00161ec0 */
      (*(code *)PTR__ZN7selinux21OpaqueSecurityContext8set_role17hd7572ed457b85c0dE_001f2438)
                (&local_78,&local_80,uVar5,uVar4);
      if (local_78 != 10) {
        uVar2 = 0x1d;
        pcVar3 = "Setting security context role";
        goto LAB_00161e6d;
      }
      _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h9db586c62cff4b59E(uVar5,uVar4)
      ;
    }
    if (param_7 != 0) {
                    /* try { // try from 00161cfb to 00161d04 has its CatchHandler @ 00161ed0 */
      _ZN9uu_runcon18os_str_to_c_string17h048fb3727ae8a25aE(&local_78,param_7,param_8);
      if (local_78 != 0x11) goto LAB_00161e08;
      uVar5 = CONCAT44(iStack_6c,iStack_70);
      uVar4 = CONCAT44(iStack_64,iStack_68);
                    /* try { // try from 00161d1c to 00161d31 has its CatchHandler @ 00161ec0 */
      (*(code *)PTR__ZN7selinux21OpaqueSecurityContext8set_type17h1115d79b3e28ec42E_001f2440)
                (&local_78,&local_80,uVar5,uVar4);
      if (local_78 != 10) {
        uVar2 = 0x1d;
        pcVar3 = "Setting security context type";
        goto LAB_00161e6d;
      }
      _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h9db586c62cff4b59E(uVar5,uVar4)
      ;
    }
    if (param_9 != 0) {
                    /* try { // try from 00161d5f to 00161d68 has its CatchHandler @ 00161ed0 */
      _ZN9uu_runcon18os_str_to_c_string17h048fb3727ae8a25aE(&local_78,param_9,param_10);
      if (local_78 != 0x11) goto LAB_00161e08;
      uVar5 = CONCAT44(iStack_6c,iStack_70);
      uVar4 = CONCAT44(iStack_64,iStack_68);
                    /* try { // try from 00161d80 to 00161d95 has its CatchHandler @ 00161ec0 */
      (*(code *)PTR__ZN7selinux21OpaqueSecurityContext9set_range17h55d2baed979040b1E_001f2448)
                (&local_78,&local_80,uVar5,uVar4);
      if (local_78 != 10) {
        uVar2 = 0x1e;
        pcVar3 = "Setting security context range";
        goto LAB_00161e6d;
      }
      _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h9db586c62cff4b59E(uVar5,uVar4)
      ;
    }
    *(undefined8 *)(param_1 + 2) = local_80;
    *param_1 = 0x11;
  }
  else {
                    /* try { // try from 00161c37 to 00161c46 has its CatchHandler @ 00161ed0 */
    _ZN9uu_runcon18os_str_to_c_string17h048fb3727ae8a25aE(&local_78,param_3,param_4);
    if (local_78 == 0x11) {
      uVar5 = CONCAT44(iStack_6c,iStack_70);
      uVar4 = CONCAT44(iStack_64,iStack_68);
                    /* try { // try from 00161c5e to 00161c73 has its CatchHandler @ 00161ec0 */
      (*(code *)PTR__ZN7selinux21OpaqueSecurityContext8set_user17hedb81d8385ad715aE_001f2430)
                (&local_78,&local_80,uVar5,uVar4);
      if (local_78 == 10) {
        _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h9db586c62cff4b59E
                  (uVar5,uVar4);
        goto LAB_00161c8c;
      }
      uVar2 = 0x1d;
      pcVar3 = "Setting security context user";
LAB_00161e6d:
      param_1[0xd] = local_44;
      param_1[9] = iStack_54;
      param_1[10] = iStack_50;
      param_1[0xb] = iStack_4c;
      param_1[0xc] = iStack_48;
      param_1[5] = iStack_64;
      param_1[6] = iStack_60;
      param_1[7] = iStack_5c;
      param_1[8] = iStack_58;
      param_1[1] = local_74;
      param_1[2] = iStack_70;
      param_1[3] = iStack_6c;
      param_1[4] = iStack_68;
      *param_1 = local_78;
      *(char **)(param_1 + 0xe) = pcVar3;
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h9db586c62cff4b59E(uVar5,uVar4)
      ;
    }
    else {
LAB_00161e08:
      *(ulong *)(param_1 + 6) = CONCAT44(iStack_5c,iStack_60);
      *(ulong *)(param_1 + 8) = CONCAT44(iStack_54,iStack_58);
      *(ulong *)(param_1 + 10) = CONCAT44(iStack_4c,iStack_50);
      *(ulong *)(param_1 + 0xc) = CONCAT44(local_44,iStack_48);
      *(undefined8 *)(param_1 + 0xe) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      *param_1 = local_78;
      param_1[1] = local_74;
      param_1[2] = iStack_70;
      param_1[3] = iStack_6c;
      param_1[4] = iStack_68;
      param_1[5] = iStack_64;
    }
    _ZN4core3ptr51drop_in_place_LT_selinux__OpaqueSecurityContext_GT_17hc820fdfb3036263fE(&local_80)
    ;
  }
  return param_1;
}