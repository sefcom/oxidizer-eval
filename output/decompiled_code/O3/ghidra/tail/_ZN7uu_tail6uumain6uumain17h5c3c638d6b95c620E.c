undefined  [16] __rustcall uu_tail::uumain::uumain(undefined8 param_1,undefined8 param_2)

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
  
  args::parse_args(&local_f8,param_1,param_2);
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
    (*(code *)PTR_check_warnings_002c2740)(&local_98);
    cVar1 = (*(code *)PTR_verify_002c2748)(&local_98);
    if (cVar1 == '\x02') {
      uStack_f0 = 0;
    }
    else {
      if (cVar1 != '\x01') {
                    /* try { // try from 001a7861 to 001a786b has its CatchHandler @ 001a788d */
        auVar2 = (*(code *)PTR_uu_tail_002c2758)(&local_98);
        core::ptr::drop_in_place<uu_tail::args::Settings>(&local_98);
        return auVar2;
      }
      local_48 = 0;
      local_40 = "-cannot follow ";
      local_38 = 1;
      local_30 = 1;
      local_a8 = &local_48;
      local_a0 = PTR_fmt_002c2750;
      local_f8 = &DAT_002b85d0;
      uStack_f0 = 2;
      uStack_d8 = 0;
      local_e8 = &local_a8;
      local_e0 = 1;
      core::option::Option<T>::map_or_else(local_28,&local_f8);
      local_e0 = CONCAT44(local_e0._4_4_,1);
      local_e8 = (undefined8 **)local_18;
      uStack_f0 = ::alloc::boxed::Box<T>::new(&local_f8);
    }
    core::ptr::drop_in_place<uu_tail::args::Settings>(&local_98);
    local_e8 = (undefined8 **)&PTR_drop_in_place<uucore_mods_error_USimpleError>_002b8628;
  }
  auVar2._8_8_ = local_e8;
  auVar2._0_8_ = uStack_f0;
  return auVar2;
}