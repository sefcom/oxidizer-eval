ulong _ZN21ruff_python_formatter6string9docstring26contains_unescaped_newline17h725af0d29cbc1dc9E
                (undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  ulong in_RAX;
  undefined4 *puVar3;
  ulong uVar4;
  byte *extraout_RDX;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  uStack_38 = in_RAX;
  do {
    uVar9 = auVar12._8_8_;
    uVar8 = auVar12._0_8_;
    uStack_38._0_4_ = CONCAT13(0x5c,(undefined3)uStack_38);
    pcStack_40 = (code *)0x422c63;
    auVar10 = _ZN6memchr4arch7generic6memchr21search_slice_with_raw17hb25a568564df487cE
                        (uVar8,uVar9,(long)&uStack_38 + 3);
    if ((auVar10 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
    lVar5 = auVar10._8_8_ + 1;
    pcStack_40 = (code *)0x422c80;
    auVar11 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                        (lVar5,uVar8,uVar9);
    if (auVar11._0_8_ == 0) {
      pcStack_40 = 
      _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter8add_iter17h462e49ccaf522bd7E
      ;
      auVar11 = auVar12;
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                (uVar8,uVar9,lVar5,uVar9,&PTR_s_crates_ruff_python_formatter_src_0067f0c0);
      lVar6 = auVar11._8_8_;
      puVar7 = auVar11._0_8_;
      lStack_68 = (long)&uStack_38 + 3;
      uStack_58 = auVar10._0_8_;
      lStack_48 = (long)&uStack_38 + 4;
      pcStack_40 = (code *)lVar5;
      do {
        uStack_50 = auVar12._8_8_;
        uStack_60 = auVar12._0_8_;
        auVar10 = *(undefined (*) [16])(extraout_RDX + 8);
        extraout_RDX[0] = 0;
        extraout_RDX[1] = 0;
        extraout_RDX[2] = 0;
        extraout_RDX[3] = 0;
        extraout_RDX[4] = 0;
        extraout_RDX[5] = 0;
        extraout_RDX[6] = 0;
        extraout_RDX[7] = 0;
        if ((*extraout_RDX & 1) == 0) {
          auVar10 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h3fa9a8e3da590a31E
                              (extraout_RDX + 0x18);
          auVar12._8_8_ = uStack_50;
          auVar12._0_8_ = uStack_60;
        }
        uStack_50 = auVar12._8_8_;
        uStack_60 = auVar12._0_8_;
        uVar4 = auVar10._8_8_;
        if (auVar10._0_8_ == 0) {
          _ZN21ruff_python_formatter6string9docstring11CodeExample6finish17hfd3e9aa3b4f5a7b9E
                    (lVar6 + 0x20,lVar6);
          uVar4 = _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter16run_action_queue17h5e595196a30effb1E
                            (puVar7,lVar6);
          return uVar4;
        }
        uVar1 = *(undefined4 *)(lVar6 + 0x90);
        puVar3 = (undefined4 *)
                 _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hfe9154ba007c2a9aE
                           (extraout_RDX,extraout_RDX + 0x18);
        uStack_80 = *puVar3;
        uStack_7c = puVar3[1];
        uStack_78 = puVar3[2];
        uStack_74 = puVar3[3];
        uStack_70 = uVar1;
        auStack_90 = auVar10;
        if (uVar4 >> 0x20 == 0) {
          _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E(0,&DAT_0067cc48);
          uVar4 = (ulong)(auVar10._8_4_ + 1);
        }
        else {
          _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E(1,&DAT_0067cc48);
        }
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E(0,&DAT_0067cc48);
        *(int *)(lVar6 + 0x90) = *(int *)(lVar6 + 0x90) + (int)uVar4;
        _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter7add_one17hae2c629763b1b7f5E
                  (&iStack_a8,lVar6,auStack_90);
        auVar12._8_8_ = uStack_50;
        auVar12._0_8_ = uStack_60;
      } while (iStack_a8 == 4);
      puVar7[2] = uStack_98;
      *puVar7 = CONCAT44(uStack_a4,iStack_a8);
      puVar7[1] = uStack_a0;
      return uStack_98;
    }
    pcStack_40 = (code *)0x422c91;
    auVar12 = (*(code *)
                PTR__ZN72__LT_str_u20_as_u20_ruff_python_trivia__whitespace__PythonWhitespace_GT_21trim_whitespace_start17h664fc8ac076cf662E_006be120
              )(auVar11._0_8_,auVar11._8_8_);
    uStack_38 = uStack_38 & 0xffffffff;
    pcStack_40 = (code *)0x422cac;
    auVar11 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(10,(long)&uStack_38 + 4);
    pcStack_40 = (code *)0x422cbd;
    cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
                      (auVar12._0_8_,auVar12._8_8_,auVar11._0_8_,auVar11._8_8_);
  } while (cVar2 == '\0');
  return auVar10._0_8_ & 0xffffff01;
}