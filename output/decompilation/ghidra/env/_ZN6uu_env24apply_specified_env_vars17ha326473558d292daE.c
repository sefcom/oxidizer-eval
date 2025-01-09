void __rustcall uu_env::apply_specified_env_vars(long param_1)

{
  long lVar1;
  undefined8 *local_a0;
  code *local_98;
  long local_90;
  long local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined local_38;
  
  local_90 = *(long *)(param_1 + 0x38);
  local_88 = *(long *)(param_1 + 0x40) * 0x30 + local_90;
  lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_90);
  if (lVar1 != 0) {
    do {
      if (*(long *)(lVar1 + 0x10) == 0) {
        local_50 = uucore::util_name();
        local_98 = _<&T_as_core::fmt::Display>::fmt;
        local_80 = (undefined **)&DAT_00248c18;
        local_78 = 2;
        local_60 = 0;
        local_68 = 1;
        local_a0 = (undefined8 *)local_50;
        local_70 = &local_a0;
        std::io::stdio::_eprint(&local_80);
        local_50._8_8_ = *(undefined8 *)(lVar1 + 0x20);
        uStack_40 = *(undefined4 *)(lVar1 + 0x28);
        uStack_3c = *(undefined4 *)(lVar1 + 0x2c);
        local_50._0_8_ = 1;
        local_38 = 1;
        local_98 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_80 = &PTR_DAT_00248c38;
        local_78 = 2;
        local_60 = 0;
        local_68 = 1;
        local_a0 = (undefined8 *)local_50;
        local_70 = &local_a0;
        std::io::stdio::_eprint(&local_80);
      }
      else {
        std::env::set_var(lVar1,lVar1 + 0x18);
      }
      lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_90);
    } while (lVar1 != 0);
  }
  return;
}