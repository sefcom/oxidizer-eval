void _ZN7uu_join4Spec5parse17hcfd2d4b38d6b0e96E(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined uVar4;
  undefined auVar5 [12];
  undefined8 *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined local_88;
  long local_80;
  long local_78;
  undefined **local_70;
  undefined **local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_40 [24];
  undefined4 local_28;
  
  local_78 = param_2 + param_3;
  local_80 = param_2;
  auVar5 = _ZN4core3str11validations15next_code_point17h0099d433804eecafE(&local_80);
  iVar1 = 0x110000;
  if ((auVar5 & (undefined  [12])0x1) != (undefined  [12])0x0) {
    iVar1 = auVar5._8_4_;
  }
  if (iVar1 == 0x30) {
    uVar2 = _ZN4core3str11validations15next_code_point17h0099d433804eecafE(&local_80);
    if ((uVar2 & 1) == 0) {
      *(undefined *)(param_1 + 1) = 0;
LAB_0016d2a9:
      uVar3 = 0;
      goto LAB_0016d28c;
    }
    goto LAB_0016d1bd;
  }
  if (iVar1 == 0x31) {
    uVar4 = 0;
    auVar5 = _ZN4core3str11validations15next_code_point17h0099d433804eecafE(&local_80);
    iVar1 = auVar5._8_4_;
    if ((auVar5 & (undefined  [12])0x1) == (undefined  [12])0x0) {
LAB_0016d1bd:
      local_70 = &PTR_DAT_001fe320;
      goto LAB_0016d229;
    }
LAB_0016d16e:
    if (iVar1 != 0x2e) goto LAB_0016d1bd;
    _ZN7uu_join18parse_field_number17h7876c58ca785f0e6E(&local_70,local_80,local_78 - local_80);
    if (local_70 == (undefined **)0x0) {
      *(undefined *)(param_1 + 1) = 1;
      *(undefined *)((long)param_1 + 9) = uVar4;
      param_1[2] = local_68;
      goto LAB_0016d2a9;
    }
    param_1[1] = local_70;
  }
  else {
    if (iVar1 == 0x32) {
      uVar4 = 1;
      auVar5 = _ZN4core3str11validations15next_code_point17h0099d433804eecafE(&local_80);
      iVar1 = auVar5._8_4_;
      if ((auVar5 & (undefined  [12])0x1) != (undefined  [12])0x0) goto LAB_0016d16e;
      goto LAB_0016d1bd;
    }
    local_70 = &PTR_DAT_001fe330;
LAB_0016d229:
    local_b0 = &local_a0;
    local_88 = 1;
    local_a0 = 0;
    local_68 = (undefined **)0x1;
    local_50 = 0;
    local_60 = &local_b0;
    local_58 = 1;
    local_a8 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00204f88
    ;
    local_98 = param_2;
    local_90 = param_3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h9a77d6fb89838746E(local_40,&local_70);
    local_28 = 1;
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6838e3ae00012226E(local_40);
    param_1[1] = uVar3;
    local_68 = &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h54a1587742d47b08E_001fe360
    ;
  }
  param_1[2] = local_68;
  uVar3 = 1;
LAB_0016d28c:
  *param_1 = uVar3;
  return;
}