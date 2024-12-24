int * __rustcall
uu_env::string_parser::StringParser::peek_char_at_pointer
          (int *param_1,undefined8 *param_2,ulong param_3)

{
  undefined uVar1;
  int iVar2;
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_30 [16];
  undefined *local_20;
  long local_18;
  
  if (param_3 <= (ulong)param_2[1]) {
    core::slice::_<impl[T]>::split_at_unchecked(local_30,*param_2);
    if (local_18 == 0) {
      *(undefined8 *)param_1 = param_2[4];
      uVar1 = 0;
    }
    else {
      iVar2 = native_int_str::get_char_from_native_int(*local_20);
      if (iVar2 == 0x110000) {
        *param_1 = 0xfffd;
      }
      else {
        *param_1 = iVar2;
      }
      uVar1 = 2;
    }
    *(undefined *)(param_1 + 2) = uVar1;
    return param_1;
  }
  local_60 = &PTR_s_mid_>_len_002496c0;
  local_58 = 1;
  local_50 = 8;
  local_48 = 0;
  uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&local_60,&PTR_s_src_uu_env_src_string_parser_rs_002496d0);
}