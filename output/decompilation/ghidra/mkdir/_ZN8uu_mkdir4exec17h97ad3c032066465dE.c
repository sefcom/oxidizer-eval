undefined8 __rustcall
uu_mkdir::exec(undefined4 *param_1,undefined param_2,undefined4 param_3,undefined param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined local_108 [16];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 **local_e8;
  undefined local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_98;
  code *local_90;
  undefined *local_88;
  code *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_78 = *param_1;
  uStack_74 = param_1[1];
  uStack_70 = param_1[2];
  uStack_6c = param_1[3];
  local_68 = param_1[4];
  uStack_64 = param_1[5];
  uStack_60 = param_1[6];
  uStack_5c = param_1[7];
  local_58 = param_1[8];
  uStack_54 = param_1[9];
  uStack_50 = param_1[10];
  uStack_4c = param_1[0xb];
  local_48 = param_1[0xc];
  uStack_44 = param_1[0xd];
  uStack_40 = param_1[0xe];
  uStack_3c = param_1[0xf];
  lVar2 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
          ::next(&local_78);
  if (lVar2 != 0) {
    do {
      std::sys::os_str::bytes::Slice::to_owned
                (&local_c8,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
      local_e8 = local_b8;
      local_f8 = (undefined4)local_c8;
      uStack_f4 = local_c8._4_4_;
      uStack_f0 = (undefined4)uStack_c0;
      uStack_ec = uStack_c0._4_4_;
                    /* try { // try from 001b2c83 to 001b2c8e has its CatchHandler @ 001b2d4c */
      auVar3 = mkdir(uStack_c0,local_b8,param_2,param_3,param_4);
      if (auVar3._0_8_ != 0) {
                    /* try { // try from 001b2c9d to 001b2d24 has its CatchHandler @ 001b2d51 */
        local_108 = auVar3;
        uVar1 = (**(code **)(auVar3._8_8_ + 0x60))(auVar3._0_8_);
        uucore::mods::error::set_exit_code(uVar1);
        auVar3 = uucore::util_name();
        local_98 = (undefined8 *)local_d8;
        local_90 = _<&T_as_core::fmt::Display>::fmt;
        local_80 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_c8 = &DAT_00220510;
        uStack_c0 = 3;
        local_a8 = 0;
        local_b8 = &local_98;
        local_b0 = 2;
        local_88 = local_108;
        local_d8 = auVar3;
        std::io::stdio::_eprint(&local_c8);
                    /* try { // try from 001b2d2e to 001b2d32 has its CatchHandler @ 001b2d4c */
        core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                  (local_108._0_8_,local_108._8_8_);
      }
      core::ptr::drop_in_place<std::path::PathBuf>(&local_f8);
      lVar2 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
              ::next(&local_78);
    } while (lVar2 != 0);
  }
  return 0;
}