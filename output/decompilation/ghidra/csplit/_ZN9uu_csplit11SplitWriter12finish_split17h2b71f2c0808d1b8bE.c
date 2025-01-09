void __rustcall uu_csplit::SplitWriter::finish_split(long param_1)

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
      local_38 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
      local_30 = &DAT_003e1d98;
      local_28 = 2;
      local_10 = 0;
      local_20 = &local_40;
      local_18 = 1;
      std::io::stdio::_print(&local_30);
      return;
    }
  }
  return;
}