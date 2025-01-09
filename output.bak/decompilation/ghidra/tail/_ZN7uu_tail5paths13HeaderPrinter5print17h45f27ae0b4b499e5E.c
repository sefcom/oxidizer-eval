void __rustcall
uu_tail::paths::HeaderPrinter::print(char *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  ulong local_60;
  undefined8 *local_58;
  code *local_50;
  undefined *local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = (undefined *)&local_78;
  if (*param_1 != '\0') {
    local_68 = (char *)0x1;
    if ((ulong)(byte)param_1[1] == 0) {
      local_68 = "\n";
    }
    local_60 = (ulong)(byte)param_1[1] ^ 1;
    local_58 = &local_68;
    local_50 = _<&T_as_core::fmt::Display>::fmt;
    local_40 = _<&T_as_core::fmt::Display>::fmt;
    local_38 = &DAT_002bc6e8;
    local_30 = 3;
    local_18 = 0;
    local_28 = &local_58;
    local_20 = 2;
    local_78 = param_2;
    local_70 = param_3;
    std::io::stdio::_print(&local_38);
    param_1[1] = '\0';
  }
  return;
}