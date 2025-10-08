undefined  [16]
_ZN9uu_runcon15execute_command17hf1fa972cc5d084a3E
          (undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined auVar8 [16];
  int local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_130;
  int local_128 [5];
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 local_e8;
  int local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long local_c8;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int local_78 [5];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_38;
  
  _ZN9uu_runcon18os_str_to_c_string17h048fb3727ae8a25aE(&local_170,param_1,param_2);
  if (local_170 == 0x11) {
    uVar1 = CONCAT44(uStack_164,uStack_168);
    uVar2 = CONCAT44(uStack_15c,uStack_160);
                    /* try { // try from 00161f44 to 00161f50 has its CatchHandler @ 001621fc */
    _ZN4core4iter6traits8iterator8Iterator7collect17h5d210673f8f24f41E
              (&local_170,param_3,param_3 + param_4 * 0x18);
    if (local_170 == 0x11) {
      local_c8 = CONCAT44(uStack_154,uStack_158);
      local_d8 = uStack_168;
      uStack_d4 = uStack_164;
      uStack_d0 = uStack_160;
      uStack_cc = uStack_15c;
      lVar6 = -1;
      if (param_4 < 0xfffffffffffffffe) {
        lVar6 = param_4 + 2;
      }
                    /* try { // try from 00161f87 to 00161f9c has its CatchHandler @ 001621d4 */
      auVar8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17hed9964fe064c2e72E
                         (lVar6,8,8,&PTR_s_src_uu_runcon_src_runcon_rs_001ebe38);
      local_170 = auVar8._0_4_;
      uStack_16c = auVar8._4_4_;
      uStack_168 = auVar8._8_4_;
      uStack_164 = auVar8._12_4_;
      uStack_160 = 0;
      uStack_15c = 0;
                    /* try { // try from 00161fb0 to 00161ff7 has its CatchHandler @ 001621db */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc452364fbd761f0eE
                (&local_170,uVar1,&PTR_s_src_uu_runcon_src_runcon_rs_001ebe50);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_14extend_trusted17hdc1408df1d37ee13E
                (&local_170,CONCAT44(uStack_cc,uStack_d0),
                 local_c8 * 0x10 + CONCAT44(uStack_cc,uStack_d0));
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc452364fbd761f0eE
                (&local_170,0,&PTR_s_src_uu_runcon_src_runcon_rs_001ebe80);
      (*(code *)PTR_execvp_001f2450)(uVar1,CONCAT44(uStack_164,uStack_168));
      puVar4 = (uint *)(*(code *)PTR___errno_location_001f23c0)();
      uVar7 = (ulong)*puVar4 << 0x20 | 2;
      cVar3 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(uVar7);
                    /* try { // try from 00162021 to 001620a3 has its CatchHandler @ 001621d9 */
      _ZN9uu_runcon6errors5Error8from_io117h2e5a1b363c345453E
                (local_78,"Executing command",0x11,param_1,param_2,uVar7);
      local_e0 = (cVar3 == '\0') + 0x7e;
      local_e8 = local_38;
      local_108 = local_58;
      uStack_104 = uStack_54;
      uStack_114 = uStack_64;
      uStack_110 = uStack_60;
      uStack_10c = uStack_5c;
      local_128[0] = local_78[0];
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9d7116f1e2e735a5E(local_128);
      _ZN4core3ptr60drop_in_place_LT_alloc__vec__Vec_LT__BP_const_u20_i8_GT__GT_17hc4556757e5bae3cfE
                (CONCAT44(uStack_16c,local_170),CONCAT44(uStack_164,uStack_168));
      _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_alloc__ffi__c_str__CString_GT__GT_17h05fd21f4674cee22E
                (&local_d8);
    }
    else {
      uStack_88 = uStack_15c;
      uStack_84 = uStack_158;
      uStack_80 = uStack_154;
      local_e8 = local_130;
      local_108 = uStack_150;
      uStack_104 = uStack_14c;
      uStack_114 = uStack_15c;
      uStack_110 = uStack_158;
      uStack_10c = uStack_154;
      local_128[0] = local_170;
      local_e0 = 1;
                    /* try { // try from 001621a0 to 001621a9 has its CatchHandler @ 001621fc */
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9d7116f1e2e735a5E(local_128);
    }
    _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h9db586c62cff4b59E(uVar1,uVar2);
  }
  else {
    local_e8 = local_130;
    uStack_110 = uStack_158;
    uStack_10c = uStack_154;
    local_108 = uStack_150;
    uStack_104 = uStack_14c;
    local_128[0] = local_170;
    uStack_114 = uStack_15c;
    local_e0 = 1;
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9d7116f1e2e735a5E(local_128);
  }
  auVar8._8_8_ = &
                 PTR__ZN4core3ptr51drop_in_place_LT_uu_runcon__errors__RunconError_GT_17h8e44aa9182b1b40dE_001ebeb8
  ;
  auVar8._0_8_ = uVar5;
  return auVar8;
}