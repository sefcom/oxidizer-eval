int * _ZN6uu_env13string_parser12StringParser20peek_char_at_pointer17h13f3254ae1b02ce7E
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
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17ha4016ee41c394a20E
              (local_30,*param_2);
    if (local_18 == 0) {
      *(undefined8 *)param_1 = param_2[4];
      uVar1 = 0;
    }
    else {
      iVar2 = _ZN6uu_env14native_int_str24get_char_from_native_int17hd9478fe3e880cfe1E(*local_20);
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
  local_60 = &PTR_s_mid_>_len_00248e80;
  local_58 = 1;
  local_50 = 8;
  local_48 = 0;
  uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
  _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E
            (&local_60,&PTR_s_src_uu_env_src_string_parser_rs_00248e90);
}