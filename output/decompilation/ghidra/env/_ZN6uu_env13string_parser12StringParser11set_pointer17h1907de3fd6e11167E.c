void _ZN6uu_env13string_parser12StringParser11set_pointer17h1907de3fd6e11167E
               (undefined8 *param_1,ulong param_2)

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
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17ha4016ee41c394a20E
              (local_28,*param_1,param_1[1],param_2);
    param_1[2] = local_18;
    param_1[3] = uStack_10;
    return;
  }
  local_58 = &PTR_s_mid_>_len_00248e80;
  local_50 = 1;
  local_48 = 8;
  local_40 = 0;
  uStack_38 = 0;
                    /* WARNING: Subroutine does not return */
  _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E
            (&local_58,&PTR_s_src_uu_env_src_string_parser_rs_00248f20);
}