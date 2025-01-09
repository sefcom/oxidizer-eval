void __rustcall uu_env::debug_print_args(long param_1,long param_2)

{
  long lVar1;
  undefined auVar2 [16];
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 *local_70;
  code *local_68;
  undefined8 *local_60;
  code *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined local_38;
  
  local_b8 = &PTR_DAT_002489e8;
  local_b0 = 1;
  local_a8 = (undefined8 **)0x8;
  local_a0 = 0;
  uStack_98 = 0;
  std::io::stdio::_eprint(&local_b8);
  local_80 = param_1 + param_2 * 0x18;
  local_78 = 0;
  local_88 = param_1;
  auVar2 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
           ::next(&local_88);
  if (auVar2._8_8_ != 0) {
    do {
      lVar1 = auVar2._8_8_;
      local_c0 = auVar2._0_8_;
      local_48 = *(undefined4 *)(lVar1 + 8);
      uStack_44 = *(undefined4 *)(lVar1 + 0xc);
      uStack_40 = *(undefined4 *)(lVar1 + 0x10);
      uStack_3c = *(undefined4 *)(lVar1 + 0x14);
      local_50 = 1;
      local_38 = 1;
      local_70 = &local_c0;
      local_68 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
      local_60 = &local_50;
      local_58 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_b8 = &PTR_DAT_002489f8;
      local_b0 = 3;
      uStack_98 = 0;
      local_a0 = 2;
      local_a8 = &local_70;
      std::io::stdio::_eprint(&local_b8);
      auVar2 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
               ::next(&local_88);
    } while (auVar2._8_8_ != 0);
  }
  return;
}