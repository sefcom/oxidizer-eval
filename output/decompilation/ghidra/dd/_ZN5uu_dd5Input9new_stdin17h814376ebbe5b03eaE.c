/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * __rustcall uu_dd::Input::new_stdin(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined auVar4 [16];
  undefined8 local_e8;
  undefined8 *local_e0;
  code *local_d8;
  undefined local_d0 [16];
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_88;
  
  Source::stdin_as_file();
  local_e8 = 1;
                    /* try { // try from 001d6ab2 to 001d6bca has its CatchHandler @ 001d6bf7 */
  std::fs::File::metadata(&local_c0,(long)&local_e8 + 4);
  uVar1 = local_b8;
  if ((int)local_c0 != 2) {
    if (((local_88 & 0xf000) == 0x8000) && (*(char *)(param_2 + 0x42) != '\0')) {
      local_d0 = uucore::util_name();
      local_e0 = (undefined8 *)local_d0;
      local_d8 = _<&T_as_core::fmt::Display>::fmt;
      local_c0 = (undefined **)&DAT_00261008;
      local_b8 = 2;
      uStack_a0 = 0;
      local_b0 = &local_e0;
      local_a8 = 1;
      std::io::stdio::_eprint(&local_c0);
      local_c0 = &PTR_s_standard_input__not_a_directory_00261060;
      local_b8 = 1;
      local_b0 = (undefined8 **)0x8;
      local_a8 = 0;
      uStack_a0 = 0;
      std::io::stdio::_eprint(&local_c0);
      auVar4 = uucore::mods::error::
               _<impl_core::convert::From<i32>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
               ::from(1);
      goto LAB_001d6b91;
    }
    uVar2 = _DAT_00119580;
    uVar3 = _UNK_00119584;
    if (*(long *)(param_2 + 0x80) == 0) {
LAB_001d6be6:
      param_1[1] = CONCAT44(uVar3,uVar2);
      param_1[2] = param_2;
      *param_1 = 0;
      return param_1;
    }
    auVar4 = Source::skip(&local_e8);
    uVar1 = auVar4._8_8_;
    if (auVar4._0_8_ == 0) {
      uVar2 = (int)local_e8;
      uVar3 = (int)((ulong)local_e8 >> 0x20);
      goto LAB_001d6be6;
    }
  }
  auVar4 = uucore::mods::error::
           _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
           ::from(uVar1);
LAB_001d6b91:
  *(undefined (*) [16])(param_1 + 1) = auVar4;
  *param_1 = 1;
  core::ptr::drop_in_place<uu_dd::Source>(local_e8._4_4_);
  return param_1;
}