void _ZN7uu_join5State9read_line17hf3213b00009777a5E
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  _ZN82__LT_std__io__Split_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0d9dc488658bb76cE
            (&local_80,param_2 + 0x28);
  if (local_80 == -0x7fffffffffffffff) {
    *param_1 = 0x8000000000000000;
  }
  else {
    *(long *)(param_2 + 0x50) = *(long *)(param_2 + 0x50) + 1;
    if (local_80 == -0x8000000000000000) {
      param_1[1] = local_78;
      *param_1 = 0x8000000000000001;
    }
    else {
      local_68 = local_80;
      local_60 = local_78;
      local_58 = local_70;
      _ZN7uu_join4Line3new17hf82a54a2b0e9a927E
                (&local_50,&local_68,param_3,*(undefined8 *)(param_2 + 0x48));
      if (*(ulong *)(param_2 + 0x48) < local_40) {
        *(ulong *)(param_2 + 0x48) = local_40;
      }
      param_1[4] = local_30;
      param_1[5] = uStack_28;
      param_1[2] = local_40;
      param_1[3] = uStack_38;
      *param_1 = local_50;
      param_1[1] = uStack_48;
    }
  }
  return;
}