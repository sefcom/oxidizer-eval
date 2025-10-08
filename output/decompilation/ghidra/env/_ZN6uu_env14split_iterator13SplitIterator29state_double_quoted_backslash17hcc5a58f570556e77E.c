void _ZN6uu_env14split_iterator13SplitIterator29state_double_quoted_backslash17hcc5a58f570556e77E
               (int *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_40;
  uint uStack_3c;
  undefined5 uStack_38;
  undefined3 uStack_33;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar1 = _ZN6uu_env14split_iterator13SplitIterator16get_current_char17h29d2c0904606848aE(param_2);
  if (iVar1 < 0x5c) {
    if (iVar1 == 10) {
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE(&local_40,param_2);
joined_r0x00170fec:
      if (local_40 != 0xc) {
        *(ulong *)(param_1 + 8) = CONCAT44(iStack_1c,uStack_20);
        *(ulong *)(param_1 + 4) = CONCAT35(uStack_2b,uStack_30);
        *(ulong *)(param_1 + 6) = CONCAT35(uStack_23,uStack_28);
        *(ulong *)param_1 = CONCAT44(uStack_3c,local_40);
        *(ulong *)(param_1 + 2) = CONCAT35(uStack_33,uStack_38);
        return;
      }
      goto LAB_0017102d;
    }
    if ((iVar1 == 0x22) || (iVar1 == 0x24)) goto LAB_00170fc4;
  }
  else {
    if (iVar1 == 0x5c) {
LAB_00170fc4:
      _ZN6uu_env14split_iterator13SplitIterator8take_one17h1e0059af94c5f623E(&local_40,param_2);
      goto joined_r0x00170fec;
    }
    if (iVar1 == 99) {
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *param_1 = 2;
      goto LAB_0017103f;
    }
    if (iVar1 == 0x110000) {
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      param_1[0] = 0;
      param_1[1] = 0x22;
      goto LAB_0017103f;
    }
  }
  _ZN6uu_env14split_iterator13SplitIterator35check_and_replace_ascii_escape_code17hbf4d9b34cfe30d19E
            (&local_40,param_2,iVar1);
  if (local_40 != 0xc) {
    param_1[9] = iStack_1c;
    *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_28,uStack_2b);
    *(ulong *)((long)param_1 + 0x1d) = CONCAT17((undefined)iStack_1c,CONCAT43(uStack_20,uStack_23));
    *(ulong *)((long)param_1 + 5) = CONCAT53(uStack_38,uStack_3c._1_3_);
    *(ulong *)((long)param_1 + 0xd) = CONCAT53(uStack_30,uStack_33);
    *param_1 = local_40;
    *(undefined *)(param_1 + 1) = (undefined)uStack_3c;
    return;
  }
  if ((uStack_3c & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    *param_1 = 3;
    param_1[1] = iVar1;
LAB_0017103f:
    *(undefined8 *)(param_1 + 2) = uVar2;
    return;
  }
LAB_0017102d:
  *param_1 = 0xc;
  return;
}