void _ZN21ruff_python_formatter6string9normalize13QuoteMetadata34merge_interpolated_string_elements17h354cb7889e5fa776E
               (undefined8 *param_1,undefined4 *param_2,long param_3,undefined param_4,
               undefined8 *param_5,undefined param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined auVar10 [16];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  lVar1 = *(long *)(param_3 + 0x10);
  local_70 = param_1;
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_3 + 8);
    local_58 = *param_5;
    local_60 = param_5[1];
    local_68 = lVar2 + 8;
    lVar9 = 0;
    local_78 = param_5;
    do {
      if (*(long *)(lVar2 + lVar9) == -0x7fffffffffffffff) {
        auVar10 = _ZN57__LT_str_u20_as_u20_ruff_text_size__traits__TextSlice_GT_5slice17h2d697908481a106aE
                            (local_58,local_60,local_68 + lVar9);
        _ZN21ruff_python_formatter6string9normalize13QuoteMetadata8from_str17h18c8ad1316633cd8E
                  (&local_40,auVar10._0_8_,auVar10._8_8_,param_4,param_6);
        _ZN21ruff_python_formatter6string9normalize13QuoteMetadata5merge17h66c204295fe4e704E
                  (&local_50,&local_88,&local_40);
        uVar5 = local_50;
        uVar6 = uStack_4c;
        uVar7 = uStack_48;
        uVar8 = uStack_44;
        if ((char)uStack_44 == '\x02') {
          (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
                    ("Merge to succeed because all parts have the same flags",0x36,
                     &PTR_s_crates_ruff_python_formatter_src_0067f6e8);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        lVar3 = *(long *)(lVar2 + 0x40 + lVar9);
        uVar5 = local_88;
        uVar6 = uStack_84;
        uVar7 = uStack_80;
        uVar8 = uStack_7c;
        if (*(long *)(lVar2 + lVar9) == -0x8000000000000000 && lVar3 != 0) {
          _ZN21ruff_python_formatter6string9normalize13QuoteMetadata34merge_interpolated_string_elements17h354cb7889e5fa776E
                    (&local_40,&local_88,lVar3,param_4,local_78,param_6);
          uVar5 = local_40;
          uVar6 = uStack_3c;
          uVar7 = uStack_38;
          uVar8 = uStack_34;
        }
      }
      uStack_7c = uVar8;
      uStack_80 = uVar7;
      uStack_84 = uVar6;
      local_88 = uVar5;
      lVar9 = lVar9 + 0x50;
    } while (lVar1 * 0x50 != lVar9);
  }
  *local_70 = CONCAT44(uStack_84,local_88);
  local_70[1] = CONCAT44(uStack_7c,uStack_80);
  return;
}