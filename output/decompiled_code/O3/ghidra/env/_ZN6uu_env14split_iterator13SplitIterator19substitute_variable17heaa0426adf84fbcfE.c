/* WARNING: Type propagation algorithm not settling */

void __rustcall
uu_env::split_iterator::SplitIterator::substitute_variable(int *param_1,long param_2)

{
  int local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  undefined8 uStack_50;
  long local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_48[0] = param_2 + 0x18;
  variable_parser::VariableParser::parse_variable(&local_70,local_48);
  if (local_70 == 8) {
    local_38 = local_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    local_48[1] = 0x8000000000000000;
    std::env::var_os(&local_70,local_48 + 1);
    if (CONCAT44(iStack_6c,local_70) == -0x8000000000000000) {
      if (local_58 != 0) {
                    /* try { // try from 001d9913 to 001d994d has its CatchHandler @ 001d996c */
        string_expander::StringExpander::put_native_string(param_2,local_58,uStack_50);
      }
    }
    else {
      string_expander::StringExpander::put_string(param_2,&local_70);
    }
    *param_1 = 8;
    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&local_70);
  }
  else {
    *param_1 = local_70;
    param_1[1] = iStack_6c;
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_64,local_68);
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_5c,uStack_60);
    *(long *)(param_1 + 6) = local_58;
    *(undefined8 *)(param_1 + 8) = uStack_50;
  }
  return;
}