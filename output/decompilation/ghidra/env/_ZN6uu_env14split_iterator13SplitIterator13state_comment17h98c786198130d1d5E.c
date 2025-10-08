void _ZN6uu_env14split_iterator13SplitIterator13state_comment17h98c786198130d1d5E
               (undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar1 = 
  PTR__ZN6uu_env13string_parser12StringParser22skip_until_char_or_end17hf050962e819e98deE_00219330;
  iVar2 = _ZN6uu_env14split_iterator13SplitIterator16get_current_char17h29d2c0904606848aE(param_2);
  while( true ) {
    if (iVar2 == 10) {
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE(&local_48,param_2);
      if (local_48 == 0xc) {
        *(undefined4 *)param_1 = 0xc;
      }
      else {
        param_1[4] = local_28;
        param_1[2] = local_38;
        param_1[3] = uStack_30;
        *param_1 = CONCAT44(uStack_44,local_48);
        param_1[1] = uStack_40;
      }
      return;
    }
    if (iVar2 == 0x110000) break;
    (*(code *)puVar1)(param_2 + 0x18,10);
    iVar2 = _ZN6uu_env14split_iterator13SplitIterator16get_current_char17h29d2c0904606848aE(param_2)
    ;
  }
  *(undefined4 *)param_1 = 9;
  return;
}