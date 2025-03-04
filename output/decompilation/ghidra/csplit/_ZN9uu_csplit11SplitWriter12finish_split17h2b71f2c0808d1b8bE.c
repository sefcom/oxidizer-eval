void _ZN9uu_csplit11SplitWriter12finish_split17h2b71f2c0808d1b8bE(long param_1)

{
  long local_40;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  long *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    if ((*(char *)(*(long *)(param_1 + 0x20) + 0x62) != '\0') && (*(long *)(param_1 + 0x30) == 0)) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      return;
    }
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x61) == '\0') {
      local_40 = param_1 + 0x30;
      local_38 = 
      _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
      ;
      local_30 = &DAT_003e1d98;
      local_28 = 2;
      local_10 = 0;
      local_20 = &local_40;
      local_18 = 1;
      _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_30);
      return;
    }
  }
  return;
}