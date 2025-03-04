undefined  [16] _ZN7uu_tail6uumain6uumain17h5c3c638d6b95c620E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined auVar2 [16];
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined8 **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined local_30;
  undefined local_28 [16];
  undefined **local_18;
  
  _ZN7uu_tail4args10parse_args17h21b79a77363e2b6aE(&local_f8,param_1,param_2);
  if (local_f8 != (undefined *)0x5) {
    local_50 = local_b0;
    local_60 = local_c0;
    uStack_5c = uStack_bc;
    uStack_58 = uStack_b8;
    uStack_54 = uStack_b4;
    local_70 = local_d0;
    uStack_6c = uStack_cc;
    uStack_68 = uStack_c8;
    uStack_64 = uStack_c4;
    local_80 = (undefined4)local_e0;
    uStack_7c = local_e0._4_4_;
    uStack_78 = (undefined4)uStack_d8;
    uStack_74 = uStack_d8._4_4_;
    local_98 = local_f8;
    local_90 = uStack_f0;
    local_88 = (undefined **)local_e8;
                    /* try { // try from 001a7760 to 001a783a has its CatchHandler @ 001a788d */
    (*(code *)PTR__ZN7uu_tail4args8Settings14check_warnings17hc95159a783f4a1c8E_002c2740)(&local_98)
    ;
    cVar1 = (*(code *)PTR__ZN7uu_tail4args8Settings6verify17h67589dab63f9aa61E_002c2748)(&local_98);
    if (cVar1 == '\x02') {
      uStack_f0 = 0;
    }
    else {
      if (cVar1 != '\x01') {
                    /* try { // try from 001a7861 to 001a786b has its CatchHandler @ 001a788d */
        auVar2 = (*(code *)PTR__ZN7uu_tail7uu_tail17h84841135fb1b0c3fE_002c2758)(&local_98);
        _ZN4core3ptr44drop_in_place_LT_uu_tail__args__Settings_GT_17h333061858f2bc617E(&local_98);
        return auVar2;
      }
      local_48 = 0;
      local_40 = "-cannot follow ";
      local_38 = 1;
      local_30 = 1;
      local_a8 = &local_48;
      local_a0 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_002c2750
      ;
      local_f8 = &DAT_002b85d0;
      uStack_f0 = 2;
      uStack_d8 = 0;
      local_e8 = &local_a8;
      local_e0 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h0da0019156620c79E(local_28,&local_f8);
      local_e0 = CONCAT44(local_e0._4_4_,1);
      local_e8 = (undefined8 **)local_18;
      uStack_f0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6de0ca5f93407dd6E(&local_f8);
    }
    _ZN4core3ptr44drop_in_place_LT_uu_tail__args__Settings_GT_17h333061858f2bc617E(&local_98);
    local_e8 = (undefined8 **)
               &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hd246b8b1e9b37d70E_002b8628
    ;
  }
  auVar2._8_8_ = local_e8;
  auVar2._0_8_ = uStack_f0;
  return auVar2;
}