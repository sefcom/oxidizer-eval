void _ZN7uu_more5Pager11draw_prompt17hc5b983e1ff1da72eE
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 uVar7;
  double dVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined *local_108;
  undefined *local_100;
  undefined8 *local_f8;
  code *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined **local_b0;
  code *local_a8;
  undefined8 local_a0;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48 [6];
  
  lVar1 = *(long *)(param_1 + 0x70);
  local_50 = param_2;
  if (param_3 == lVar1) {
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    uStack_b8 = (code *)puVar2;
    local_c0 = (undefined **)&DAT_00000001;
    if (puVar2 != (undefined8 *)0x0) {
      uStack_b8 = *(code **)(param_1 + 0x68);
      local_c0 = (undefined **)puVar2;
    }
    local_d8 = &local_c0;
    uStack_d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hadf97448b344c082E;
    local_108 = &DAT_00225360;
    local_100 = (undefined *)0x1;
    local_f8 = &local_d8;
  }
  else {
    auVar9._8_4_ = (int)((ulong)param_3 >> 0x20);
    auVar9._0_8_ = param_3;
    auVar9._12_4_ = DAT_0011dea0._4_4_;
    auVar10._8_4_ = (int)((ulong)lVar1 >> 0x20);
    auVar10._0_8_ = lVar1;
    auVar10._12_4_ = DAT_0011dea0._4_4_;
    dVar6 = (double)(*(code *)PTR_round_0022d520)
                              (SUB84((((auVar9._8_8_ - _UNK_0011de48) +
                                      ((double)CONCAT44((undefined4)DAT_0011dea0,(int)param_3) -
                                      _s__0011de40)) /
                                     ((auVar10._8_8_ - _UNK_0011de48) +
                                     ((double)CONCAT44((undefined4)DAT_0011dea0,(int)lVar1) -
                                     _s__0011de40))) * _s__0011da20,0));
    dVar8 = 0.0;
    if (0.0 <= dVar6) {
      dVar8 = dVar6;
    }
    uVar5 = SUB84(_s__0011daa8,0);
    uVar7 = (undefined4)((ulong)_s__0011daa8 >> 0x20);
    if (dVar8 <= _s__0011daa8) {
      uVar5 = SUB84(dVar8,0);
      uVar7 = (undefined4)((ulong)dVar8 >> 0x20);
    }
    local_d8 = (undefined8 *)CONCAT62(local_d8._2_6_,(short)(int)(double)CONCAT44(uVar7,uVar5));
    local_c0 = (undefined **)&local_d8;
    uStack_b8 = (code *)
                PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_0022d2e0
    ;
    local_108 = &DAT_00225370;
    local_100 = (undefined *)0x2;
    local_f8 = &local_c0;
  }
  local_e8 = (undefined *)0x0;
  local_f0 = (code *)0x1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hc1ec3d5ca74f474dE(local_48,&local_108);
  local_d8 = (undefined8 *)local_48;
  uStack_d0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_108 = &DAT_00225390;
  local_100 = (undefined *)0x2;
  local_e8 = (undefined *)0x0;
  local_f0 = (code *)0x1;
                    /* try { // try from 0017b513 to 0017b525 has its CatchHandler @ 0017b79a */
  local_f8 = &local_d8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hc1ec3d5ca74f474dE(&local_c0,&local_108);
  local_68 = (undefined4)local_c0;
  uStack_64 = local_c0._4_4_;
  uStack_60 = (undefined4)uStack_b8;
  uStack_5c = uStack_b8._4_4_;
  local_58 = local_b0;
  local_f8 = &local_c0;
  if (*(char *)(param_1 + 0x80) == '\0') {
    if (param_4 == 0x110000) {
      local_78 = local_b0;
      local_88 = (undefined4)local_c0;
      uStack_84 = local_c0._4_4_;
      uStack_80 = (undefined4)uStack_b8;
      uStack_7c = uStack_b8._4_4_;
      bVar3 = false;
      goto LAB_0017b6cf;
    }
    local_c0 = (undefined **)&local_68;
    uStack_b8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_b0 = &PTR_DAT_00225430;
    local_a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hadf97448b344c082E;
    local_108 = &DAT_0011f780;
    local_100 = (undefined *)0x2;
    local_e8 = (undefined *)0x0;
    local_f0 = (code *)0x2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hc1ec3d5ca74f474dE(&local_d8,&local_108);
LAB_0017b6b2:
    local_88 = (undefined4)local_d8;
    uStack_84 = local_d8._4_4_;
    uStack_80 = (undefined4)uStack_d0;
    uStack_7c = uStack_d0._4_4_;
    local_b0 = (undefined **)local_c8;
  }
  else {
    if (param_4 != 0x110000) {
      local_c0 = (undefined **)&local_68;
      uStack_b8 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_b0 = (undefined **)&local_8c;
      local_a8 = (code *)
                 PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_0022d528
      ;
      local_108 = &DAT_002253b0;
      local_100 = (undefined *)0x3;
      local_e8 = (undefined *)0x0;
      local_f0 = (code *)0x2;
      local_8c = param_4;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hc1ec3d5ca74f474dE(&local_d8,&local_108);
      goto LAB_0017b6b2;
    }
    local_d8 = (undefined8 *)&local_68;
    uStack_d0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_108 = &DAT_002253e0;
    local_100 = (undefined *)0x2;
    local_e8 = (undefined *)0x0;
    local_f0 = (code *)0x1;
                    /* try { // try from 0017b593 to 0017b6b1 has its CatchHandler @ 0017b795 */
    local_f8 = &local_d8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hc1ec3d5ca74f474dE(&local_c0,&local_108);
    local_88 = (undefined4)local_c0;
    uStack_84 = local_c0._4_4_;
    uStack_80 = (undefined4)uStack_b8;
    uStack_7c = uStack_b8._4_4_;
  }
  bVar3 = true;
  local_78 = local_b0;
LAB_0017b6cf:
  local_108 = &DAT_0011f8c1;
  local_100 = 
  PTR__ZN84__LT_crossterm__style__types__attribute__Attribute_u20_as_u20_core__fmt__Display_GT_3fmt17h487a2075555157a2E_0022d530
  ;
  local_f8 = (undefined8 *)&local_88;
  local_f0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_e8 = &DAT_0011f8c2;
  local_e0 = 
  PTR__ZN84__LT_crossterm__style__types__attribute__Attribute_u20_as_u20_core__fmt__Display_GT_3fmt17h487a2075555157a2E_0022d530
  ;
  local_c0 = &PTR_s__00225400;
  uStack_b8 = (code *)0x3;
  local_a0 = 0;
  local_a8 = (code *)0x3;
                    /* try { // try from 0017b735 to 0017b756 has its CatchHandler @ 0017b7b2 */
  local_b0 = &local_108;
  uVar4 = (*(code *)
            PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_fmt17h3907d576e608aa2aE_0022d538
          )(local_50,&local_c0);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h3a901ae51f259b59E
            (uVar4,&PTR_s_src_uu_more_src_more_rs_00225440);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17habcac018958bfd8aE(&local_88);
  if (bVar3) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17habcac018958bfd8aE(&local_68);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17habcac018958bfd8aE(local_48);
  return;
}