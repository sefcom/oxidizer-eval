void _ZN6uu_env15variable_parser14VariableParser28parse_unbraced_variable_name17hb6cd479313718b9dE
               (long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined auVar3 [16];
  long local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  long local_28;
  
  lVar1 = *(long *)(param_2 + 0x20);
  _ZN6uu_env15variable_parser14VariableParser25check_variable_name_start17hb2ef1afab325da6eE
            (&local_48);
  if ((int)local_48 == 8) {
    uVar2 = _ZN6uu_env15variable_parser14VariableParser16get_current_char17h68b63febfc4461a0E
                      (param_2);
    while ((uVar2 != 0x110000 &&
           (((uVar2 == 0x5f || (uVar2 - 0x30 < 10)) || ((uVar2 & 0x1fffdf) - 0x41 < 0x1a))))) {
      _ZN6uu_env15variable_parser14VariableParser8skip_one17h6221cbf058689bacE(&local_48,param_2);
      if ((int)local_48 != 8) goto LAB_001d5554;
      uVar2 = _ZN6uu_env15variable_parser14VariableParser16get_current_char17h68b63febfc4461a0E
                        (param_2);
    }
    lStack_40 = *(long *)(param_2 + 0x20);
    if (lStack_40 == lVar1) {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17he132dab3b8589a55E
                (param_1 + 2,"Missing variable name",0x15);
      *(undefined4 *)param_1 = 4;
      param_1[1] = lVar1;
    }
    else {
      local_48 = lVar1;
      auVar3 = _ZN6uu_env13string_parser12StringParser9substring17h93033379edd1d12fE
                         (param_2,&local_48);
      *(undefined (*) [16])(param_1 + 1) = auVar3;
      *(undefined4 *)param_1 = 8;
    }
  }
  else {
LAB_001d5554:
    param_1[4] = local_28;
    param_1[2] = local_38;
    param_1[3] = lStack_30;
    *param_1 = local_48;
    param_1[1] = lStack_40;
  }
  return;
}