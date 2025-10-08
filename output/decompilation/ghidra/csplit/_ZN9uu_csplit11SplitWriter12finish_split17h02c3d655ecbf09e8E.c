void _ZN9uu_csplit11SplitWriter12finish_split17h02c3d655ecbf09e8E(long param_1)

{
  long local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  long *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    if ((*(char *)(*(long *)(param_1 + 0x20) + 0x62) == '\x01') && (*(long *)(param_1 + 0x30) == 0))
    {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      return;
    }
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x61) == '\0') {
      local_40 = param_1 + 0x30;
      local_38 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00371068
      ;
      local_30 = &DAT_00342c88;
      local_28 = 2;
      local_10 = 0;
      local_20 = &local_40;
      local_18 = 1;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00371350)(&local_30);
      return;
    }
  }
  return;
}