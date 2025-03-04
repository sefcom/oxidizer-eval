void _ZN5uu_ls5dired15print_positions17h1699d046e996e251E
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long *local_98;
  code *local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_78 = (undefined *)&local_98;
  local_98 = &local_40;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2a9d35fa3fd2b5f3E;
  local_88 = (undefined **)&DAT_00123c10;
  local_80 = 1;
  uStack_68 = 0;
  local_70 = 1;
  local_40 = param_1;
  local_38 = param_2;
  _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_88);
  local_50 = param_4 * 0x10 + param_3;
  local_58 = param_3;
  lVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7f2942e0b93b17b0E
                    (&local_58);
  if (lVar1 != 0) {
    do {
      local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7b0229abfda6cdd0E;
      local_88 = &PTR_DAT_00313738;
      local_80 = 1;
      uStack_68 = 0;
      local_70 = 1;
      local_98 = &local_48;
      local_78 = (undefined *)&local_98;
      local_48 = lVar1;
      _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_88);
      lVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7f2942e0b93b17b0E
                        (&local_58);
    } while (lVar1 != 0);
  }
  local_88 = &PTR_DAT_00313728;
  local_80 = 1;
  local_78 = (undefined *)0x8;
  local_70 = 0;
  uStack_68 = 0;
  _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_88);
  return;
}