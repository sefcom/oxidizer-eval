undefined8 __rustcall uu_ls::colors::StyleManager::is_current_style(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 8) == '\x02') {
    return 0;
  }
  uVar1 = _<lscolors::style::Style_as_core::cmp::PartialEq>::eq(param_1 + 8);
  return uVar1;
}