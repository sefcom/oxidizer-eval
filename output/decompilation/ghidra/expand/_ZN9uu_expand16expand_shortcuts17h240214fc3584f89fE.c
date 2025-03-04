void _ZN9uu_expand16expand_shortcuts17h240214fc3584f89fE(undefined8 *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
                    /* try { // try from 001b21db to 001b21e6 has its CatchHandler @ 001b23f3 */
  _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17h4fa3e7992e01de79E
            (&local_b8,*(undefined8 *)(param_2 + 0x10),0);
  local_98 = param_1;
  if (local_b8 != 0) {
                    /* try { // try from 001b23e6 to 001b23eb has its CatchHandler @ 001b23f3 */
    uVar6 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE(local_b0,local_a8);
LAB_001b23ec:
                    /* catch() { ... } // from try @ 001b2392 with catch @ 001b23ec */
    _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h793eea150b773769E
              (&local_f0);
    _Unwind_Resume(uVar6);
    return;
  }
  local_f0 = local_b0;
  uStack_e8 = local_a8;
  local_e0 = 0;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hfba173770346ed42E
            (&local_b8,param_2);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h75a5837736690158E
            (&local_90,&local_b8);
  if (CONCAT44(uStack_8c,local_90) != -0x8000000000000000) {
    do {
      local_d8 = local_90;
      uStack_d4 = uStack_8c;
      uStack_d0 = uStack_88;
      uStack_cc = uStack_84;
      local_c8 = local_80;
                    /* try { // try from 001b226c to 001b2335 has its CatchHandler @ 001b2407 */
      _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
                (&local_108,CONCAT44(uStack_84,uStack_88));
      uVar6 = local_f8;
      lVar1 = uStack_100;
      if (local_108 == 0) {
        local_108 = 0;
        uVar4 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2d,&local_108);
        cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha65bc1b4c59a7c83E
                          (lVar1,uVar6,uVar4,1);
        if (cVar2 == '\0') goto LAB_001b2350;
        auVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                           (lVar1,uVar6);
        lVar7 = auVar8._8_8_;
        lVar5 = auVar8._0_8_;
        if (lVar5 == 0) {
                    /* try { // try from 001b23c4 to 001b23de has its CatchHandler @ 001b2400 */
          uVar6 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                            (lVar1,uVar6,1,uVar6,&PTR_DAT_0021cd98);
          goto LAB_001b23ec;
        }
        uStack_100 = lVar5 + lVar7;
        local_108 = lVar5;
        uVar3 = _ZN4core4iter6traits8iterator8Iterator8try_fold17he2bcc8d1435e77c9E(&local_108);
        cVar2 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17haae63640452d575aE
                          (uVar3);
        if (cVar2 == '\0') goto LAB_001b2350;
        _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h77b0cfb9226a3587E
                  (local_68,lVar5,lVar7);
        local_78 = 0;
        local_38 = 1;
        local_70 = lVar7;
        _ZN4core4iter6traits8iterator8Iterator4fold17hb40c1509fd5bc5abE(&local_78,&local_f0);
                    /* try { // try from 001b2336 to 001b233f has its CatchHandler @ 001b23f1 */
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb2344d26e01de240E(&local_d8)
        ;
      }
      else {
LAB_001b2350:
        local_f8 = local_c8;
        local_108 = CONCAT44(uStack_d4,local_d8);
        uStack_100 = CONCAT44(uStack_cc,uStack_d0);
                    /* try { // try from 001b2363 to 001b236f has its CatchHandler @ 001b2402 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h14b381994cf5b407E(&local_f0,&local_108);
      }
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h75a5837736690158E
                (&local_90,&local_b8);
    } while (CONCAT44(uStack_8c,local_90) != -0x8000000000000000);
  }
                    /* try { // try from 001b2392 to 001b239b has its CatchHandler @ 001b23ec */
  _ZN4core3ptr86drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT_17h4d437b6322f8f627E
            (&local_b8);
  local_98[2] = local_e0;
  *local_98 = local_f0;
  local_98[1] = uStack_e8;
  return;
}