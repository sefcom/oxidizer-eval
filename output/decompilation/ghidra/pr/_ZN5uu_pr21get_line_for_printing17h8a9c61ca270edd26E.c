void __rustcall
uu_pr::get_line_for_printing
          (undefined4 *param_1,long param_2,long *param_3,undefined8 param_4,long param_5,
          long param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  code *local_150;
  undefined8 **local_148;
  code *local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 *puStack_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 *local_108;
  undefined8 local_f8;
  code *pcStack_f0;
  undefined8 *local_e8;
  code *local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 *local_60;
  long *local_58;
  undefined4 *local_50;
  undefined local_48 [24];
  
  local_c0 = 0;
  local_b8 = 1;
  local_b0 = 0;
                    /* try { // try from 002c8260 to 002c8272 has its CatchHandler @ 002c8550 */
  local_c8 = param_4;
  get_formatted_line_number(local_48,param_2,param_3[4],param_5);
  lVar7 = *param_3;
                    /* try { // try from 002c828c to 002c8305 has its CatchHandler @ 002c8555 */
  core::result::Result<T,E>::unwrap
            ((ulong)(lVar7 == -0x8000000000000000),param_3 + (lVar7 == -0x8000000000000000));
  pcStack_f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_e8 = &local_138;
  local_e0 = _<&T_as_core::fmt::Display>::fmt;
  local_168 = (long *)&DAT_0016bf10;
  uStack_160 = (code *)0x2;
  local_148 = (undefined8 **)0x0;
  puStack_158 = &local_f8;
  local_150 = (code *)0x2;
  local_138 = param_3 + (lVar7 == -0x8000000000000000);
  local_f8 = local_48;
  core::option::Option<T>::map_or_else(&local_90,&local_168);
  puVar2 = local_80;
  local_118 = local_90;
  uStack_114 = uStack_8c;
  uStack_110 = uStack_88;
  uStack_10c = uStack_84;
  local_108 = local_80;
  local_a8 = param_2 + 0xa8;
  lVar7 = core::iter::traits::iterator::Iterator::fold
                    (CONCAT44(uStack_84,uStack_88),CONCAT44(uStack_84,uStack_88) + (long)local_80);
  local_a0 = lVar7 * 7 + (long)puVar2;
  local_98 = (undefined8 *)(param_2 + 0xc0);
  if (*(char *)(param_2 + 0x143) != '\0') {
    local_98 = &local_c0;
  }
  if (param_5 + 1 == param_8) {
    local_98 = &local_c0;
  }
  local_60 = &local_c8;
  local_58 = &local_a0;
  local_50 = &local_118;
  if (param_6 == 0) {
    puStack_158 = local_80;
    local_168._0_4_ = local_90;
    local_168._4_4_ = uStack_8c;
    uStack_160._0_4_ = uStack_88;
    uStack_160._4_4_ = uStack_84;
    uVar3 = (undefined4)local_168;
    uVar4 = local_168._4_4_;
    uVar5 = (undefined4)uStack_160;
    uVar6 = uStack_160._4_4_;
  }
  else {
                    /* try { // try from 002c83c2 to 002c83d1 has its CatchHandler @ 002c8520 */
    get_line_for_printing::___closure__(&local_168,&local_60,param_7);
    puStack_128 = puStack_158;
    local_f8 = uStack_160;
    uVar1 = local_f8;
    pcStack_f0 = (code *)puStack_158;
    puStack_158 = local_108;
    uVar3 = local_118;
    uVar4 = uStack_114;
    uVar5 = uStack_110;
    uVar6 = uStack_10c;
    if (local_168 != (long *)0x8000000000000000) {
      local_f8._0_4_ = SUB84(uStack_160,0);
      local_f8._4_4_ = (undefined4)((ulong)uStack_160 >> 0x20);
      uStack_130 = (undefined4)local_f8;
      uStack_12c = local_f8._4_4_;
      local_138 = local_168;
      local_f8 = (undefined *)uVar1;
      local_168._0_4_ = local_118;
      local_168._4_4_ = uStack_114;
      uStack_160._0_4_ = uStack_110;
      uStack_160._4_4_ = uStack_10c;
                    /* try { // try from 002c8411 to 002c8418 has its CatchHandler @ 002c851e */
      core::ptr::drop_in_place<alloc::string::String>(&local_168);
      goto LAB_002c8447;
    }
  }
  uStack_160._4_4_ = uVar6;
  uStack_160._0_4_ = uVar5;
  local_168._4_4_ = uVar4;
  local_168._0_4_ = uVar3;
  puStack_128 = puStack_158;
  local_138 = (long *)CONCAT44(local_168._4_4_,(undefined4)local_168);
  uStack_130 = (undefined4)uStack_160;
  uStack_12c = uStack_160._4_4_;
LAB_002c8447:
  local_168 = &local_a8;
  uStack_160 = _<&T_as_core::fmt::Display>::fmt;
  puStack_158 = &local_138;
  local_150 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_148 = &local_98;
  local_140 = _<&T_as_core::fmt::Display>::fmt;
  local_f8 = &DAT_00175660;
  pcStack_f0 = (code *)0x3;
  local_d8 = 0;
  local_e0 = (code *)0x3;
                    /* try { // try from 002c84bf to 002c84d0 has its CatchHandler @ 002c8541 */
  local_e8 = &local_168;
  core::option::Option<T>::map_or_else(&local_78,&local_f8);
                    /* try { // try from 002c84d1 to 002c84da has its CatchHandler @ 002c852f */
  core::ptr::drop_in_place<alloc::string::String>(&local_138);
  *(undefined8 *)(param_1 + 4) = local_68;
  *param_1 = local_78;
  param_1[1] = uStack_74;
  param_1[2] = uStack_70;
  param_1[3] = uStack_6c;
                    /* try { // try from 002c84f2 to 002c84fe has its CatchHandler @ 002c8550 */
  core::ptr::drop_in_place<alloc::string::String>(local_48);
  core::ptr::drop_in_place<alloc::string::String>(&local_c0);
  return;
}