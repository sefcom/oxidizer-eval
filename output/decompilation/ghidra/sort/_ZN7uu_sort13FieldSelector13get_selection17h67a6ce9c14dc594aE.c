/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN7uu_sort13FieldSelector13get_selection17h67a6ce9c14dc594aE
               (undefined (*param_1) [16],long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 unaff_R15;
  double dVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  char local_60;
  undefined7 uStack_5f;
  undefined local_58;
  undefined7 uStack_57;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_3c;
  undefined local_34;
  
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = unaff_R15;
  auVar9._8_8_ = param_4;
  auVar9._0_8_ = param_3;
  uVar4 = 0;
  if (*(char *)(param_2 + 0x36) != '\0') {
    uVar4 = param_5;
  }
  auVar7 = _ZN7uu_sort13FieldSelector9get_range17h94d5816cf09723a2E
                     (param_2,param_3,param_4,uVar4,param_6);
  auVar8 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                     (auVar7._0_8_,auVar7._8_8_,param_3,param_4);
  uVar4 = auVar8._8_8_;
  lVar3 = auVar8._0_8_;
  if (lVar3 != 0) {
    bVar1 = *(byte *)(param_2 + 0x35);
    if (bVar1 < 2) {
      local_34 = bVar1 == 1;
      local_3c = 0x2e00110000;
      _ZN7uu_sort15numeric_str_cmp7NumInfo5parse17h2d1625adef450396E
                (&local_60,lVar3,uVar4,&local_3c);
      auVar7._8_8_ = local_48;
      auVar7._0_8_ = local_50;
      auVar2._8_8_ = CONCAT71(uStack_5f,local_60);
      auVar2._0_8_ = lVar3;
      auVar9 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                         (local_50,local_48,lVar3,uVar4);
      if (auVar9._0_8_ == 0) {
        ppuVar5 = &PTR_s_src_uu_sort_src_sort_rs_002ffaf8;
        auVar9 = auVar8;
        goto LAB_00221cbc;
      }
      *param_1 = auVar9;
      *(ulong *)param_1[1] = CONCAT71(uStack_5f,local_60);
    }
    else if (bVar1 == 2) {
      auVar7 = _ZN7uu_sort15get_leading_gen17h381fabafeef8de83E(lVar3,uVar4);
      lVar3 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                        (auVar7._0_8_,auVar7._8_8_,lVar3,uVar4);
      auVar9 = auVar8;
      if (lVar3 == 0) {
        do {
          ppuVar5 = &PTR_s_src_uu_sort_src_sort_rs_002ffb10;
          auVar2 = auVar9;
LAB_00221cbc:
          _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                    (auVar9._0_8_,auVar9._8_8_,auVar7._0_8_,auVar7._8_8_,ppuVar5);
          auVar9 = auVar2;
        } while( true );
      }
      dVar6 = (double)_ZN4core3num7dec2flt60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_f64_GT_8from_str17hfde7dd7a3aaead31E
                                (&local_60,lVar3);
      if (local_60 == '\0') {
        dVar6 = (double)CONCAT71(uStack_57,local_58);
        if (NAN(dVar6)) {
          lVar3 = 1;
        }
        else if (_s__00124208 < dVar6) {
          lVar3 = 4 - (ulong)(dVar6 < _s__00124198);
        }
        else {
          lVar3 = 2;
        }
      }
      else {
        lVar3 = 0;
      }
      *(long *)*param_1 = lVar3;
      *(double *)(*param_1 + 8) = dVar6;
      local_58 = 2;
    }
    else {
      *param_1 = auVar8;
      local_58 = 4;
    }
    param_1[1][8] = local_58;
    return;
  }
  ppuVar5 = &PTR_s_src_uu_sort_src_sort_rs_002ffae0;
  goto LAB_00221cbc;
}