undefined8
_ZN10check_docs29check_validity_of_anchor_pair17hd8345c0881509e49E(long param_1,long param_2)

{
  undefined8 uVar1;
  long local_60;
  long local_58;
  long *local_50;
  code *local_48;
  long *local_40;
  code *local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined8 **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(ulong *)(param_1 + 0x30) <= *(ulong *)(param_2 + 0x30)) {
    return 0;
  }
  local_50 = &local_58;
  local_48 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h2ac00105f5211f10E;
  local_40 = &local_60;
  local_38 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h2ac00105f5211f10E;
  local_30 = &PTR_s_The_end_of_the_anchor_appears_be_002d3568;
  local_28 = 2;
  local_10 = 0;
  local_20 = &local_50;
  local_18 = 2;
  local_60 = param_1;
  local_58 = param_2;
  uVar1 = _ZN6anyhow9__private10format_err17hd87f3faee3401bd9E(&local_30);
  return uVar1;
}