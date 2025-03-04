void _ZN7uu_test6isatty17h35113a9be9add355E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  
  _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
            (&local_50);
  if ((local_50 == 0) &&
     (uVar2 = _ZN4core3num60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_i32_GT_8from_str17h5b8351ce1d7a5cacE
                        (local_48,local_40), (uVar2 & 1) == 0)) {
    iVar1 = (*(code *)PTR_isatty_00218070)(uVar2 >> 0x20);
    *(bool *)(param_1 + 1) = iVar1 == 1;
    *param_1 = 7;
    return;
  }
  local_50 = 1;
  local_38 = 1;
  local_48 = param_2;
  local_40 = param_3;
  _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h0530b763d48a6791E
            (&local_30,&local_50);
  *(undefined4 *)((long)param_1 + 0x1c) = local_1c;
  *(undefined8 *)((long)param_1 + 0xc) = local_2c;
  *(undefined8 *)((long)param_1 + 0x14) = uStack_24;
  *param_1 = 5;
  *(undefined4 *)(param_1 + 1) = local_30;
  return;
}