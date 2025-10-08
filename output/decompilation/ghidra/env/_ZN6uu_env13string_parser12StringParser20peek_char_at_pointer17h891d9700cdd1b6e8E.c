int * _ZN6uu_env13string_parser12StringParser20peek_char_at_pointer17h891d9700cdd1b6e8E
                (int *param_1,undefined8 *param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_30 [16];
  undefined *local_20;
  long local_18;
  
  if (param_3 <= (ulong)param_2[1]) {
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17h4b20b73ec557817aE
              (local_30,*param_2);
    if (local_18 == 0) {
      *(undefined8 *)param_1 = param_2[4];
      *(undefined *)(param_1 + 2) = 0;
    }
    else {
      iVar2 = (*(code *)
                PTR__ZN6uu_env14native_int_str24get_char_from_native_int17h55c3dbad16c71881E_002192d0
              )(*local_20);
      if (iVar2 == 0x110000) {
        *param_1 = 0xfffd;
      }
      else {
        *param_1 = iVar2;
      }
      *(undefined *)(param_1 + 2) = 2;
    }
    return param_1;
  }
  local_60 = &PTR_s_mid_>_len_002104e8;
  local_58 = 1;
  local_50 = 8;
  local_48 = 0;
  uStack_40 = 0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00219100)
            (&local_60,&PTR_DAT_002106a8);
  pcVar1 = (code *)swi(3);
  piVar3 = (int *)(*pcVar1)();
  return piVar3;
}