void __rustcall uu_rmdir::remove_single(long *param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined local_98 [16];
  undefined *local_88;
  code *local_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((param_4 & 0x10000) != 0) {
    local_98 = uucore::util_name();
    local_68 = 1;
    local_50 = 1;
    local_80 = _<&T_as_core::fmt::Display>::fmt;
    local_78 = &local_68;
    local_70 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_48 = &DAT_0020dab8;
    local_40 = 3;
    local_28 = 0;
    local_38 = &local_88;
    local_30 = 2;
    local_88 = local_98;
    local_60 = param_2;
    local_58 = param_3;
    std::io::stdio::_print(&local_48);
  }
  lVar1 = std::fs::remove_dir(param_2,param_3);
  if (lVar1 != 0) {
    param_1[1] = param_2;
    param_1[2] = param_3;
  }
  *param_1 = lVar1;
  return;
}