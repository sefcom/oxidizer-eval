void __rustcall uu_rm::prompt_descend(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_70;
  code *local_68;
  long local_60;
  undefined local_58 [16];
  undefined8 local_48;
  undefined local_40;
  undefined1 *local_38;
  
  local_58 = uucore::util_name();
  local_68 = _<&T_as_core::fmt::Display>::fmt;
  local_a0 = (undefined **)&DAT_00227d88;
  local_98 = 2;
  uStack_80 = 0;
  local_88 = 1;
  local_90 = &local_70;
  local_70 = (undefined8 *)local_58;
  std::io::stdio::_eprint(&local_a0);
  local_58._0_8_ = 1;
  local_40 = 1;
  local_68 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_a0 = &PTR_DAT_00228010;
  local_98 = 2;
  uStack_80 = 0;
  local_88 = 1;
  local_90 = &local_70;
  local_70 = (undefined8 *)local_58;
  local_58._8_8_ = param_1;
  local_48 = param_2;
  std::io::stdio::_eprint(&local_a0);
  local_a0 = &PTR_DAT_00227f20;
  local_98 = 1;
  local_90 = (undefined8 **)0x8;
  local_88 = 0;
  uStack_80 = 0;
  std::io::stdio::_eprint(&local_a0);
  local_38 = std::io::stdio::stderr::INSTANCE;
  local_60 = _<std::io::stdio::Stderr_as_std::io::Write>::flush(&local_38);
  if (local_60 == 0) {
    uucore::read_yes();
    return;
  }
                    /* try { // try from 001b97f2 to 001b9893 has its CatchHandler @ 001b9894 */
  local_58 = uucore::util_name();
  local_68 = _<&T_as_core::fmt::Display>::fmt;
  local_a0 = (undefined **)&DAT_00227d88;
  local_98 = 2;
  uStack_80 = 0;
  local_88 = 1;
  local_90 = &local_70;
  local_70 = (undefined8 *)local_58;
  std::io::stdio::_eprint(&local_a0);
  local_58._0_8_ = &local_60;
  local_58._8_8_ = _<std::io::error::Error_as_core::fmt::Display>::fmt;
  local_a0 = (undefined **)&DAT_00227f30;
  local_98 = 2;
  uStack_80 = 0;
  local_88 = 1;
  local_90 = (undefined8 **)local_58;
  std::io::stdio::_eprint(&local_a0);
  uVar1 = std::process::exit(1);
                    /* catch() { ... } // from try @ 001b97f2 with catch @ 001b9894 */
                    /* try { // try from 001b9897 to 001b98a0 has its CatchHandler @ 001b98a9 */
  core::ptr::drop_in_place<std::io::error::Error>(&local_60);
  _Unwind_Resume(uVar1);
  return;
}