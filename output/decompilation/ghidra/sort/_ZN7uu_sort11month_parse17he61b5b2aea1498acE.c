ulong _ZN7uu_sort11month_parse17he61b5b2aea1498acE(void)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined auVar6 [16];
  
  auVar6 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17ha7c02580526c77a6E();
  uVar5 = auVar6._8_8_;
  lVar3 = auVar6._0_8_;
  if (uVar5 < 4) {
    if (uVar5 != 3) {
      return 0;
    }
LAB_001d6623:
    auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (3,lVar3,uVar5);
    if (auVar6._0_8_ == 0) goto LAB_001d69d5;
    cVar2 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                      (auVar6._0_8_,auVar6._8_8_,"JAN",3);
    if (cVar2 != '\0') {
      ppuVar4 = &PTR_s_JAN_0028d3d8;
      goto LAB_001d69bf;
    }
    if (3 < uVar5) goto LAB_001d666c;
LAB_001d6672:
    auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (3,lVar3,uVar5);
    if (auVar6._0_8_ == 0) goto LAB_001d69d5;
    cVar2 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                      (auVar6._0_8_,auVar6._8_8_,"FEB",3);
    if (cVar2 != '\0') {
      ppuVar4 = &PTR_s_FEB_0028d3f0;
      goto LAB_001d69bf;
    }
    if (3 < uVar5) goto LAB_001d66bb;
LAB_001d66c1:
    auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (3,lVar3,uVar5);
    if (auVar6._0_8_ == 0) goto LAB_001d69d5;
    cVar2 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                      (auVar6._0_8_,auVar6._8_8_,"MAR",3);
    if (cVar2 != '\0') {
      ppuVar4 = &PTR_s_MAR_0028d408;
      goto LAB_001d69bf;
    }
    if (3 < uVar5) goto LAB_001d670a;
LAB_001d6710:
    auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (3,lVar3,uVar5);
    if (auVar6._0_8_ == 0) goto LAB_001d69d5;
    cVar2 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                      (auVar6._0_8_,auVar6._8_8_,"APR",3);
    if (cVar2 != '\0') {
      ppuVar4 = &PTR_s_APR_0028d420;
      goto LAB_001d69bf;
    }
    if (3 < uVar5) goto LAB_001d6759;
LAB_001d675f:
    auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (3,lVar3,uVar5);
    if (auVar6._0_8_ == 0) goto LAB_001d69d5;
    cVar2 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                      (auVar6._0_8_,auVar6._8_8_,"MAY",3);
    if (cVar2 != '\0') {
      ppuVar4 = &PTR_s_MAY_0028d438;
      goto LAB_001d69bf;
    }
    if (3 < uVar5) goto LAB_001d67a8;
LAB_001d67ae:
    auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (3,lVar3,uVar5);
    if (auVar6._0_8_ == 0) goto LAB_001d69d5;
    cVar2 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                      (auVar6._0_8_,auVar6._8_8_,"JUN",3);
    if (cVar2 != '\0') {
      ppuVar4 = &PTR_s_JUN_0028d450;
      goto LAB_001d69bf;
    }
    if (3 < uVar5) goto LAB_001d67f7;
LAB_001d67fd:
    auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (3,lVar3,uVar5);
    if (auVar6._0_8_ == 0) goto LAB_001d69d5;
    cVar2 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                      (auVar6._0_8_,auVar6._8_8_,"JUL",3);
    if (cVar2 != '\0') {
      ppuVar4 = &PTR_s_JUL_0028d468;
      goto LAB_001d69bf;
    }
    if (3 < uVar5) goto LAB_001d6846;
LAB_001d684c:
    auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (3,lVar3,uVar5);
    if (auVar6._0_8_ == 0) goto LAB_001d69d5;
    cVar2 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                      (auVar6._0_8_,auVar6._8_8_,"AUG",3);
    if (cVar2 != '\0') {
      ppuVar4 = &PTR_s_AUG_0028d480;
      goto LAB_001d69bf;
    }
    if (3 < uVar5) goto LAB_001d6895;
LAB_001d689b:
    auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (3,lVar3,uVar5);
    if (auVar6._0_8_ == 0) goto LAB_001d69d5;
    cVar2 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                      (auVar6._0_8_,auVar6._8_8_,"SEP",3);
    if (cVar2 != '\0') {
      ppuVar4 = &PTR_s_SEP_0028d498;
      goto LAB_001d69bf;
    }
    if (3 < uVar5) goto LAB_001d68e4;
LAB_001d68ea:
    auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (3,lVar3,uVar5);
    if (auVar6._0_8_ == 0) goto LAB_001d69d5;
    cVar2 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                      (auVar6._0_8_,auVar6._8_8_,"OCT",3);
    if (cVar2 != '\0') {
      ppuVar4 = &PTR_s_OCT_0028d4b0;
      goto LAB_001d69bf;
    }
    if (3 < uVar5) goto LAB_001d6933;
LAB_001d6939:
    auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (3,lVar3,uVar5);
    if (auVar6._0_8_ == 0) goto LAB_001d69d5;
    cVar2 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                      (auVar6._0_8_,auVar6._8_8_,"NOV",3);
    if (cVar2 != '\0') {
      ppuVar4 = &PTR_s_NOV_0028d4c8;
      goto LAB_001d69bf;
    }
    if (3 < uVar5) goto LAB_001d697f;
  }
  else {
    if (-0x41 < *(char *)(lVar3 + 3)) goto LAB_001d6623;
LAB_001d666c:
    if (-0x41 < *(char *)(lVar3 + 3)) goto LAB_001d6672;
LAB_001d66bb:
    if (-0x41 < *(char *)(lVar3 + 3)) goto LAB_001d66c1;
LAB_001d670a:
    if (-0x41 < *(char *)(lVar3 + 3)) goto LAB_001d6710;
LAB_001d6759:
    if (-0x41 < *(char *)(lVar3 + 3)) goto LAB_001d675f;
LAB_001d67a8:
    if (-0x41 < *(char *)(lVar3 + 3)) goto LAB_001d67ae;
LAB_001d67f7:
    if (-0x41 < *(char *)(lVar3 + 3)) goto LAB_001d67fd;
LAB_001d6846:
    if (-0x41 < *(char *)(lVar3 + 3)) goto LAB_001d684c;
LAB_001d6895:
    if (-0x41 < *(char *)(lVar3 + 3)) goto LAB_001d689b;
LAB_001d68e4:
    if (-0x41 < *(char *)(lVar3 + 3)) goto LAB_001d68ea;
LAB_001d6933:
    if (-0x41 < *(char *)(lVar3 + 3)) goto LAB_001d6939;
LAB_001d697f:
    if (*(char *)(lVar3 + 3) < -0x40) {
      return 0;
    }
  }
  auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                     (3,lVar3,uVar5);
  if (auVar6._0_8_ != 0) {
    cVar2 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                      (auVar6._0_8_,auVar6._8_8_,"DEC",3);
    if (cVar2 == '\0') {
      return 0;
    }
    ppuVar4 = &PTR_s_DEC_0028d4e0;
LAB_001d69bf:
    return (ulong)*(byte *)(ppuVar4 + 2);
  }
LAB_001d69d5:
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_002975c8)
            (lVar3,uVar5,0,3,&PTR_s_src_uu_sort_src_sort_rs_0028d4f8);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}