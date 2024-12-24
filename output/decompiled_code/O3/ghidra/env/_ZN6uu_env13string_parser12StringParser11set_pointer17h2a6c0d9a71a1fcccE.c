void __rustcall uu_env::string_parser::StringParser::set_pointer(undefined8 *param_1,ulong param_2)

{
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined local_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  
  param_1[4] = param_2;
  if (param_2 <= (ulong)param_1[1]) {
    core::slice::_<impl[T]>::split_at_unchecked(local_28,*param_1,param_1[1],param_2);
    param_1[2] = local_18;
    param_1[3] = uStack_10;
    return;
  }
  local_58 = &PTR_s_mid_>_len_002496c0;
  local_50 = 1;
  local_48 = 8;
  local_40 = 0;
  uStack_38 = 0;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&local_58,&PTR_s_src_uu_env_src_string_parser_rs_00249760);
}