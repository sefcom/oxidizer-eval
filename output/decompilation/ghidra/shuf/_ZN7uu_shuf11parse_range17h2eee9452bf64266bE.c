void _ZN7uu_shuf11parse_range17h2eee9452bf64266bE(ulong *param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined local_69;
  char local_68;
  undefined local_67;
  ulong local_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  _ZN4core3str21__LT_impl_u20_str_GT_10split_once17h879d31c8ba3e2bc2E(&local_40);
  if (local_40 == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6d7e89e89902d216E
              (param_1 + 1,"missing \'-\'",0xb);
    *param_1 = 1;
  }
  else {
    _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
              (&local_68,local_40,local_38);
    uVar2 = local_60;
    if ((local_68 == '\0') &&
       (_ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                  (&local_68,local_30,local_28), local_68 != '\x01')) {
      bVar1 = local_60 < uVar2 && uVar2 != local_60 + 1;
      if (bVar1) {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6d7e89e89902d216E
                  (param_1 + 1,"start exceeds end",0x11);
      }
      else {
        param_1[1] = uVar2;
        param_1[2] = local_60;
        *(undefined *)(param_1 + 3) = 0;
      }
      *param_1 = (ulong)bVar1;
      return;
    }
    local_69 = local_67;
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h546dbc70de56d72bE
              (&local_58,&local_69);
    param_1[1] = local_58;
    param_1[2] = uStack_50;
    param_1[3] = local_48;
    *param_1 = 1;
  }
  return;
}