void _ZN21ruff_python_formatter6string9normalize17QuoteMetadataKind13triple_quoted17h5840b0a68ba9b6caE
               (undefined *param_1,long param_2,long param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  undefined uVar3;
  bool bVar4;
  undefined auVar5 [12];
  long local_40;
  long local_38;
  int local_30 [2];
  
  local_38 = param_3 + param_2;
  iVar2 = (uint)(param_4 ^ 1) + (uint)(param_4 ^ 1) * 4 + 0x22;
  local_40 = param_2;
  iVar1 = 0x110001;
  while (local_30[0] = 0x110001, iVar1 != 0x110001) {
LAB_004284d8:
    if (iVar1 == 0x5c) {
      _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h8e8d1ab978d36fd6E(local_30,&local_40);
      if ((local_30[0] == 0x22) || (iVar1 = local_30[0], local_30[0] == 0x5c)) {
        local_30[0] = 0x110001;
        iVar1 = local_30[0];
      }
    }
    else {
      if (iVar1 == 0x110000) goto LAB_00428556;
      bVar4 = iVar1 == iVar2;
      iVar1 = local_30[0];
      if (bVar4) {
        _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h8e8d1ab978d36fd6E(local_30,&local_40)
        ;
        uVar3 = 1;
        if (local_30[0] == 0x110000) goto LAB_00428559;
        iVar1 = local_30[0];
        if (local_30[0] == iVar2) {
          local_30[0] = 0x110001;
          _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h8e8d1ab978d36fd6E
                    (local_30,&local_40);
          if ((local_30[0] == 0x110000) || (iVar1 = local_30[0], local_30[0] == iVar2))
          goto LAB_00428559;
        }
      }
    }
  }
  auVar5 = _ZN4core3str11validations15next_code_point17hfc8b8c1898281fd8E(&local_40);
  iVar1 = auVar5._8_4_;
  if ((auVar5 & (undefined  [12])0x1) != (undefined  [12])0x0) goto LAB_004284d8;
LAB_00428556:
  uVar3 = 0;
LAB_00428559:
  param_1[1] = uVar3;
  *param_1 = 1;
  return;
}