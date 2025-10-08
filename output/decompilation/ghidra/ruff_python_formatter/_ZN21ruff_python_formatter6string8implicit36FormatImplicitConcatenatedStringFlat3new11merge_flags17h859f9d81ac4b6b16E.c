undefined8
_ZN21ruff_python_formatter6string8implicit36FormatImplicitConcatenatedStringFlat3new11merge_flags17h859f9d81ac4b6b16E
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  bool bVar11;
  undefined auVar12 [16];
  undefined local_e8 [16];
  ulong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulong local_98;
  undefined4 local_90;
  char local_8c;
  undefined2 local_8b;
  undefined local_89;
  undefined local_88 [16];
  undefined8 local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_d0 = param_1;
  local_c8 = param_2;
  cVar2 = (*(code *)
            PTR__ZN111__LT_ruff_python_ast__expression__StringLike_u20_as_u20_ruff_python_formatter__string__StringLikeExtensions_GT_12is_multiline17h5df9e50e5280e4acE_006bdd38
          )(&local_d0,param_3);
  if (cVar2 == '\0') {
    (*(code *)PTR__ZN15ruff_python_ast10expression10StringLike5parts17hda13f2934d2ef180E_006bdc88)
              (&local_98,&local_d0);
    auVar12 = (*(code *)
                PTR__ZN106__LT_ruff_python_ast__expression__StringLikePartIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hba4549c63691e541E_006bd710
              )(&local_98);
    local_78 = auVar12._8_8_;
    local_70 = auVar12._0_8_;
    if (local_70 != 4) {
      local_68 = local_70;
      local_60 = local_78;
      (*(code *)PTR__ZN15ruff_python_ast10expression10StringLike5parts17hda13f2934d2ef180E_006bdc88)
                (&local_58,&local_d0);
      local_a8 = local_48;
      local_b8 = local_58;
      uStack_b4 = uStack_54;
      uStack_b0 = uStack_50;
      uStack_ac = uStack_4c;
      auVar12 = (*(code *)
                  PTR__ZN106__LT_ruff_python_ast__expression__StringLikePartIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hba4549c63691e541E_006bd710
                )(&local_b8);
      puVar1 = 
      PTR__ZN15ruff_python_ast10expression14StringLikePart5flags17h96befe9c7d415d6dE_006bdee8;
      bVar3 = 2;
      if (auVar12._0_8_ != 4) {
        uVar10 = *(ulong *)(param_3 + 0x10);
        bVar11 = 2 < *(byte *)(param_3 + 0x2c);
        if (*(byte *)(param_3 + 0x2c) == 3) {
          bVar11 = 0xb < *(byte *)(param_3 + 0x2d);
        }
        local_bc = (uint)bVar11;
        local_d8 = uVar10;
        bVar3 = 2;
        do {
          local_e8 = auVar12;
          uVar6 = (*(code *)puVar1)(local_e8);
          if ((uVar6 & 2) != 0) {
            return 0;
          }
          bVar4 = (*(code *)puVar1)(local_e8);
          if (0x3f < bVar4) {
            return 0;
          }
          _ZN21ruff_python_formatter8comments8Comments16leading_trailing17h77e9c3813e95a5b3E
                    (&local_98,uVar10,local_e8._0_8_,local_e8._8_8_);
          uVar7 = _ZN4core4iter8adapters5chain17and_then_or_clear17h0306d9c31ffdfcfcE(&local_98);
          lVar8 = _ZN4core6option15Option_LT_T_GT_7or_else17h439f9799d1cf4c8bE(uVar7,local_88);
          uVar7 = local_e8._8_8_;
          if (lVar8 != 0) {
            return 0;
          }
          if (1 < (ulong)local_e8._0_8_) {
            if (local_e8._0_4_ == 2) {
              if ((int)local_d0 == 3) {
                return 0;
              }
              if ((char)local_bc != '\0') {
                uVar5 = (*(code *)
                          PTR__ZN122__LT_ruff_python_ast__nodes__AnyStringFlags_u20_as_u20_core__convert__From_LT_ruff_python_ast__nodes__FStringFlags_GT__GT_4from17hf5c3807e34bef0f1E_006be148
                        )(*(undefined4 *)(local_e8._8_8_ + 0x24));
                goto LAB_0042738f;
              }
              cVar2 = _ZN21ruff_python_formatter6string9normalize39is_fstring_with_quoted_debug_expression17h3c23dfe7f06b780aE
                                (local_e8._8_8_,param_3);
              if (cVar2 == '\0') {
                cVar2 = _ZN21ruff_python_formatter6string9normalize66is_fstring_with_triple_quoted_literal_expression_containing_quotes17h3e8a5c5d3145f36aE
                                  (*(undefined8 *)(uVar7 + 8),*(undefined8 *)(uVar7 + 0x10),param_3)
                ;
                uVar10 = local_d8;
                goto joined_r0x004273a4;
              }
            }
            else {
              uVar5 = (*(code *)
                        PTR__ZN122__LT_ruff_python_ast__nodes__AnyStringFlags_u20_as_u20_core__convert__From_LT_ruff_python_ast__nodes__TStringFlags_GT__GT_4from17h278c7bfd346f0e8cE_006be150
                      )(*(undefined4 *)(local_e8._8_8_ + 0x24));
LAB_0042738f:
              cVar2 = _ZN21ruff_python_formatter6string9normalize56is_interpolated_string_with_quoted_format_spec_and_debug17h75d1bb52bcbb9979E
                                (*(undefined8 *)(uVar7 + 8),*(undefined8 *)(uVar7 + 0x10),uVar5,
                                 param_3);
              uVar10 = local_d8;
joined_r0x004273a4:
              local_d8 = uVar10;
              if (cVar2 == '\0') goto LAB_004272dc;
            }
            uVar10 = local_d8;
            if (bVar3 != 2) {
              bVar4 = (*(code *)puVar1)(local_e8);
              if (((bVar4 ^ bVar3) & 1) != 0) {
                return 0;
              }
            }
            bVar3 = (*(code *)puVar1)(local_e8);
            bVar3 = bVar3 & 1;
          }
LAB_004272dc:
          auVar12 = (*(code *)
                      PTR__ZN106__LT_ruff_python_ast__expression__StringLikePartIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hba4549c63691e541E_006bd710
                    )(&local_b8);
        } while (auVar12._0_8_ != 4);
      }
      local_e8[0xc] = 2;
      iVar9 = (int)local_d0 << 3;
      if (bVar3 == 2) {
        cVar2 = _ZN21ruff_python_formatter6string9normalize16StringNormalizer21preferred_quote_style17h4147ade4e9a8fab6E
                          (param_3,3,local_70,local_78);
        if (cVar2 == '\x02') {
          bVar3 = (*(code *)
                    PTR__ZN15ruff_python_ast10expression14StringLikePart5flags17h96befe9c7d415d6dE_006bdee8
                  )(&local_68);
        }
        else {
          local_d8 = CONCAT71(local_d8._1_7_,cVar2);
          (*(code *)
            PTR__ZN15ruff_python_ast10expression10StringLike5parts17hda13f2934d2ef180E_006bdc88)
                    (&local_98,&local_d0);
          auVar12 = (*(code *)
                      PTR__ZN106__LT_ruff_python_ast__expression__StringLikePartIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hba4549c63691e541E_006bd710
                    )(&local_98);
          puVar1 = 
          PTR__ZN106__LT_ruff_python_ast__expression__StringLikePartIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hba4549c63691e541E_006bd710
          ;
          if (auVar12._0_8_ != 4) {
            uVar10 = local_d8 & 0xff;
            do {
              while( true ) {
                _ZN21ruff_python_formatter6string9normalize13QuoteMetadata9from_part17h0afa9ff01e69dd98E
                          (&local_40,auVar12._0_8_,auVar12._8_8_,param_3,uVar10);
                if (local_e8[0xc] == '\x02') break;
                _ZN21ruff_python_formatter6string9normalize13QuoteMetadata5merge17h66c204295fe4e704E
                          (&local_b8,&local_40,local_e8);
                if ((char)uStack_ac == '\x02') {
                  return 0;
                }
                local_e8._0_8_ = CONCAT44(uStack_b4,local_b8);
                local_e8[0xc] = (char)uStack_ac;
                local_e8._8_4_ = uStack_b0;
                local_e8._13_3_ = (int3)((uint)uStack_ac >> 8);
                auVar12 = (*(code *)puVar1)(&local_98);
                if (auVar12._0_8_ == 4) goto LAB_004274d3;
              }
              local_e8._4_4_ = uStack_3c;
              local_e8._0_4_ = local_40;
              local_e8._12_4_ = uStack_34;
              local_e8._8_4_ = uStack_38;
              auVar12 = (*(code *)puVar1)(&local_98);
            } while (auVar12._0_8_ != 4);
          }
LAB_004274d3:
          if (local_e8[0xc] == '\x02') {
            return 0;
          }
          local_90 = local_e8._8_4_;
          local_98 = local_e8._0_8_;
          local_8b = local_e8._13_2_;
          local_89 = local_e8[0xf];
          local_8c = local_e8[0xc];
          bVar3 = _ZN21ruff_python_formatter6string9normalize13QuoteMetadata6choose17hb1a9d58975495a88E
                            (&local_98,local_d8 & 0xff);
        }
      }
      (*(code *)PTR__ZN15ruff_python_ast5nodes14AnyStringFlags3new17he3ffcae652934894E_006be158)
                (0x2010003U >> ((byte)iVar9 & 0x1f) & 0xff,2,bVar3 & 1,1);
      return 1;
    }
  }
  return 0;
}