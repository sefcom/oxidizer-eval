void _ZN6uu_env14split_iterator13SplitIterator15state_delimiter17hcb2808b02d57ed1bE
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
    local_2c = _ZN6uu_env14split_iterator13SplitIterator16get_current_char17h5ca55267f11846dcE
                         (param_2);
    if (local_2c == 0x23) {
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17hcd63dec953ae1fd1E(&local_58,param_2);
      if (local_58 != 8) break;
      _ZN6uu_env14split_iterator13SplitIterator13state_comment17ha611e5f8f3a5f309E
                (&local_58,param_2);
    }
    else if (local_2c == 0x5c) {
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17hcd63dec953ae1fd1E(&local_58,param_2);
      if (local_58 != 8) break;
      _ZN6uu_env14split_iterator13SplitIterator25state_delimiter_backslash17hda2bc29fb6f38b14E
                (&local_58,param_2);
    }
    else {
      if (local_2c == 0x110000) {
        *(undefined4 *)param_1 = 8;
        return;
      }
      cVar1 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h1ba5288d29bd1e28E
                        (&local_2c,&DAT_00125318,6);
      if (cVar1 == '\0') {
        _ZN6uu_env14split_iterator13SplitIterator14state_unquoted17h4114e84db94125c1E
                  (&local_58,param_2);
      }
      else {
        _ZN6uu_env14split_iterator13SplitIterator8skip_one17hcd63dec953ae1fd1E();
      }
    }
  } while (local_58 == 8);
  param_1[4] = local_38;
  param_1[2] = local_48;
  param_1[3] = uStack_40;
  *param_1 = CONCAT44(uStack_54,local_58);
  param_1[1] = uStack_50;
  return;
}