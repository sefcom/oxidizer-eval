void __rustcall uu_cp::show_error_if_needed(long *param_1)

{
  ulong uVar1;
  undefined local_68 [16];
  long *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_20;
  code *local_18;
  
  uVar1 = 4;
  if (*param_1 - 2U < 0xb) {
    uVar1 = *param_1 - 2U;
  }
  if ((uVar1 != 3) && (uVar1 != 6)) {
    local_58 = param_1;
    local_68 = uucore::util_name();
    local_18 = _<&T_as_core::fmt::Display>::fmt;
    local_50 = &DAT_002b5cc8;
    local_48 = 2;
    local_30 = 0;
    local_40 = &local_20;
    local_38 = 1;
    local_20 = local_68;
    std::io::stdio::_eprint(&local_50);
    local_68._0_8_ = &local_58;
    local_68._8_8_ = _<&T_as_core::fmt::Display>::fmt;
    local_50 = &DAT_002b5ce8;
    local_48 = 2;
    local_30 = 0;
    local_38 = 1;
    local_40 = (undefined **)local_68;
    std::io::stdio::_eprint(&local_50);
  }
  return;
}