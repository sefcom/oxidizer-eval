undefined  [16] __rustcall uu_basenc::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  parse_cmd_args(&local_88,param_1,param_2);
  local_48 = CONCAT44(uStack_84,local_88);
  uStack_40 = CONCAT44(uStack_7c,uStack_80);
  local_38 = CONCAT44(uStack_74,local_78);
  auVar1._8_8_ = local_38;
  auVar1._0_8_ = uStack_40;
  if (local_48 != 2) {
    uStack_20 = local_60;
    uStack_1c = uStack_5c;
    uStack_30 = uStack_70;
    uStack_2c = uStack_6c;
    uStack_28 = uStack_68;
    uStack_24 = uStack_64;
                    /* try { // try from 0017c5dc to 0017c5eb has its CatchHandler @ 0017c67b */
    (*(code *)PTR_get_input_002544e8)(&local_88,&local_48);
    local_98 = CONCAT44(uStack_7c,uStack_80);
    local_90 = CONCAT44(uStack_74,local_78);
    auVar1._8_8_ = local_90;
    auVar1._0_8_ = local_98;
    if (CONCAT44(uStack_84,local_88) == 0) {
      uStack_68 = uStack_28;
      uStack_64 = uStack_24;
      local_60 = uStack_20;
      uStack_5c = uStack_1c;
      local_78 = (undefined4)local_38;
      uStack_74 = local_38._4_4_;
      uStack_70 = uStack_30;
      uStack_6c = uStack_2c;
      local_88 = (undefined4)local_48;
      uStack_84 = local_48._4_4_;
      uStack_80 = (undefined4)uStack_40;
      uStack_7c = uStack_40._4_4_;
                    /* try { // try from 0017c631 to 0017c641 has its CatchHandler @ 0017c668 */
      auVar1 = uu_base32::base_common::handle_input(&local_98,local_58,&local_88);
      core::ptr::
      drop_in_place<alloc::boxed::Box<dyn_clap_builder::builder::value_parser::AnyValueParser>>
                (local_98,local_90);
    }
    else {
      core::ptr::drop_in_place<uu_base32::base_common::Config>(&local_48);
    }
  }
  return auVar1;
}