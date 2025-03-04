int * _ZN6uu_env15variable_parser14VariableParser14parse_variable17h1713cd6810b8ef74E
                (int *param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int local_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lVar3 = *param_2;
  _ZN6uu_env15variable_parser14VariableParser8skip_one17h6221cbf058689bacE(&local_38,lVar3);
  if (local_38 == 8) {
    iVar2 = _ZN6uu_env15variable_parser14VariableParser16get_current_char17h68b63febfc4461a0E(lVar3)
    ;
    if (iVar2 == 0x7b) {
      _ZN6uu_env15variable_parser14VariableParser8skip_one17h6221cbf058689bacE(&local_38,lVar3);
      if (local_38 != 8) goto LAB_001d5639;
      _ZN6uu_env15variable_parser14VariableParser26parse_braced_variable_name17h06c067d5ba361416E
                (&local_38,lVar3);
      if (local_38 != 8) {
        *param_1 = local_38;
        param_1[1] = iStack_34;
        *(undefined8 *)(param_1 + 2) = uStack_30;
        *(undefined8 *)(param_1 + 4) = uStack_28;
        *(undefined8 *)(param_1 + 6) = uStack_20;
        *(long *)(param_1 + 8) = lStack_18;
        return param_1;
      }
    }
    else {
      if (iVar2 == 0x110000) {
        uVar1 = *(undefined8 *)(lVar3 + 0x20);
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17he132dab3b8589a55E
                  (param_1 + 4,"missing variable name",0x15);
        *param_1 = 4;
        *(undefined8 *)(param_1 + 2) = uVar1;
        return param_1;
      }
      _ZN6uu_env15variable_parser14VariableParser28parse_unbraced_variable_name17hb6cd479313718b9dE
                (&local_38);
      if (local_38 != 8) {
        *(undefined8 *)(param_1 + 6) = uStack_20;
        *(long *)(param_1 + 8) = lStack_18;
        *param_1 = local_38;
        param_1[1] = iStack_34;
        *(undefined8 *)(param_1 + 2) = uStack_30;
        *(undefined8 *)(param_1 + 4) = uStack_28;
        return param_1;
      }
      uStack_20 = 0;
      lStack_18 = lVar3;
    }
    *(undefined8 *)(param_1 + 2) = uStack_30;
    *(undefined8 *)(param_1 + 4) = uStack_28;
    *(undefined8 *)(param_1 + 6) = uStack_20;
    *(long *)(param_1 + 8) = lStack_18;
    *param_1 = 8;
  }
  else {
LAB_001d5639:
    *(long *)(param_1 + 8) = lStack_18;
    *(undefined8 *)(param_1 + 4) = uStack_28;
    *(undefined8 *)(param_1 + 6) = uStack_20;
    *(ulong *)param_1 = CONCAT44(iStack_34,local_38);
    *(undefined8 *)(param_1 + 2) = uStack_30;
  }
  return param_1;
}