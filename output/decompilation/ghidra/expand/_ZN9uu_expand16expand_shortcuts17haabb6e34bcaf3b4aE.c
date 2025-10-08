void _ZN9uu_expand16expand_shortcuts17haabb6e34bcaf3b4aE(undefined (*param_1) [16],long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char cVar7;
  undefined uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined auVar12 [16];
  ulong local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined local_d0 [16];
  undefined8 local_c0;
  undefined (*local_b8) [16];
  ulong local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined local_98 [32];
  undefined8 local_78;
  long local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  local_b8 = param_1;
                    /* try { // try from 0015cafd to 0015cb12 has its CatchHandler @ 0015cce8 */
  local_d0 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h3a04b6f3747c6499E
                       (*(undefined8 *)(param_2 + 0x10),8,0x18,
                        &PTR_s_src_uu_expand_src_expand_rs_001e8890);
  local_c0 = 0;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hd4209ef595d64ce3E
            (local_98,param_2);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h99ef4437e2b6ac53E
            (&local_b0,local_98);
  do {
    uVar6 = local_a0;
    lVar5 = local_a8;
    uVar4 = local_b0;
                    /* try { // try from 0015cbe6 to 0015cca2 has its CatchHandler @ 0015cd00 */
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001ef030)
              (&local_e8,local_a8,local_a0);
    uVar3 = local_d8;
    lVar2 = local_e0;
    if ((int)local_e8 == 1) {
LAB_0015cb90:
      local_e0 = lVar5;
      local_d8 = uVar6;
                    /* try { // try from 0015cb9e to 0015cbb4 has its CatchHandler @ 0015ccfb */
      local_e8 = uVar4;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hba119dc25a31f021E
                (local_d0,&local_e8,&PTR_s_src_uu_expand_src_expand_rs_001e88c0);
    }
    else {
      local_e8 = local_e8 & 0xffffffff00000000;
      uVar9 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2d,&local_e8);
      cVar7 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha15791ca10e43217E
                        (lVar2,uVar3,uVar9);
      if (cVar7 == '\0') goto LAB_0015cb90;
      auVar12 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                          (lVar2,uVar3);
      lVar11 = auVar12._8_8_;
      uVar10 = auVar12._0_8_;
      if (uVar10 == 0) {
                    /* try { // try from 0015ccb6 to 0015ccd0 has its CatchHandler @ 0015cd02 */
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001ef2b8)
                  (lVar2,uVar3,1,uVar3,&PTR_s_src_uu_expand_src_expand_rs_001e88a8);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_e0 = uVar10 + lVar11;
      local_e8 = uVar10;
      uVar8 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hc58996b470739c76E(&local_e8);
      cVar7 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17hbc39697378e83443E
                        (uVar8);
      if (cVar7 == '\0') goto LAB_0015cb90;
      _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
                (local_68,uVar10,lVar11);
      local_78 = 0;
      local_38 = 1;
      local_70 = lVar11;
      _ZN4core4iter6traits8iterator8Iterator4fold17hd515e644e31ad2c8E(&local_78,local_d0);
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h4c6d08edf5c75529E(uVar4,lVar5)
      ;
    }
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h99ef4437e2b6ac53E
              (&local_b0,local_98);
    if (local_b0 == 0x8000000000000000) {
                    /* try { // try from 0015cb50 to 0015cb59 has its CatchHandler @ 0015ccd3 */
      _ZN4core3ptr86drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT_17h3e5317089b1282c8E
                (local_98);
      *(undefined8 *)local_b8[1] = local_c0;
      *local_b8 = local_d0;
      return;
    }
  } while( true );
}