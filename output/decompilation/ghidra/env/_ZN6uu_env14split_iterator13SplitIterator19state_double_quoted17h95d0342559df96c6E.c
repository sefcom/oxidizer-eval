void _ZN6uu_env14split_iterator13SplitIterator19state_double_quoted17h95d0342559df96c6E
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  do {
    iVar2 = _ZN6uu_env14split_iterator13SplitIterator16get_current_char17h29d2c0904606848aE(param_2)
    ;
    if (iVar2 < 0x5c) {
      if (iVar2 != 0x24) {
        if (iVar2 != 0x22) goto LAB_00170f06;
        _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE(&local_40,param_2);
        if (local_40 == 0xc) {
          *(undefined4 *)param_1 = 0xc;
          return;
        }
        break;
      }
      _ZN6uu_env14split_iterator13SplitIterator19substitute_variable17hf281b653692e3534E
                (&local_40,param_2);
    }
    else if (iVar2 == 0x5c) {
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE(&local_40,param_2);
      if (local_40 != 0xc) break;
      _ZN6uu_env14split_iterator13SplitIterator29state_double_quoted_backslash17hcc5a58f570556e77E
                (&local_40,param_2);
    }
    else {
      if (iVar2 == 0x110000) {
        uVar1 = *(undefined8 *)(param_2 + 0x38);
        *param_1 = 0x2200000000;
        param_1[1] = uVar1;
        return;
      }
LAB_00170f06:
      _ZN6uu_env14split_iterator13SplitIterator8take_one17h1e0059af94c5f623E(&local_40,param_2);
    }
  } while (local_40 == 0xc);
  param_1[4] = local_20;
  param_1[2] = local_30;
  param_1[3] = uStack_28;
  *param_1 = CONCAT44(uStack_3c,local_40);
  param_1[1] = uStack_38;
  return;
}