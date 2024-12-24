undefined  [16] __rustcall
uu_env::string_parser::StringParser::substring(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined local_50 [16];
  undefined8 local_40;
  ulong local_38;
  undefined local_30 [2] [16];
  
  uVar1 = *param_2;
  if ((ulong)param_1[1] < uVar1) {
    local_80 = &PTR_s_mid_>_len_002496c0;
    local_78 = 1;
    local_70 = 8;
    local_68 = 0;
    uStack_60 = 0;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&local_80,&PTR_s_src_uu_env_src_string_parser_rs_00249730);
  }
  core::slice::_<impl[T]>::split_at_unchecked(local_50,*param_1,param_1[1],uVar1);
  if (param_2[1] - uVar1 <= local_38) {
    core::slice::_<impl[T]>::split_at_unchecked(local_30,local_40);
    return local_30[0];
  }
  local_80 = &PTR_s_mid_>_len_002496c0;
  local_78 = 1;
  local_70 = 8;
  local_68 = 0;
  uStack_60 = 0;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&local_80,&PTR_s_src_uu_env_src_string_parser_rs_00249748);
}