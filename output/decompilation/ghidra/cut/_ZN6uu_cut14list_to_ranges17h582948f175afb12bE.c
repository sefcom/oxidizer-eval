ulong * __rustcall
uu_cut::list_to_ranges(ulong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulong local_38;
  long local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulong local_18;
  
  if (param_4 == 0) {
    uucore::features::ranges::Range::from_list(param_1);
  }
  else {
    uucore::features::ranges::Range::from_list(&local_30);
    if (local_30 == 0) {
      local_38 = local_18;
      local_48 = local_28;
      uStack_44 = uStack_24;
      uStack_40 = uStack_20;
      uStack_3c = uStack_1c;
      list_to_ranges::___closure__(param_1 + 1,&local_48);
    }
    else {
      param_1[3] = local_18;
      param_1[1] = CONCAT44(uStack_24,local_28);
      param_1[2] = CONCAT44(uStack_1c,uStack_20);
    }
    *param_1 = (ulong)(local_30 != 0);
  }
  return param_1;
}