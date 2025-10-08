void _ZN7uu_expr11syntax_tree5BinOp4eval17h135374f3f8bf6168E
               (undefined8 *param_1,char param_2,byte param_3,int *param_4,byte *param_5)

{
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int aiStack_c8 [12];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  
  if (param_2 == '\0') {
    _ZN7uu_expr11syntax_tree10RelationOp4eval17he3600cb1c737b18aE(param_1,param_3,param_4,param_5);
    return;
  }
  if (param_2 == '\x01') {
    if (*param_4 == 1) {
      iStack_e8 = param_4[2];
      iStack_e4 = param_4[3];
      iStack_e0 = param_4[4];
      iStack_dc = param_4[5];
      iStack_d8 = param_4[6];
      iStack_d4 = param_4[7];
      iStack_d0 = param_4[8];
      iStack_cc = param_4[9];
    }
    else {
      _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_bigint17hfc488cc1793399d6E(aiStack_c8);
      iStack_e8 = (int)aiStack_c8._8_8_;
      iStack_e4 = SUB84(aiStack_c8._8_8_,4);
      iStack_e0 = (int)aiStack_c8._16_8_;
      iStack_dc = SUB84(aiStack_c8._16_8_,4);
      iStack_d8 = (int)aiStack_c8._24_8_;
      iStack_d4 = SUB84(aiStack_c8._24_8_,4);
      iStack_d0 = (int)aiStack_c8._32_8_;
      iStack_cc = SUB84(aiStack_c8._32_8_,4);
      if (aiStack_c8[0] != 1) {
        iStack_68 = iStack_d8;
        iStack_64 = iStack_d4;
        iStack_60 = iStack_d0;
        iStack_5c = iStack_cc;
        iStack_78 = iStack_e8;
        iStack_74 = iStack_e4;
        iStack_70 = iStack_e0;
        iStack_6c = iStack_dc;
        if ((*param_5 & 1) == 0) {
          _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_bigint17hfc488cc1793399d6E(aiStack_c8);
          iStack_e8 = (int)aiStack_c8._8_8_;
          iStack_e4 = SUB84(aiStack_c8._8_8_,4);
          iStack_e0 = (int)aiStack_c8._16_8_;
          iStack_dc = SUB84(aiStack_c8._16_8_,4);
          iStack_d8 = (int)aiStack_c8._24_8_;
          iStack_d4 = SUB84(aiStack_c8._24_8_,4);
          iStack_d0 = (int)aiStack_c8._32_8_;
          iStack_cc = SUB84(aiStack_c8._32_8_,4);
          if (aiStack_c8[0] != 1) {
            uStack_88 = iStack_d8;
            uStack_84 = iStack_d4;
            uStack_80 = iStack_d0;
            uStack_7c = iStack_cc;
            uStack_98 = iStack_e8;
            uStack_94 = iStack_e4;
            uStack_90 = iStack_e0;
            uStack_8c = iStack_dc;
                    /* WARNING: Could not recover jumptable at 0x001a448d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)&switchD_001a448d::caseD_1b +
                      (long)(int)(&switchD_001a448d::caseD_1b)[param_3]))();
            return;
          }
        }
        else {
          iStack_e8 = *(int *)(param_5 + 8);
          iStack_e4 = *(int *)(param_5 + 0xc);
          iStack_e0 = *(int *)(param_5 + 0x10);
          iStack_dc = *(int *)(param_5 + 0x14);
          iStack_d8 = *(int *)(param_5 + 0x18);
          iStack_d4 = *(int *)(param_5 + 0x1c);
          iStack_d0 = *(int *)(param_5 + 0x20);
          iStack_cc = *(int *)(param_5 + 0x24);
        }
        *(int *)(param_1 + 3) = iStack_d8;
        *(int *)((long)param_1 + 0x1c) = iStack_d4;
        *(int *)(param_1 + 4) = iStack_d0;
        *(int *)((long)param_1 + 0x24) = iStack_cc;
        *(int *)(param_1 + 1) = iStack_e8;
        *(int *)((long)param_1 + 0xc) = iStack_e4;
        *(int *)(param_1 + 2) = iStack_e0;
        *(int *)((long)param_1 + 0x14) = iStack_dc;
        *param_1 = 1;
        _ZN4core3ptr47drop_in_place_LT_num_bigint__bigint__BigInt_GT_17hd240cd584614de3eE
                  (CONCAT44(iStack_74,iStack_78),CONCAT44(iStack_6c,iStack_70));
        return;
      }
    }
    *(int *)(param_1 + 3) = iStack_d8;
    *(int *)((long)param_1 + 0x1c) = iStack_d4;
    *(int *)(param_1 + 4) = iStack_d0;
    *(int *)((long)param_1 + 0x24) = iStack_cc;
    *(int *)(param_1 + 1) = iStack_e8;
    *(int *)((long)param_1 + 0xc) = iStack_e4;
    *(int *)(param_1 + 2) = iStack_e0;
    *(int *)((long)param_1 + 0x14) = iStack_dc;
    *param_1 = 1;
    _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT_17h0c833a88cc9a87cfE
              (param_5);
    return;
  }
  _ZN7uu_expr11syntax_tree8StringOp4eval17h76d6f11cecdfc211E();
  return;
}