void _ZN7uu_sort13FieldSelector13get_selection17hf6d6b91f1121e5faE
               (undefined (*param_1) [16],long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 unaff_R15;
  undefined8 uVar6;
  double dVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  char local_60;
  undefined7 uStack_5f;
  undefined local_58;
  undefined7 uStack_57;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_3c;
  undefined local_34;
  
  auVar10._8_8_ = param_4;
  auVar10._0_8_ = unaff_R15;
  uVar3 = 0;
  if (*(char *)(param_2 + 0x36) != '\0') {
    uVar3 = param_5;
  }
  auVar8 = _ZN7uu_sort13FieldSelector9get_range17h36eed4fe0a7f87ecE
                     (param_2,param_3,param_4,uVar3,param_6);
  auVar9 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                     (auVar8._0_8_,auVar8._8_8_,param_3,param_4);
  uVar6 = auVar9._8_8_;
  lVar2 = auVar9._0_8_;
  uVar3 = param_3;
  if (lVar2 != 0) {
    bVar1 = *(byte *)(param_2 + 0x35);
    if (bVar1 < 2) {
      local_34 = bVar1 == 1;
      local_3c = 0x2e00110000;
      _ZN7uu_sort15numeric_str_cmp7NumInfo5parse17h9568947bf0c3d82dE
                (&local_60,lVar2,uVar6,&local_3c);
      auVar8._8_8_ = local_48;
      auVar8._0_8_ = local_50;
      uVar5 = CONCAT71(uStack_5f,local_60);
      auVar10 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                          (local_50,local_48,lVar2,uVar6);
      if (auVar10._0_8_ == 0) {
        do {
          uVar3 = auVar9._8_8_;
          uVar6 = auVar9._0_8_;
          auVar9._8_8_ = uVar5;
          auVar9._0_8_ = uVar6;
          (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_002975c8)
                    (uVar6,uVar3,auVar8._0_8_,auVar8._8_8_,&PTR_s_src_uu_sort_src_sort_rs_0028d0d0);
LAB_001d3bc6:
          param_3 = auVar9._0_8_;
          ppuVar4 = &PTR_s_src_uu_sort_src_sort_rs_0028d0e8;
          auVar10 = auVar9;
LAB_001d3b9e:
          uVar5 = auVar10._8_8_;
          auVar9._8_8_ = uVar3;
          auVar9._0_8_ = auVar10._0_8_;
          (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_002975c8)
                    (param_3,uVar5,auVar8._0_8_,auVar8._8_8_,ppuVar4);
        } while( true );
      }
      *param_1 = auVar10;
      *(undefined8 *)param_1[1] = uVar5;
    }
    else if (bVar1 == 2) {
      auVar8 = _ZN7uu_sort15get_leading_gen17h7fd24a66a114d51aE(lVar2,uVar6);
      lVar2 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                        (auVar8._0_8_,auVar8._8_8_,lVar2,uVar6);
      if (lVar2 == 0) goto LAB_001d3bc6;
      dVar7 = (double)(*(code *)
                        PTR__ZN4core3num7dec2flt60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_f64_GT_8from_str17h05023748d9faa6d2E_002975c0
                      )(&local_60,lVar2);
      if (local_60 == '\0') {
        dVar7 = (double)CONCAT71(uStack_57,local_58);
        if (NAN(dVar7)) {
          lVar2 = 1;
        }
        else if (_s__00126a58 < dVar7) {
          lVar2 = 4 - (ulong)(dVar7 < _s__00126a00);
        }
        else {
          lVar2 = 2;
        }
      }
      else {
        lVar2 = 0;
      }
      *(long *)*param_1 = lVar2;
      *(double *)(*param_1 + 8) = dVar7;
      local_58 = 2;
    }
    else {
      *param_1 = auVar9;
      local_58 = 4;
    }
    param_1[1][8] = local_58;
    return;
  }
  ppuVar4 = &PTR_s_src_uu_sort_src_sort_rs_0028d0b8;
  goto LAB_001d3b9e;
}