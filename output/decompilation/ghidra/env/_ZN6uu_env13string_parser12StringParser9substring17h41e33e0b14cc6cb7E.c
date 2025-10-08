undefined  [16]
_ZN6uu_env13string_parser12StringParser9substring17h41e33e0b14cc6cb7E
          (undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined auVar3 [16];
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
    local_80 = &PTR_s_mid_>_len_002104e8;
    local_78 = 1;
    local_70 = 8;
    local_68 = 0;
    uStack_60 = 0;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00219100)
              (&local_80,&PTR_DAT_00210720);
  }
  else {
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17h4b20b73ec557817aE
              (local_50,*param_1,param_1[1],uVar1);
    if (param_2[1] - uVar1 <= local_38) {
      _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17h4b20b73ec557817aE
                (local_30,local_40);
      return local_30[0];
    }
  }
  local_80 = &PTR_s_mid_>_len_002104e8;
  local_78 = 1;
  local_70 = 8;
  local_68 = 0;
  uStack_60 = 0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00219100)
            (&local_80,&PTR_DAT_00210738);
  pcVar2 = (code *)swi(3);
  auVar3 = (*pcVar2)();
  return auVar3;
}