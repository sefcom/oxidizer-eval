void _ZN21ruff_python_formatter8comments6format17normalize_comment17h1cf279285e939ea7E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  int *piVar2;
  undefined8 **ppuVar3;
  char cVar4;
  undefined8 uVar5;
  int **ppiVar6;
  undefined8 uVar7;
  undefined8 extraout_RDX;
  undefined8 **ppuVar8;
  undefined *puVar9;
  int *piVar10;
  bool bVar11;
  undefined auVar12 [16];
  undefined4 uStack_b4;
  undefined8 *puStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_68 [16];
  undefined8 *local_58;
  code *local_50;
  int *local_48;
  long local_40;
  undefined local_38 [16];
  
  pcStack_a0 = (code *)0x4000cf;
  auVar12 = (*(code *)
              PTR__ZN14ruff_formatter11source_code15SourceCodeSlice4text17h88bb2d0c23d31a8aE_006bd700
            )(param_2,param_3,param_4);
  pcStack_a0 = (code *)0x4000da;
  auVar12 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17hc1c5622f93930984E
                      (auVar12._0_8_,auVar12._8_8_);
  pcStack_a0 = (code *)0x4000eb;
  _ZN21ruff_python_formatter8comments6format20strip_comment_prefix17hbac1a00885230484E
            (&local_98,auVar12._0_8_);
  ppuVar3 = local_88;
  piVar2 = uStack_90;
  auVar1._8_8_ = local_88;
  auVar1._0_8_ = uStack_90;
  if ((int)local_98 != 4) {
    *(int *)(param_1 + 1) = (int)local_98;
    *(uint *)((long)param_1 + 0xc) = local_98._4_4_;
    uVar5 = 1;
    goto LAB_00400179;
  }
  local_48 = uStack_90;
  local_40 = (long)local_88;
  if (local_88 == (undefined8 **)0x0) {
    param_1[1] = 0x8000000000000000;
    auVar12._8_8_ = 1;
    auVar12._0_8_ = &DAT_0018a7ae;
  }
  else {
    local_98._0_4_ = _DAT_00185bf0;
    local_98._4_4_ = _UNK_00185bf4;
    uStack_90 = (int *)CONCAT44(_UNK_00185bfc,_UNK_00185bf8);
    local_88 = (undefined8 **)CONCAT44(local_88._4_4_,0x27);
    pcStack_a0 = (code *)0x40012d;
    cVar4 = _ZN4core3str7pattern7Pattern12is_prefix_of17h1fd50cc35b7d7b71E(&local_98,piVar2,ppuVar3)
    ;
    if (cVar4 == '\0') {
      local_98._0_4_ = 0;
      pcStack_a0 = (code *)0x4001a6;
      auVar12 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0xa0,&local_98);
      pcStack_a0 = (code *)0x4001b7;
      cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
                        (piVar2,ppuVar3,auVar12._0_8_,auVar12._8_8_);
      if (cVar4 == '\0') {
        pcStack_a0 = (code *)0x400211;
        local_68 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17hd401112d4c765288E
                             (piVar2,ppuVar3);
LAB_00400211:
        local_58 = (undefined8 *)local_68;
        local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdb2fd416f06f629cE;
        local_88 = &local_58;
      }
      else {
        pcStack_a0 = (code *)0x4001c6;
        local_38 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h08e9bc36e1fbb522E
                             (piVar2,ppuVar3);
        uVar7 = local_38._8_8_;
        uVar5 = local_38._0_8_;
        pcStack_a0 = (code *)0x4001e1;
        auVar12 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17hd401112d4c765288E
                            (uVar5,uVar7);
        pcStack_a0 = (code *)0x4001fb;
        cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
                          (auVar12._0_8_,auVar12._8_8_,&DAT_0018a7a7,5);
        if (cVar4 == '\0') {
          local_98 = (undefined **)((ulong)local_98._4_4_ << 0x20);
          pcStack_a0 = (code *)0x400269;
          auVar12 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x20,&local_98);
          pcStack_a0 = (code *)0x40027a;
          cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
                            (uVar5,uVar7,auVar12._0_8_,auVar12._8_8_);
          if (cVar4 == '\0') {
            pcStack_a0 = (code *)0x4002ec;
            local_68 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                                 (2,piVar2,ppuVar3);
            if (local_68._0_8_ == 0) {
              pcStack_a0 = 
              _ZN21ruff_python_formatter8comments6format20strip_comment_prefix17hbac1a00885230484E;
              ppuVar8 = ppuVar3;
              piVar10 = piVar2;
              (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                        (piVar2,ppuVar3,2,ppuVar3,&PTR_DAT_0067cc88);
              pcStack_a0 = (code *)piVar2;
              lStack_a8 = (long)ppuVar3;
              uStack_b4 = 0;
              puStack_b0 = param_1;
              auVar12 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x23,&uStack_b4);
              auVar12 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                                  (auVar12._0_8_,auVar12._8_8_,ppuVar8,extraout_RDX);
              bVar11 = auVar12._0_8_ != (undefined *)0x0;
              puVar9 = &DAT_0018a7af;
              if (bVar11) {
                puVar9 = auVar12._0_8_;
              }
              uVar5 = 0x26;
              if (bVar11) {
                uVar5 = auVar12._8_8_;
              }
              *piVar10 = (uint)bVar11 << 2;
              *(undefined **)(piVar10 + 2) = puVar9;
              *(undefined8 *)(piVar10 + 4) = uVar5;
              return;
            }
            goto LAB_00400211;
          }
          ppiVar6 = (int **)local_38;
        }
        else {
          ppiVar6 = &local_48;
        }
        local_68._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdb2fd416f06f629cE;
        local_68._0_8_ = ppiVar6;
        local_88 = (undefined8 **)local_68;
      }
      local_78 = 0;
      uStack_90 = (int *)0x1;
      local_98 = &PTR_DAT_0067cc78;
      local_80 = 1;
      pcStack_a0 = (code *)0x4002d0;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h9c3ecc8c56a3befdE(param_1 + 1,&local_98);
      *param_1 = 0;
      return;
    }
    param_1[1] = 0x8000000000000000;
  }
  uVar5 = 0;
  auVar1 = auVar12;
LAB_00400179:
  *(undefined (*) [16])(param_1 + 2) = auVar1;
  *param_1 = uVar5;
  return;
}