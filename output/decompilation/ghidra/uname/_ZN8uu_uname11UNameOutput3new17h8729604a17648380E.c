undefined8 * _ZN8uu_uname11UNameOutput3new17h8729604a17648380E(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined local_448 [512];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined local_230 [8];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 local_1c0;
  
  uVar4 = 0x8000000000000000;
  (*(code *)
    PTR__ZN96__LT_platform_info__lib_impl__target__PlatformInfo_u20_as_u20_platform_info__PlatformInfoAPI_GT_3new17h6dba048fa364e08aE_001e06b8
  )(&local_460);
  uVar5 = uStack_450;
  uVar7 = local_458;
  uVar6 = local_460;
  (*(code *)PTR_memcpy_001e0568)(local_230,local_448,0x200);
  local_248 = uVar6;
  local_240 = uVar7;
  local_238 = uVar5;
  bVar1 = *param_2;
  if (((((bVar1 == 0) && ((param_2[1] & 1) == 0)) && (param_2[2] == 0)) &&
      ((param_2[4] == 0 && (param_2[3] == 0)))) &&
     ((param_2[5] == 0 && ((param_2[8] == 0 && (param_2[6] == 0)))))) {
    if (param_2[7] == 0) {
LAB_00151cb6:
                    /* try { // try from 00151cb6 to 00151cc8 has its CatchHandler @ 001520e3 */
      _ZN8uu_uname11UNameOutput3new28__u7b__u7b_closure_u7d__u7d_17h1fc53966bdfc526cE
                (&local_460,uVar7,uVar5);
      local_4b8 = local_458;
      local_480 = uStack_450;
      uVar6 = local_460;
      if (param_2[2] != 0 || bVar1 != 0) goto LAB_00151d09;
    }
    else {
      uVar6 = 0x8000000000000000;
    }
LAB_00151d59:
    uVar7 = 0x8000000000000000;
  }
  else {
    if (((param_2[1] | bVar1) & 1) != 0) goto LAB_00151cb6;
    uVar6 = 0x8000000000000000;
    if (param_2[2] == 0 && bVar1 == 0) goto LAB_00151d59;
LAB_00151d09:
                    /* try { // try from 00151d19 to 00151d25 has its CatchHandler @ 00152044 */
    _ZN8uu_uname11UNameOutput3new28__u7b__u7b_closure_u7d__u7d_17h1fc53966bdfc526cE
              (&local_460,local_228,local_220);
    local_4e8 = local_458;
    local_4a8 = uStack_450;
    uVar7 = local_460;
  }
  if (param_2[4] == 0 && bVar1 == 0) {
    local_4f8 = 0x8000000000000000;
    local_508 = 0x8000000000000000;
    if (param_2[3] != 0) goto LAB_00151dda;
  }
  else {
                    /* try { // try from 00151d81 to 00151d8d has its CatchHandler @ 001520de */
    _ZN8uu_uname11UNameOutput3new28__u7b__u7b_closure_u7d__u7d_17h1fc53966bdfc526cE
              (&local_460,local_210,local_208);
    local_4f8 = local_460;
    local_4c0 = local_458;
    local_488 = uStack_450;
    if (param_2[3] == 0 && bVar1 == 0) {
      local_508 = 0x8000000000000000;
    }
    else {
LAB_00151dda:
                    /* try { // try from 00151dea to 00151df6 has its CatchHandler @ 00152099 */
      _ZN8uu_uname11UNameOutput3new28__u7b__u7b_closure_u7d__u7d_17h1fc53966bdfc526cE
                (&local_460,local_1f8,local_1f0);
      local_508 = local_460;
      local_4c8 = local_458;
      local_490 = uStack_450;
    }
  }
  if (param_2[5] == 0 && bVar1 == 0) {
    local_500 = 0x8000000000000000;
    uVar5 = 0x8000000000000000;
    if (param_2[8] == 0) goto LAB_00151ec7;
  }
  else {
                    /* try { // try from 00151e38 to 00151e44 has its CatchHandler @ 00152086 */
    _ZN8uu_uname11UNameOutput3new28__u7b__u7b_closure_u7d__u7d_17h1fc53966bdfc526cE
              (&local_460,local_1e0,local_1d8);
    local_500 = local_460;
    local_4d0 = local_458;
    local_498 = uStack_450;
    if (bVar1 == 0 && param_2[8] == 0) {
      uVar5 = 0x8000000000000000;
      goto LAB_00151ec7;
    }
  }
                    /* try { // try from 00151e98 to 00151ea4 has its CatchHandler @ 00152072 */
  _ZN8uu_uname11UNameOutput3new28__u7b__u7b_closure_u7d__u7d_17h1fc53966bdfc526cE
            (&local_460,local_1c8,local_1c0);
  local_4d8 = local_458;
  local_4a0 = uStack_450;
  uVar5 = local_460;
LAB_00151ec7:
  if (param_2[6] == 0) {
    bVar1 = param_2[7];
    uVar2 = 0x8000000000000000;
    uVar3 = uVar7;
  }
  else {
                    /* try { // try from 00151ecf to 00151ee7 has its CatchHandler @ 00152060 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h91a23e95e4a350beE
              (&local_460,"unknown",7);
    bVar1 = param_2[7];
    uVar2 = local_460;
    uVar3 = uStack_450;
    local_4e0 = local_458;
  }
  if (bVar1 != 0) {
                    /* try { // try from 00151f1a to 00151f32 has its CatchHandler @ 0015204e */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h91a23e95e4a350beE
              (&local_460,"unknown",7);
    local_478 = local_458;
    uStack_470 = uStack_450;
    uVar4 = local_460;
  }
  *param_1 = uVar6;
  param_1[1] = local_4b8;
  param_1[2] = local_480;
  param_1[3] = uVar7;
  param_1[4] = local_4e8;
  param_1[5] = local_4a8;
  param_1[6] = local_4f8;
  param_1[7] = local_4c0;
  param_1[8] = local_488;
  param_1[9] = local_508;
  param_1[10] = local_4c8;
  param_1[0xb] = local_490;
  param_1[0xc] = local_500;
  param_1[0xd] = local_4d0;
  param_1[0xe] = local_498;
  param_1[0xf] = uVar5;
  param_1[0x10] = local_4d8;
  param_1[0x11] = local_4a0;
  param_1[0x12] = uVar2;
  param_1[0x13] = local_4e0;
  param_1[0x14] = uVar3;
  param_1[0x15] = uVar4;
  *(undefined4 *)(param_1 + 0x16) = (undefined4)local_478;
  *(undefined4 *)((long)param_1 + 0xb4) = local_478._4_4_;
  *(undefined4 *)(param_1 + 0x17) = (undefined4)uStack_470;
  *(undefined4 *)((long)param_1 + 0xbc) = uStack_470._4_4_;
  _ZN4core3ptr66drop_in_place_LT_platform_info__lib_impl__target__PlatformInfo_GT_17h9ca82266cd321676E
            (&local_248);
  return param_1;
}