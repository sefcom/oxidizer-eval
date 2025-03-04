long * _ZN11uu_unexpand16expand_shortcuts17he534dbf7f6ef5d0bE
                 (long *param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  undefined uVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined auVar12 [16];
  ulong local_c8;
  long lStack_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  ulong local_98;
  long lStack_90;
  long local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17h1ee9d91d0a67d274E(&local_c8,param_3,0);
  if (local_c8 != 0) {
LAB_001b203b:
    uVar9 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE();
                    /* catch() { ... } // from try @ 001b1fc0 with catch @ 001b2046 */
                    /* catch() { ... } // from try @ 001b1ea9 with catch @ 001b2048 */
                    /* try { // try from 001b204b to 001b2054 has its CatchHandler @ 001b205d */
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h62c38c538a0a74a4E
              (&local_b0);
    plVar10 = (long *)_Unwind_Resume(uVar9);
    return plVar10;
  }
  local_b0 = lStack_c0;
  lStack_a8 = local_b8;
  local_a0 = 0;
  lStack_90 = param_2 + param_3 * 0x18;
  local_98 = param_2;
  lVar6 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcb914319815ce2a7E
                    (&local_98);
  if (lVar6 != 0) {
    bVar5 = false;
    bVar2 = false;
    local_80 = param_1;
    do {
      uVar9 = *(undefined8 *)(lVar6 + 8);
      uVar1 = *(undefined8 *)(lVar6 + 0x10);
      local_c8 = local_c8 & 0xffffffff00000000;
      uVar7 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2d,&local_c8);
                    /* try { // try from 001b1ea9 to 001b1f9e has its CatchHandler @ 001b2048 */
      cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hdd1511ca1e7aacceE
                        (uVar9,uVar1,uVar7,1);
      if (cVar3 == '\0') {
LAB_001b1f50:
        _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
                  (&local_c8,lVar6);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17ha604323ce627ac89E(&local_b0,&local_c8);
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h62532d3932070b7aE
                          (uVar9,uVar1,"--all",5);
        if ((cVar3 != '\0') ||
           (cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h62532d3932070b7aE
                              (uVar9,uVar1,"-a",2), cVar3 != '\0')) {
          bVar2 = true;
        }
      }
      else {
        auVar12 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                            (uVar9,uVar1);
        lVar11 = auVar12._8_8_;
        uVar8 = auVar12._0_8_;
        if (uVar8 == 0) {
          _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                    (uVar9,uVar1,1,uVar1,&PTR_s_src_uu_unexpand_src_unexpand_rs_0021cf48);
          goto LAB_001b203b;
        }
        lStack_c0 = uVar8 + lVar11;
        local_c8 = uVar8;
        uVar4 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h4425103eb2b7f21cE(&local_c8);
        cVar3 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h354a0f58b173540aE
                          (uVar4);
        if (cVar3 == '\0') goto LAB_001b1f50;
        _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h77b0cfb9226a3587E
                  (local_68,uVar8,lVar11);
        local_78 = 0;
        local_38 = 1;
        bVar5 = true;
        local_70 = lVar11;
        _ZN4core4iter6traits8iterator8Iterator4fold17hdc2d68cddeb53a65E(&local_78,&local_b0);
      }
      lVar6 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcb914319815ce2a7E
                        (&local_98);
      param_1 = local_80;
    } while (lVar6 != 0);
    if ((bVar5) && (!bVar2)) {
                    /* try { // try from 001b1fc0 to 001b203a has its CatchHandler @ 001b2046 */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hde6101a7564f34fbE
                (&local_c8,"--first-only",0xc);
      local_88 = local_b8;
      local_98 = local_c8;
      lStack_90 = lStack_c0;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17ha604323ce627ac89E(&local_b0,&local_98);
    }
  }
  param_1[2] = local_a0;
  *param_1 = local_b0;
  param_1[1] = lStack_a8;
  return param_1;
}