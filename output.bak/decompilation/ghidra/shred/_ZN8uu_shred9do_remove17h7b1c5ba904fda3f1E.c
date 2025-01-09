long __rustcall
uu_shred::do_remove(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   uint param_5,char param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined local_80 [16];
  undefined8 local_70;
  undefined local_68;
  undefined8 *local_60;
  code *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (param_5 != 0) {
    local_50 = param_2;
    local_80 = uucore::util_name();
    local_c8 = (undefined8 *)local_80;
    uStack_c0 = _<&T_as_core::fmt::Display>::fmt;
    local_b0 = &DAT_00238698;
    local_a8 = 2;
    local_90 = 0;
    local_98 = 1;
    local_a0 = (undefined8 **)&local_c8;
    std::io::stdio::_eprint(&local_b0);
    local_80._0_8_ = 0;
    local_68 = 0;
    local_c8 = (undefined8 *)local_80;
    uStack_c0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_b0 = &DAT_00238928;
    local_a8 = 2;
    local_90 = 0;
    local_98 = 1;
    local_a0 = (undefined8 **)&local_c8;
    local_80._8_8_ = param_3;
    local_70 = param_4;
    std::io::stdio::_eprint(&local_b0);
    param_2 = local_50;
  }
  if (param_6 == '\x01') {
    std::path::Path::with_file_name(&local_c8,param_1,param_2,param_3,param_4);
  }
  else {
    wipe_name(&local_c8,param_1,param_2,param_5 & 0xff,param_6);
  }
  puVar1 = local_c8;
  if (local_c8 != (undefined8 *)0x8000000000000000) {
    local_38 = local_b8;
    local_48 = (undefined4)local_c8;
    uStack_44 = local_c8._4_4_;
    uStack_40 = (undefined4)uStack_c0;
    uStack_3c = uStack_c0._4_4_;
    lVar2 = std::fs::remove_file(&local_48);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  puVar3 = puVar1;
  if ((char)param_5 != '\0') {
                    /* try { // try from 001be137 to 001be1f8 has its CatchHandler @ 001be223 */
    local_80 = uucore::util_name();
    local_58 = _<&T_as_core::fmt::Display>::fmt;
    local_b0 = &DAT_00238698;
    local_a8 = 2;
    local_90 = 0;
    local_98 = 1;
    local_a0 = &local_60;
    local_60 = (undefined8 *)local_80;
    std::io::stdio::_eprint(&local_b0);
    local_80._0_8_ = 0;
    local_68 = 0;
    local_58 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_b0 = &DAT_00238948;
    local_a8 = 2;
    local_90 = 0;
    local_98 = 1;
    local_a0 = &local_60;
    local_80._8_8_ = param_3;
    local_70 = param_4;
    local_60 = (undefined8 *)local_80;
    std::io::stdio::_eprint(&local_b0);
    puVar3 = local_c8;
  }
  if ((puVar1 == (undefined8 *)0x8000000000000000) && (puVar3 != (undefined8 *)0x8000000000000000))
  {
    core::ptr::drop_in_place<std::path::PathBuf>(&local_c8);
  }
  return 0;
}