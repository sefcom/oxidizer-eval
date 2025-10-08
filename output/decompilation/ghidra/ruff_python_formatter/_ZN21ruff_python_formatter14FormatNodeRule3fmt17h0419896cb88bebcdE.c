void _ZN21ruff_python_formatter14FormatNodeRule3fmt17h0419896cb88bebcdE
               (int *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 extraout_RDX;
  int iVar4;
  int iVar5;
  undefined local_b8 [12];
  int iStack_ac;
  undefined8 uStack_a8;
  undefined *local_a0;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar3 = (**(code **)(param_4[1] + 0x30))(*param_4);
  _ZN5alloc2rc10RcInnerPtr10inc_strong17h8686aaaa10b78ebbE(*(undefined8 *)(lVar3 + 0x10));
  uVar1 = *(undefined8 *)(lVar3 + 0x10);
  local_80 = uVar1;
  _ZN132__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__StmtImportFrom_GT__GT_4from17h3e3d2d8e3dfb2ad9E
            (param_3);
                    /* try { // try from 0042c4b5 to 0042c64f has its CatchHandler @ 0042c652 */
  _ZN21ruff_python_formatter8comments8Comments25leading_dangling_trailing17hdd0b3dae22e440ceE
            (&local_60,uVar1,0x13,extraout_RDX);
  (**(code **)(param_4[1] + 0x30))(*param_4);
  cVar2 = (*(code *)
            PTR__ZN177__LT_ruff_python_formatter__statement__stmt_type_alias__FormatStmtTypeAlias_u20_as_u20_ruff_python_formatter__FormatNodeRule_LT_ruff_python_ast__generated__StmtTypeAlias_GT__GT_13is_suppressed17hce61a6239d14591dE_006bdf18
          )();
  if (cVar2 != '\0') {
    _local_b8 = _ZN21ruff_python_formatter8verbatim15suppressed_node17h8e7a9edf2db54a04E
                          (0x13,extraout_RDX);
    (*(code *)
      PTR__ZN151__LT_ruff_python_formatter__verbatim__FormatSuppressedNode_u20_as_u20_ruff_formatter__Format_LT_ruff_python_formatter__context__PyFormatContext_GT__GT_3fmt17hf5668f026777978bE_006be110
    )(param_1,local_b8,param_4);
    goto LAB_0042c60f;
  }
  stack0xffffffffffffff50 = (undefined *)CONCAT44(uStack_5c,local_60);
  uStack_a8 = (undefined8 *)CONCAT44(uStack_54,uStack_58);
  local_b8._0_8_ = &DAT_00000001;
  (*(code *)
    PTR__ZN160__LT_ruff_python_formatter__comments__format__FormatLeadingComments_u20_as_u20_ruff_formatter__Format_LT_ruff_python_formatter__context__PyFormatContext_GT__GT_3fmt17hc2058df1af78fa4dE_006bd6e0
  )(&local_98,local_b8,param_4);
  if (local_98 == 4) {
    lVar3 = _ZN14ruff_formatter9formatter24Formatter_LT_Context_GT_7options17he55f9fce45a2dc4aE
                      (*param_4,param_4[1]);
    cVar2 = *(char *)(lVar3 + 0xc);
    if (cVar2 == '\x01') {
      iStack_94 = _ZN14ruff_text_size6traits6Ranged5start17h03f6b3a3acca9993E
                            (*(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44));
      local_98 = 1;
      _ZN98__LT_ruff_formatter__builders__SourcePosition_u20_as_u20_ruff_formatter__Format_LT_Context_GT__GT_3fmt17ha7e01fab67152475E
                (local_b8,&iStack_94,param_4);
      if (local_b8._0_4_ == 4) goto LAB_0042c56f;
    }
    else {
LAB_0042c56f:
      (*(code *)
        PTR__ZN180__LT_ruff_python_formatter__statement__stmt_import_from__FormatStmtImportFrom_u20_as_u20_ruff_python_formatter__FormatNodeRule_LT_ruff_python_ast__generated__StmtImportFrom_GT__GT_10fmt_fields17hfee05728508974f9E_006be0a0
      )(local_b8);
      if (local_b8._0_4_ == 4) {
        if (cVar2 != '\0') {
          local_74 = _ZN14ruff_text_size6traits6Ranged3end17h10785568a0bd3255E
                               (*(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44));
        }
        local_78 = (uint)(cVar2 != '\0');
        local_70 = local_40;
        local_68 = local_38;
        local_b8._0_8_ = &local_78;
        stack0xffffffffffffff50 = &DAT_0067e810;
        uStack_a8 = &local_70;
        local_a0 = &DAT_0067d5a8;
        _ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9write_fmt17h7287e9dfefd137eaE
                  (&local_98,param_4,local_b8,2);
        goto LAB_0042c5ef;
      }
    }
    *(undefined8 **)(param_1 + 4) = uStack_a8;
    iVar4 = local_b8._0_4_;
    iVar5 = local_b8._4_4_;
    iStack_90 = local_b8._8_4_;
    iStack_8c = iStack_ac;
  }
  else {
LAB_0042c5ef:
    *(undefined8 *)(param_1 + 4) = local_88;
    iVar4 = local_98;
    iVar5 = iStack_94;
  }
  *param_1 = iVar4;
  param_1[1] = iVar5;
  param_1[2] = iStack_90;
  param_1[3] = iStack_8c;
LAB_0042c60f:
  _ZN4core3ptr62drop_in_place_LT_ruff_python_formatter__comments__Comments_GT_17he9abffb240eba4a8E
            (&local_80);
  return;
}