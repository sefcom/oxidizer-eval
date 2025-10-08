undefined  [16] _ZN7uu_tail6uumain6uumain17h4f2c457a173cc598E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
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
  undefined8 local_88;
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
  undefined8 local_18;
  
  _ZN7uu_tail4args10parse_args17h43d18e920560b20aE(&local_f8,param_1,param_2);
  auVar3._8_8_ = local_e8;
  auVar3._0_8_ = uStack_f0;
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
    local_88 = local_e8;
                    /* try { // try from 0018be60 to 0018bf4a has its CatchHandler @ 0018bf8d */
    (*(code *)PTR__ZN7uu_tail4args8Settings14check_warnings17h0e1cfe5e0e5b7f3fE_0027d370)(&local_98)
    ;
    cVar1 = (*(code *)PTR__ZN7uu_tail4args8Settings6verify17hc5274fc1768a90afE_0027d378)(&local_98);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        local_48 = 0;
        local_40 = 
        "-cannot follow /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: "
        ;
        local_38 = 1;
        local_30 = 1;
        local_a8 = &local_48;
        local_a0 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0027d380
        ;
        local_f8 = &DAT_00271ae0;
        uStack_f0 = 2;
        uStack_d8 = 0;
        local_e8 = &local_a8;
        local_e0 = 1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h42203edf7c781717E(local_28,&local_f8);
        local_e0 = CONCAT44(local_e0._4_4_,1);
        local_e8 = (undefined8 **)local_18;
        uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h91ea36abbec1b09eE(&local_f8);
      }
      else {
        uVar2 = 0;
      }
      _ZN4core3ptr44drop_in_place_LT_uu_tail__args__Settings_GT_17h678d2e5b8582bfdcE(&local_98);
      auVar4._8_8_ = &
                     PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h01eabec6827e8e63E_00271b20
      ;
      auVar4._0_8_ = uVar2;
      return auVar4;
    }
    auVar3 = (*(code *)PTR__ZN7uu_tail7uu_tail17hb4d0bd57fdc397eeE_0027d388)(&local_98);
    _ZN4core3ptr44drop_in_place_LT_uu_tail__args__Settings_GT_17h678d2e5b8582bfdcE(&local_98);
  }
  return auVar3;
}