void _ZN21ruff_python_formatter6string9normalize17QuoteMetadataKind3raw17hb0a4e8c14ab76ee2E
               (undefined *param_1,long param_2,long param_3,byte param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined uVar4;
  bool bVar5;
  undefined auVar6 [12];
  long local_40;
  long local_38;
  int local_30 [2];
  
  local_38 = param_3 + param_2;
  iVar3 = (uint)(param_4 ^ 1) + (uint)(param_4 ^ 1) * 4 + 0x22;
  local_40 = param_2;
  if (param_5 == 0) {
    iVar2 = 0x110001;
    do {
      do {
        do {
          while( true ) {
            local_30[0] = 0x110001;
            if (iVar2 == 0x110001) {
              auVar6 = _ZN4core3str11validations15next_code_point17hfc8b8c1898281fd8E(&local_40);
              iVar2 = auVar6._8_4_;
              if ((auVar6 & (undefined  [12])0x1) == (undefined  [12])0x0) goto LAB_00428744;
            }
            iVar1 = local_30[0];
            if (iVar2 != 0x5c) break;
            local_30[0] = 0x110001;
            iVar2 = local_30[0];
            if (iVar1 == 0x110001) {
              _ZN4core3str11validations15next_code_point17hfc8b8c1898281fd8E(&local_40);
              iVar2 = local_30[0];
            }
          }
          if (iVar2 == 0x110000) goto LAB_00428744;
          bVar5 = iVar2 != iVar3;
          iVar2 = local_30[0];
        } while (bVar5);
        _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h8e8d1ab978d36fd6E(local_30,&local_40)
        ;
        uVar4 = 1;
        if (local_30[0] == 0x110000) goto LAB_00428747;
        iVar2 = local_30[0];
      } while (local_30[0] != iVar3);
      local_30[0] = 0x110001;
      _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h8e8d1ab978d36fd6E(local_30,&local_40);
    } while ((local_30[0] != 0x110000) &&
            (_ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h8e8d1ab978d36fd6E
                       (local_30,&local_40), iVar2 = local_30[0], local_30[0] != iVar3));
  }
  else {
    iVar2 = 0x110001;
    do {
      while( true ) {
        local_30[0] = 0x110001;
        if (iVar2 == 0x110001) {
          auVar6 = _ZN4core3str11validations15next_code_point17hfc8b8c1898281fd8E(&local_40);
          iVar2 = auVar6._8_4_;
          if ((auVar6 & (undefined  [12])0x1) == (undefined  [12])0x0) goto LAB_00428744;
        }
        iVar1 = local_30[0];
        if (iVar2 != 0x5c) break;
        local_30[0] = 0x110001;
        iVar2 = local_30[0];
        if (iVar1 == 0x110001) {
          _ZN4core3str11validations15next_code_point17hfc8b8c1898281fd8E(&local_40);
          iVar2 = local_30[0];
        }
      }
      if (iVar2 == 0x110000) goto LAB_00428744;
      bVar5 = iVar2 != iVar3;
      iVar2 = local_30[0];
    } while (bVar5);
    uVar4 = 1;
  }
LAB_00428747:
  param_1[1] = uVar4;
  *param_1 = 0;
  return;
LAB_00428744:
  uVar4 = 0;
  goto LAB_00428747;
}