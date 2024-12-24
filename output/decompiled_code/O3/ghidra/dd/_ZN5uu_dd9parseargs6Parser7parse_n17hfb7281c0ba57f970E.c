void __rustcall
uu_dd::parseargs::Parser::parse_n(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long local_48;
  ulong local_40;
  long local_38;
  long lStack_30;
  
  parse_bytes_with_opt_multiplier(&local_48);
  if (local_48 == 0xe) {
    bVar1 = _<char_as_core::str::pattern::Pattern>::is_contained_in(param_2,param_3);
    param_1[2] = local_40;
    local_40 = (ulong)bVar1;
  }
  else {
    param_1[2] = local_38;
    param_1[3] = lStack_30;
  }
  param_1[1] = local_40;
  *param_1 = local_48;
  return;
}