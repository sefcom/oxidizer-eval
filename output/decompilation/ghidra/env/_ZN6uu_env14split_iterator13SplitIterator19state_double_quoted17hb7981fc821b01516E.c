void _ZN6uu_env14split_iterator13SplitIterator19state_double_quoted17hb7981fc821b01516E
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
    iVar2 = _ZN6uu_env14split_iterator13SplitIterator16get_current_char17h5ca55267f11846dcE(param_2)
    ;
    if (iVar2 < 0x5c) {
      if (iVar2 != 0x24) {
        if (iVar2 != 0x22) goto LAB_001da166;
        _ZN6uu_env14split_iterator13SplitIterator8skip_one17hcd63dec953ae1fd1E(&local_40,param_2);
        if (local_40 == 8) {
          *(undefined4 *)param_1 = 8;
          return;
        }
        break;
      }
      _ZN6uu_env14split_iterator13SplitIterator19substitute_variable17h1db80b01658fc728E
                (&local_40,param_2);
    }
    else if (iVar2 == 0x5c) {
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17hcd63dec953ae1fd1E(&local_40,param_2);
      if (local_40 != 8) break;
      _ZN6uu_env14split_iterator13SplitIterator29state_double_quoted_backslash17h3f45bcdaf5eb467dE
                (&local_40,param_2);
    }
    else {
      if (iVar2 == 0x110000) {
        uVar1 = *(undefined8 *)(param_2 + 0x38);
        *param_1 = 0x2200000000;
        param_1[1] = uVar1;
        return;
      }
LAB_001da166:
      _ZN6uu_env14split_iterator13SplitIterator8take_one17h79c5ef4ea4fbd4eeE(&local_40,param_2);
    }
  } while (local_40 == 8);
  param_1[4] = local_20;
  param_1[2] = local_30;
  param_1[3] = uStack_28;
  *param_1 = CONCAT44(uStack_3c,local_40);
  param_1[1] = uStack_38;
  return;
}