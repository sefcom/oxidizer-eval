void _ZN5uu_ls11parse_width17h699105a2614aa38fE(long *param_1,long param_2)

{
  uint uVar1;
  long local_58;
  undefined2 local_50;
  undefined8 local_4e;
  undefined8 uStack_46;
  undefined8 local_3e;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined6 uStack_2e;
  long local_28 [3];
  
  if (param_2 == 0) {
    _ZN3std3env6var_os17h584be2191f4a6db4E(local_28,"COLUMNS: ",7);
    if (local_28[0] == -0x8000000000000000) {
      uVar1 = (*(code *)PTR__ZN13terminal_size4unix13terminal_size17h0533c5cb6376a2e5E_0048fdd8)();
      local_50 = 0x50;
      if ((uVar1 & 1) != 0) {
        local_50 = (short)(uVar1 >> 0x10);
      }
    }
    else {
      local_50 = _ZN5uu_ls11parse_width28__u7b__u7b_closure_u7d__u7d_17h834e84f58277f74aE(local_28);
    }
  }
  else {
    _ZN5uu_ls11parse_width28__u7b__u7b_closure_u7d__u7d_17hbcfe9c82ddd5108aE
              (&local_58,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    if (local_58 != -0x7ffffffffffffffa) {
      param_1[5] = CONCAT62(uStack_2e,uStack_30);
      *(undefined8 *)((long)param_1 + 0x1a) = local_3e;
      *(ulong *)((long)param_1 + 0x22) = CONCAT26(uStack_30,uStack_36);
      *(undefined8 *)((long)param_1 + 10) = local_4e;
      *(undefined8 *)((long)param_1 + 0x12) = uStack_46;
      *param_1 = local_58;
      *(undefined2 *)(param_1 + 1) = local_50;
      return;
    }
  }
  *(undefined2 *)(param_1 + 1) = local_50;
  *param_1 = -0x7ffffffffffffffa;
  return;
}