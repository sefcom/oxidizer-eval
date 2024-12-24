undefined  [16] __rustcall uu_base64::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uu_base32::base_common::parse_base_cmd_args
            (&local_78,param_1,param_2,
             "encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nThe data are encoded as described for the base64 alphabet in RFC 3548.\nWhen decoding, the input may contain newlines in addition\nto the bytes of the formal base64 alphabet. Use --ignore-garbage\nto attempt to recover from any other non-alphabet bytes in the\nencoded stream."
             ,0x177,"{} [OPTION]... [FILE]",0x15);
  local_40 = CONCAT44(uStack_74,local_78);
  uStack_38 = CONCAT44(uStack_6c,uStack_70);
  local_30 = CONCAT44(uStack_64,local_68);
  auVar1._8_8_ = local_30;
  auVar1._0_8_ = uStack_38;
  if (local_40 != 2) {
    uStack_18 = local_50;
    uStack_14 = uStack_4c;
    uStack_28 = uStack_60;
    uStack_24 = uStack_5c;
    uStack_20 = uStack_58;
    uStack_1c = uStack_54;
                    /* try { // try from 00174815 to 00174824 has its CatchHandler @ 001748b6 */
    (*(code *)PTR_get_input_0024eb28)(&local_78,&local_40);
    local_88 = CONCAT44(uStack_6c,uStack_70);
    local_80 = CONCAT44(uStack_64,local_68);
    auVar1._8_8_ = local_80;
    auVar1._0_8_ = local_88;
    if (CONCAT44(uStack_74,local_78) == 0) {
      uStack_58 = uStack_20;
      uStack_54 = uStack_1c;
      local_50 = uStack_18;
      uStack_4c = uStack_14;
      local_68 = (undefined4)local_30;
      uStack_64 = local_30._4_4_;
      uStack_60 = uStack_28;
      uStack_5c = uStack_24;
      local_78 = (undefined4)local_40;
      uStack_74 = local_40._4_4_;
      uStack_70 = (undefined4)uStack_38;
      uStack_6c = uStack_38._4_4_;
                    /* try { // try from 0017486b to 0017487b has its CatchHandler @ 001748a2 */
      auVar1 = uu_base32::base_common::handle_input(&local_88,0,&local_78);
      core::ptr::
      drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                (local_88,local_80);
    }
    else {
      core::ptr::drop_in_place<uu_base32::base_common::Config>(&local_40);
    }
  }
  return auVar1;
}