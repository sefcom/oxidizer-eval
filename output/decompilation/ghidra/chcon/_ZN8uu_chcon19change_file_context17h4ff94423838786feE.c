void _ZN8uu_chcon19change_file_context17h4ff94423838786feE
               (int *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 local_1b8;
  int local_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined local_128 [8];
  int iStack_120;
  int iStack_11c;
  uint local_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  ulong local_f8;
  undefined local_e8 [8];
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_cc;
  int local_c0 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_78;
  ulong local_70;
  int local_68 [14];
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 + 0x7fffffffffffffffU < 2) {
    _ZN8uu_chcon22SELinuxSecurityContext11to_c_string17hdfff47f6cccf28b5E(&local_1b0,param_3);
    if (local_1b0 != 0x12) {
      *(undefined8 *)(param_1 + 0x10) = local_170;
      *(ulong *)(param_1 + 0xc) = CONCAT44(iStack_17c,local_180);
      *(undefined8 *)(param_1 + 0xe) = uStack_178;
      *(ulong *)(param_1 + 8) = CONCAT44(iStack_18c,iStack_190);
      *(ulong *)(param_1 + 10) = CONCAT44(iStack_184,iStack_188);
      *(ulong *)(param_1 + 4) = CONCAT44(iStack_19c,iStack_1a0);
      *(ulong *)(param_1 + 6) = CONCAT44(iStack_194,iStack_198);
      *(ulong *)(param_1 + 1) = CONCAT44(iStack_1a8,iStack_1ac);
      *(ulong *)(param_1 + 3) = CONCAT44(iStack_1a0,iStack_1a4);
      *param_1 = local_1b0;
      return;
    }
    iStack_e0 = iStack_1a4;
    iStack_dc = iStack_1a0;
    iStack_d8 = iStack_19c;
    iStack_120 = iStack_1a0;
    iStack_11c = iStack_19c;
    if (iStack_1a8 != 2) {
      local_108 = iStack_1a8;
      iStack_104 = iStack_1a4;
      iStack_100 = iStack_1a0;
      iStack_fc = iStack_19c;
      uStack_160 = CONCAT44(iStack_194,iStack_198) + -1;
      local_168 = 1;
      uStack_150 = uStack_150 & 0xffffffffffff0000;
                    /* try { // try from 00164fcb to 00164fda has its CatchHandler @ 00165741 */
      _ZN7selinux15SecurityContext12set_for_path17h19303842538e7cceE
                (&local_1b0,CONCAT44(iStack_19c,iStack_1a0),param_4,param_5,
                 *(undefined *)(param_2 + 0x7a));
      if (local_1b0 == 10) {
        *param_1 = 0x12;
      }
      else {
        *(ulong *)(param_1 + 0xc) = CONCAT44(iStack_17c,local_180);
        *(ulong *)(param_1 + 8) = CONCAT44(iStack_18c,iStack_190);
        *(ulong *)(param_1 + 10) = CONCAT44(iStack_184,iStack_188);
        *(ulong *)(param_1 + 4) = CONCAT44(iStack_19c,iStack_1a0);
        *(ulong *)(param_1 + 6) = CONCAT44(iStack_194,iStack_198);
        *param_1 = local_1b0;
        param_1[1] = iStack_1ac;
        param_1[2] = iStack_1a8;
        param_1[3] = iStack_1a4;
        *(char **)(param_1 + 0xe) = "Setting security context";
        param_1[0x10] = 0x18;
        param_1[0x11] = 0;
      }
                    /* try { // try from 001650b9 to 001650c2 has its CatchHandler @ 0016573c */
      _ZN4core3ptr45drop_in_place_LT_selinux__SecurityContext_GT_17hd7ef3bf7c0519cb7E(&local_168);
      _ZN4core3ptr69drop_in_place_LT_alloc__borrow__Cow_LT_core__ffi__c_str__CStr_GT__GT_17hdf16f007a625a2bfE
                (&local_108);
      return;
    }
    _ZN4core3ptr97drop_in_place_LT_core__option__Option_LT_alloc__borrow__Cow_LT_core__ffi__c_str__CStr_GT__GT__GT_17h573bdc652f691b23E
              (local_128);
    _ZN8uu_chcon6errors5Error8from_io117head3fca5f0bd97ebE
              (param_1,"Setting security context",0x18,param_4,param_5);
    return;
  }
  local_10c = (uint)*(byte *)(param_2 + 0x7a);
  _ZN7selinux15SecurityContext7of_path17h522c60b6cf830605E(&local_1b0,param_4,param_5);
  if (local_1b0 != 10) {
    *(ulong *)(param_1 + 0xc) = CONCAT44(iStack_17c,local_180);
    *(ulong *)(param_1 + 8) = CONCAT44(iStack_18c,iStack_190);
    *(ulong *)(param_1 + 10) = CONCAT44(iStack_184,iStack_188);
    *(ulong *)(param_1 + 4) = CONCAT44(iStack_19c,iStack_1a0);
    *(ulong *)(param_1 + 6) = CONCAT44(iStack_194,iStack_198);
    *(ulong *)param_1 = CONCAT44(iStack_1ac,local_1b0);
    *(ulong *)(param_1 + 2) = CONCAT44(iStack_1a4,iStack_1a8);
    *(char **)(param_1 + 0xe) = "Getting security context";
    param_1[0x10] = 0x18;
    param_1[0x11] = 0;
    return;
  }
  if (iStack_1a8 == 2) {
    _ZN8uu_chcon6errors5Error8from_io117head3fca5f0bd97ebE
              (param_1,"Applying partial security context to unlabeled file",0x33,param_4,param_5);
    return;
  }
  iStack_d8 = iStack_198;
  iStack_cc = iStack_18c;
  iStack_e0 = iStack_1a0;
  iStack_dc = iStack_19c;
                    /* try { // try from 0016500d to 00165051 has its CatchHandler @ 00165763 */
  (*(code *)PTR__ZN7selinux15SecurityContext11to_c_string17h0c9c9ed290d135c6E_001f70b0)
            (&local_168,local_e8);
  if ((int)local_168 != 10) {
    *(undefined8 *)(param_1 + 0xc) = local_138;
    *(undefined8 *)(param_1 + 8) = local_148;
    *(undefined8 *)(param_1 + 10) = uStack_140;
    *(undefined8 *)(param_1 + 4) = uStack_158;
    *(ulong *)(param_1 + 6) = uStack_150;
    *param_1 = (int)local_168;
    param_1[1] = local_168._4_4_;
    param_1[2] = (int)uStack_160;
    param_1[3] = uStack_160._4_4_;
    *(char **)(param_1 + 0xe) = "Getting security context";
    param_1[0x10] = 0x18;
    param_1[0x11] = 0;
    goto LAB_0016562e;
  }
  if ((int)uStack_160 == 2) {
    _ZN8uu_chcon6errors5Error8from_io117head3fca5f0bd97ebE
              (&local_1b0,"Applying partial security context to unlabeled file",0x33,param_4,param_5
              );
    *(undefined8 *)(param_1 + 0x10) = local_170;
    *(ulong *)(param_1 + 0xc) = CONCAT44(iStack_17c,local_180);
    *(undefined8 *)(param_1 + 0xe) = uStack_178;
    *(ulong *)(param_1 + 8) = CONCAT44(iStack_18c,iStack_190);
    *(ulong *)(param_1 + 10) = CONCAT44(iStack_184,iStack_188);
    *(ulong *)(param_1 + 4) = CONCAT44(iStack_19c,iStack_1a0);
    *(ulong *)(param_1 + 6) = CONCAT44(iStack_194,iStack_198);
    *param_1 = local_1b0;
    param_1[1] = iStack_1ac;
    param_1[2] = iStack_1a8;
    param_1[3] = iStack_1a4;
    goto LAB_0016562e;
  }
  local_f8 = uStack_150;
  local_108 = (int)uStack_160;
  iStack_104 = uStack_160._4_4_;
  iStack_100 = (undefined4)uStack_158;
  iStack_fc = uStack_158._4_4_;
  local_78 = uStack_158;
                    /* try { // try from 00165137 to 00165180 has its CatchHandler @ 0016572a */
  local_70 = uStack_150;
  (*(code *)PTR__ZN7selinux21OpaqueSecurityContext10from_c_str17h368aba2e3de4a508E_001f70b8)
            (local_68);
  if (local_68[0] == 10) {
LAB_001651c0:
    if (lVar1 == -0x8000000000000000) {
LAB_001652c3:
      if (*(long *)(param_2 + 0x30) != -0x8000000000000000) {
                    /* try { // try from 001652d5 to 00165316 has its CatchHandler @ 00165718 */
        (*(code *)PTR__ZN8uu_chcon18os_str_to_c_string17h768cd0b3ad15605aE_001f6f48)
                  (local_c0,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
        local_1b8 = local_b8;
        uVar4 = local_b0;
        if (local_c0[0] != 0x12) {
          _ZN8uu_chcon19change_file_context28__u7b__u7b_closure_u7d__u7d_17hd91decac0b464611E
                    (&local_1b0,param_4,param_5,local_c0);
          local_1b8 = CONCAT44(iStack_1a4,iStack_1a8);
          uVar4 = CONCAT44(iStack_19c,iStack_1a0);
          local_168 = CONCAT44(iStack_194,iStack_198);
          uStack_160 = CONCAT44(iStack_18c,iStack_190);
          uStack_158 = CONCAT44(iStack_184,iStack_188);
          uStack_150 = CONCAT44(iStack_17c,local_180);
          local_148 = uStack_178;
          uStack_140 = local_170;
          if (local_1b0 != 0x12) goto LAB_001655b5;
        }
                    /* try { // try from 00165353 to 0016536f has its CatchHandler @ 00165707 */
        (*(code *)PTR__ZN7selinux21OpaqueSecurityContext8set_role17hd7572ed457b85c0dE_001f70c8)
                  (&local_1b0,local_128,local_1b8,uVar4);
        if (local_1b0 != 10) goto LAB_00165570;
        _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h0b7b43b54cd99185E
                  (local_1b8,uVar4);
      }
      if (*(long *)(param_2 + 0x48) != -0x8000000000000000) {
                    /* try { // try from 0016539b to 001653dc has its CatchHandler @ 00165718 */
        (*(code *)PTR__ZN8uu_chcon18os_str_to_c_string17h768cd0b3ad15605aE_001f6f48)
                  (local_c0,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
        local_1b8 = local_b8;
        uVar4 = local_b0;
        if (local_c0[0] != 0x12) {
          _ZN8uu_chcon19change_file_context28__u7b__u7b_closure_u7d__u7d_17hd91decac0b464611E
                    (&local_1b0,param_4,param_5,local_c0);
          local_1b8 = CONCAT44(iStack_1a4,iStack_1a8);
          uVar4 = CONCAT44(iStack_19c,iStack_1a0);
          local_168 = CONCAT44(iStack_194,iStack_198);
          uStack_160 = CONCAT44(iStack_18c,iStack_190);
          uStack_158 = CONCAT44(iStack_184,iStack_188);
          uStack_150 = CONCAT44(iStack_17c,local_180);
          local_148 = uStack_178;
          uStack_140 = local_170;
          if (local_1b0 != 0x12) goto LAB_001655b5;
        }
                    /* try { // try from 00165419 to 00165435 has its CatchHandler @ 00165707 */
        (*(code *)PTR__ZN7selinux21OpaqueSecurityContext8set_type17h1115d79b3e28ec42E_001f70d0)
                  (&local_1b0,local_128,local_1b8,uVar4);
        if (local_1b0 != 10) goto LAB_00165570;
        _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h0b7b43b54cd99185E
                  (local_1b8,uVar4);
      }
      if (*(long *)(param_2 + 0x60) != -0x8000000000000000) {
                    /* try { // try from 00165461 to 001654a2 has its CatchHandler @ 00165718 */
        (*(code *)PTR__ZN8uu_chcon18os_str_to_c_string17h768cd0b3ad15605aE_001f6f48)
                  (local_c0,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70));
        local_1b8 = local_b8;
        uVar4 = local_b0;
        if (local_c0[0] != 0x12) {
          _ZN8uu_chcon19change_file_context28__u7b__u7b_closure_u7d__u7d_17hd91decac0b464611E
                    (&local_1b0,param_4,param_5,local_c0);
          local_1b8 = CONCAT44(iStack_1a4,iStack_1a8);
          uVar4 = CONCAT44(iStack_19c,iStack_1a0);
          local_168 = CONCAT44(iStack_194,iStack_198);
          uStack_160 = CONCAT44(iStack_18c,iStack_190);
          uStack_158 = CONCAT44(iStack_184,iStack_188);
          uStack_150 = CONCAT44(iStack_17c,local_180);
          local_148 = uStack_178;
          uStack_140 = local_170;
          if (local_1b0 != 0x12) goto LAB_001655b5;
        }
                    /* try { // try from 001654df to 001654fb has its CatchHandler @ 00165707 */
        (*(code *)PTR__ZN7selinux21OpaqueSecurityContext9set_range17h55d2baed979040b1E_001f70d8)
                  (&local_1b0,local_128,local_1b8,uVar4);
        if (local_1b0 != 10) goto LAB_00165570;
        _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h0b7b43b54cd99185E
                  (local_1b8,uVar4);
      }
                    /* try { // try from 00165511 to 00165523 has its CatchHandler @ 00165705 */
      (*(code *)PTR__ZN7selinux21OpaqueSecurityContext11to_c_string17h430491ec1faf4b27E_001f70e0)
                (&local_1b0,local_128);
      if (local_1b0 == 10) {
        uVar4 = CONCAT44(iStack_1a4,iStack_1a8);
        lVar2 = CONCAT44(iStack_19c,iStack_1a0);
        lVar1 = lVar2 + -1;
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he02cbea1a37bd162E
                          (local_78,local_70 - 1,uVar4,lVar1);
        if (cVar3 == '\0') {
          local_168 = 1;
          uStack_150 = uStack_150 & 0xffffffffffff0000;
                    /* try { // try from 00165667 to 00165681 has its CatchHandler @ 001656f3 */
          uStack_160 = lVar1;
          _ZN7selinux15SecurityContext12set_for_path17h19303842538e7cceE
                    (&local_1b0,uVar4,param_4,param_5,local_10c);
          if (local_1b0 == 10) {
            *param_1 = 0x12;
          }
          else {
            *(ulong *)(param_1 + 0xc) = CONCAT44(iStack_17c,local_180);
            *(ulong *)(param_1 + 8) = CONCAT44(iStack_18c,iStack_190);
            *(ulong *)(param_1 + 10) = CONCAT44(iStack_184,iStack_188);
            *(ulong *)(param_1 + 4) = CONCAT44(iStack_19c,iStack_1a0);
            *(ulong *)(param_1 + 6) = CONCAT44(iStack_194,iStack_198);
            *param_1 = local_1b0;
            param_1[1] = iStack_1ac;
            param_1[2] = iStack_1a8;
            param_1[3] = iStack_1a4;
            *(char **)(param_1 + 0xe) = "Setting security context";
            param_1[0x10] = 0x18;
            param_1[0x11] = 0;
          }
                    /* try { // try from 001656c7 to 001656d0 has its CatchHandler @ 001656ee */
          _ZN4core3ptr45drop_in_place_LT_selinux__SecurityContext_GT_17hd7ef3bf7c0519cb7E
                    (&local_168);
        }
        else {
          *param_1 = 0x12;
        }
        _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h0b7b43b54cd99185E
                  (uVar4,lVar2);
                    /* try { // try from 001656dc to 001656e8 has its CatchHandler @ 0016572a */
        _ZN4core3ptr51drop_in_place_LT_selinux__OpaqueSecurityContext_GT_17he57417cd918cb932E
                  (local_128);
        goto LAB_00165621;
      }
      *(ulong *)(param_1 + 6) = CONCAT44(iStack_194,iStack_198);
      *(ulong *)(param_1 + 8) = CONCAT44(iStack_18c,iStack_190);
      *(ulong *)(param_1 + 10) = CONCAT44(iStack_184,iStack_188);
      *(ulong *)(param_1 + 0xc) = CONCAT44(iStack_17c,local_180);
      *param_1 = local_1b0;
      param_1[1] = iStack_1ac;
      param_1[2] = iStack_1a8;
      param_1[3] = iStack_1a4;
      param_1[4] = iStack_1a0;
      param_1[5] = iStack_19c;
      *(char **)(param_1 + 0xe) = "Getting security context";
      param_1[0x10] = 0x18;
      param_1[0x11] = 0;
    }
    else {
                    /* try { // try from 001651d9 to 00165250 has its CatchHandler @ 00165718 */
      (*(code *)PTR__ZN8uu_chcon18os_str_to_c_string17h768cd0b3ad15605aE_001f6f48)
                (local_c0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
      local_1b8 = local_b8;
      uVar4 = local_b0;
      if (local_c0[0] == 0x12) {
LAB_0016528d:
                    /* try { // try from 0016528d to 001652a9 has its CatchHandler @ 00165707 */
        (*(code *)PTR__ZN7selinux21OpaqueSecurityContext8set_user17hedb81d8385ad715aE_001f70c0)
                  (&local_1b0,local_128,local_1b8,uVar4);
        if (local_1b0 == 10) {
          _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h0b7b43b54cd99185E
                    (local_1b8,uVar4);
          goto LAB_001652c3;
        }
LAB_00165570:
        param_1[0xd] = iStack_17c;
        param_1[9] = iStack_18c;
        param_1[10] = iStack_188;
        param_1[0xb] = iStack_184;
        param_1[0xc] = local_180;
        param_1[5] = iStack_19c;
        param_1[6] = iStack_198;
        param_1[7] = iStack_194;
        param_1[8] = iStack_190;
        param_1[1] = iStack_1ac;
        param_1[2] = iStack_1a8;
        param_1[3] = iStack_1a4;
        param_1[4] = iStack_1a0;
        *param_1 = local_1b0;
        *(char **)(param_1 + 0xe) = "Setting security context user";
        param_1[0x10] = 0x1d;
        param_1[0x11] = 0;
        _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h0b7b43b54cd99185E
                  (local_1b8,uVar4);
      }
      else {
        _ZN8uu_chcon19change_file_context28__u7b__u7b_closure_u7d__u7d_17hd91decac0b464611E
                  (&local_1b0,param_4,param_5,local_c0);
        local_1b8 = CONCAT44(iStack_1a4,iStack_1a8);
        uVar4 = CONCAT44(iStack_19c,iStack_1a0);
        local_168 = CONCAT44(iStack_194,iStack_198);
        uStack_160 = CONCAT44(iStack_18c,iStack_190);
        uStack_158 = CONCAT44(iStack_184,iStack_188);
        uStack_150 = CONCAT44(iStack_17c,local_180);
        local_148 = uStack_178;
        uStack_140 = local_170;
        if (local_1b0 == 0x12) goto LAB_0016528d;
LAB_001655b5:
        *(undefined8 *)(param_1 + 0xe) = local_148;
        *(undefined8 *)(param_1 + 0x10) = uStack_140;
        *(undefined8 *)(param_1 + 10) = uStack_158;
        *(ulong *)(param_1 + 0xc) = uStack_150;
        *(undefined8 *)(param_1 + 6) = local_168;
        *(long *)(param_1 + 8) = uStack_160;
        *(ulong *)param_1 = CONCAT44(iStack_1ac,local_1b0);
        *(undefined8 *)(param_1 + 2) = local_1b8;
        *(undefined8 *)(param_1 + 4) = uVar4;
      }
    }
                    /* try { // try from 00165614 to 00165620 has its CatchHandler @ 0016572a */
    _ZN4core3ptr51drop_in_place_LT_selinux__OpaqueSecurityContext_GT_17he57417cd918cb932E(local_128)
    ;
  }
  else {
    _ZN8uu_chcon19change_file_context28__u7b__u7b_closure_u7d__u7d_17h6c95354de1eca57eE
              (&local_1b0,param_4,param_5,local_68);
    local_168 = CONCAT44(iStack_19c,iStack_1a0);
    uStack_160 = CONCAT44(iStack_194,iStack_198);
    uStack_150 = CONCAT44(iStack_184,iStack_188);
    local_148 = CONCAT44(iStack_17c,local_180);
    uStack_140 = uStack_178;
    local_138 = local_170;
    if (local_1b0 == 0x12) goto LAB_001651c0;
    *(undefined8 *)(param_1 + 0x10) = local_170;
    *(undefined8 *)(param_1 + 0xc) = local_148;
    *(undefined8 *)(param_1 + 0xe) = uStack_178;
    *(ulong *)(param_1 + 8) = CONCAT44(iStack_18c,iStack_190);
    *(ulong *)(param_1 + 10) = uStack_150;
    *(undefined8 *)(param_1 + 4) = local_168;
    *(long *)(param_1 + 6) = uStack_160;
    *(ulong *)param_1 = CONCAT44(iStack_1ac,local_1b0);
    *(ulong *)(param_1 + 2) = CONCAT44(iStack_1a4,iStack_1a8);
  }
LAB_00165621:
  _ZN4core3ptr69drop_in_place_LT_alloc__borrow__Cow_LT_core__ffi__c_str__CStr_GT__GT_17hdf16f007a625a2bfE
            (&local_108);
LAB_0016562e:
  _ZN4core3ptr45drop_in_place_LT_selinux__SecurityContext_GT_17hd7ef3bf7c0519cb7E(local_e8);
  return;
}