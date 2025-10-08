undefined  [16] _ZN7uu_sort15get_leading_gen17h7fd24a66a114d51aE(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  auVar10 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h6fd1fe3819229226E();
  uVar7 = auVar10._8_8_;
  lVar5 = auVar10._0_8_;
  auVar12._0_8_ = param_2 - uVar7;
  local_88 = 0;
  local_80 = 3;
  local_78 = "inf";
  local_70 = 3;
  local_68 = &DAT_00126bbc;
  local_60 = 4;
  local_58 = "nan";
  local_50 = 3;
  auVar10 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h6d7882ddb4a96050E
                      (&local_88);
  if (auVar10._0_8_ != 0) {
    do {
      uVar8 = auVar10._8_8_;
      if (uVar8 == 0) {
LAB_001d62d2:
        auVar11 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                            (uVar8,lVar5,uVar7);
        if (auVar11._0_8_ == 0) {
          uVar6 = (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_002975c8)
                            (lVar5,uVar7,0,uVar8,&PTR_s_src_uu_sort_src_sort_rs_0028d3a8);
                    /* catch() { ... } // from try @ 001d6339 with catch @ 001d6474 */
                    /* catch() { ... } // from try @ 001d63ee with catch @ 001d6476 */
          _ZN4core3ptr85drop_in_place_LT_itertools__peek_nth__PeekNth_LT_core__str__iter__CharIndices_GT__GT_17h06b252700301dda5E
                    (&local_88);
          auVar10 = _Unwind_Resume(uVar6);
          return auVar10;
        }
        cVar4 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                          (auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,uVar8);
        if (cVar4 != '\0') {
          param_2 = uVar8 + auVar12._0_8_;
          goto LAB_001d6447;
        }
      }
      else if (uVar8 < uVar7) {
        if (-0x41 < *(char *)(lVar5 + uVar8)) goto LAB_001d62d2;
      }
      else if (uVar8 == uVar7) goto LAB_001d62d2;
      auVar10 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h6d7882ddb4a96050E
                          (&local_88);
    } while (auVar10._0_8_ != 0);
  }
  local_40 = lVar5 + uVar7;
  local_38 = 0;
  local_48 = lVar5;
  _ZN9itertools8peek_nth8peek_nth17h92859c16a2f455a1E(&local_88,&local_48);
                    /* try { // try from 001d6339 to 001d6342 has its CatchHandler @ 001d6474 */
  lVar5 = _ZN9itertools8peek_nth16PeekNth_LT_I_GT_8peek_nth17h70d91140c83045e8E(&local_88,0);
  if ((lVar5 != 0) && ((*(int *)(lVar5 + 8) == 0x2d || (*(int *)(lVar5 + 8) == 0x2b)))) {
    _ZN96__LT_itertools__peek_nth__PeekNth_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h86022b484d628b37E
              (&local_88);
  }
  auVar10 = _ZN96__LT_itertools__peek_nth__PeekNth_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h86022b484d628b37E
                      (&local_88);
  if (auVar10._8_4_ != 0x110000) {
    bVar9 = false;
    bVar3 = false;
    do {
      uVar2 = auVar10._8_4_;
      if (9 < uVar2 - 0x30) {
        if (uVar2 == 0x2e) {
          if ((bVar9) || (bVar9 = true, bVar3)) goto LAB_001d6437;
        }
        else {
                    /* try { // try from 001d63ee to 001d6416 has its CatchHandler @ 001d6476 */
          if (((uVar2 & 0xffffffdf) != 0x45) ||
             ((bVar3 || (lVar5 = _ZN9itertools8peek_nth16PeekNth_LT_I_GT_8peek_nth17h70d91140c83045e8E
                                           (&local_88,0), lVar5 == 0)))) {
LAB_001d6437:
            param_2 = auVar10._0_8_ + auVar12._0_8_;
            _ZN4core3ptr85drop_in_place_LT_itertools__peek_nth__PeekNth_LT_core__str__iter__CharIndices_GT__GT_17h06b252700301dda5E
                      (&local_88);
            goto LAB_001d6447;
          }
          iVar1 = *(int *)(lVar5 + 8);
          if ((iVar1 == 0x2d) || (iVar1 == 0x2b)) {
            lVar5 = _ZN9itertools8peek_nth16PeekNth_LT_I_GT_8peek_nth17h70d91140c83045e8E
                              (&local_88,2);
            if ((lVar5 == 0) || (9 < *(int *)(lVar5 + 8) - 0x30U)) goto LAB_001d6437;
            _ZN96__LT_itertools__peek_nth__PeekNth_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h86022b484d628b37E
                      (&local_88);
            bVar3 = true;
          }
          else {
            bVar3 = true;
            if (9 < iVar1 - 0x30U) goto LAB_001d6437;
          }
        }
      }
      auVar10 = _ZN96__LT_itertools__peek_nth__PeekNth_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h86022b484d628b37E
                          (&local_88);
    } while (auVar10._8_4_ != 0x110000);
  }
  _ZN4core3ptr85drop_in_place_LT_itertools__peek_nth__PeekNth_LT_core__str__iter__CharIndices_GT__GT_17h06b252700301dda5E
            (&local_88);
LAB_001d6447:
  auVar12._8_8_ = param_2;
  return auVar12;
}