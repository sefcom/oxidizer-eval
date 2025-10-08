void _ZN6uu_env14split_iterator13SplitIterator15state_delimiter17h3f5e69fc26e62c64E
               (undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  int local_2c;
  
  do {
    local_2c = _ZN6uu_env14split_iterator13SplitIterator16get_current_char17h29d2c0904606848aE
                         (param_2);
    if (local_2c == 0x23) {
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE(&local_58,param_2);
      if (local_58 != 0xc) break;
      _ZN6uu_env14split_iterator13SplitIterator13state_comment17h98c786198130d1d5E
                (&local_58,param_2);
    }
    else if (local_2c == 0x5c) {
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE(&local_58,param_2);
      if (local_58 != 0xc) break;
      _ZN6uu_env14split_iterator13SplitIterator25state_delimiter_backslash17h697f23c15afc6017E
                (&local_58,param_2);
    }
    else {
      if (local_2c == 0x110000) {
        *(undefined4 *)param_1 = 0xc;
        return;
      }
      cVar1 = _ZN56__LT_char_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h2af8667b79ce998cE
                        (&local_2c,&DAT_0011e808,6);
      if (cVar1 == '\0') {
        _ZN6uu_env14split_iterator13SplitIterator14state_unquoted17hb014e515ee06de9cE
                  (&local_58,param_2);
      }
      else {
        _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE();
      }
    }
  } while (local_58 == 0xc);
  param_1[4] = local_38;
  param_1[2] = local_48;
  param_1[3] = uStack_40;
  *param_1 = CONCAT44(uStack_54,local_58);
  param_1[1] = uStack_50;
  return;
}