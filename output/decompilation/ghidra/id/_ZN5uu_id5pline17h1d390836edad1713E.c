void _ZN5uu_id5pline17h1d390836edad1713E(ulong param_1,ulong param_2)

{
  uint uVar1;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  long local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  long local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  long local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 **local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_110;
  long local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  long local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined local_a0 [4];
  undefined local_9c [4];
  undefined8 *local_98;
  code *local_90;
  undefined *local_88;
  code *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  long *local_58;
  code *local_50;
  long *local_48;
  code *local_40;
  long *local_38;
  code *local_30;
  
  if ((param_1 & 1) == 0) {
    uVar1 = (*(code *)PTR__ZN6uucore8features7process6getuid17h408babfb7f2600cdE_001ef890)();
    param_2 = (ulong)uVar1;
  }
  (*(code *)
    PTR__ZN98__LT_uucore__features__entries__Passwd_u20_as_u20_uucore__features__entries__Locate_LT_u32_GT__GT_6locate17h5d0bb482984d9c00E_001ef8c8
  )(&local_98,param_2);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h5bb4bfd2c71233d9E(&local_118,&local_98);
  local_1a0 = local_b0;
  uStack_19c = uStack_ac;
  uStack_198 = uStack_a8;
  uStack_194 = uStack_a4;
  local_1a8 = local_b8;
  if (local_100 == -0x8000000000000000) {
    local_188 = 1;
    uStack_180 = 0;
    local_190 = 0;
  }
  else {
    local_188 = CONCAT44(uStack_f4,local_f8);
    uStack_180 = CONCAT44(uStack_ec,uStack_f0);
    local_190 = local_100;
  }
  if (local_d0 == -0x8000000000000000) {
    local_170 = 1;
    uStack_168 = 0;
    local_d0 = 0;
  }
  else {
    local_170 = CONCAT44(uStack_c4,local_c8);
    uStack_168 = CONCAT44(uStack_bc,uStack_c0);
  }
  local_78 = local_a0;
  local_68 = local_9c;
  if (local_e8 == -0x8000000000000000) {
    local_158 = 1;
    uStack_150 = 0;
    local_e8 = 0;
  }
  else {
    local_158 = CONCAT44(uStack_dc,local_e0);
    uStack_150 = CONCAT44(uStack_d4,uStack_d8);
  }
  local_90 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_80 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_70 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_001ef908
  ;
  local_60 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_001ef908
  ;
  local_58 = &local_190;
  local_50 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_48 = &local_178;
  local_40 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_38 = &local_160;
  local_30 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_148 = &DAT_001e8e30;
  local_140 = 8;
  local_128 = 0;
  local_130 = 7;
                    /* try { // try from 0015dd6c to 0015dd76 has its CatchHandler @ 0015ddd4 */
  local_178 = local_d0;
  local_160 = local_e8;
  local_138 = &local_98;
  local_98 = &local_118;
  local_88 = (undefined *)&local_1a8;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ef8c0)(&local_148);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h084553603f2ff391E(local_160,local_158);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h084553603f2ff391E(local_178,local_170);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h084553603f2ff391E(local_190,local_188);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h084553603f2ff391E
            (local_1a8,CONCAT44(uStack_19c,local_1a0));
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h084553603f2ff391E(local_118,local_110);
  return;
}