undefined8
_ZN4just8unindent8unindent17h52c9ed21e4a911eaE(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  bool bVar13;
  undefined auVar14 [16];
  undefined auVar15 [12];
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined local_70 [16];
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  local_88 = 0;
  local_80 = 8;
  local_78 = 0;
  local_50 = param_2 + param_3;
  local_48 = 0;
  lVar12 = 0;
  local_58 = param_2;
  local_38 = param_1;
LAB_00393a21:
  while( true ) {
    auVar15 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                        (&local_58);
    uVar8 = auVar15._8_4_;
    lVar5 = auVar15._0_8_;
    lVar10 = 1;
    if (uVar8 == 10) goto LAB_00393a66;
    if (uVar8 == 0x110000) break;
    if (0x7f < uVar8) goto LAB_00393a00;
    if (lVar5 == param_3 + -1) goto LAB_00393a66;
  }
                    /* try { // try from 00393aaf to 00393ad8 has its CatchHandler @ 00393c2c */
  auVar14 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h8e8ec918cf53d1e0E
                      (local_80,local_78 * 0x10 + local_80);
  uVar11 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    uVar11 = 0;
  }
  local_70 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h4882e918a7022fbfE
                       (local_78,8,0x10,&PTR_s_src_unindent_rs_00531880);
  local_60 = 0;
  local_50 = local_78 * 0x10 + local_80;
  local_58 = local_80;
  local_48 = 0;
LAB_00393b67:
  auVar14 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1433946cae7ad1f0E
                      (&local_58);
  puVar9 = auVar14._8_8_;
  lVar12 = auVar14._0_8_;
  if (puVar9 == (undefined8 *)0x0) {
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hce1d56ed9ffb2283E
              (&local_58,local_70);
    uVar11 = local_38;
                    /* try { // try from 00393bd2 to 00393be1 has its CatchHandler @ 00393c20 */
    _ZN4core4iter6traits8iterator8Iterator7collect17h8cd5e0768337b274E(local_38,&local_58);
    _ZN4core3ptr141drop_in_place_LT_alloc__vec__Vec_LT_similar__algorithms__utils__UniqueItem_LT_similar__algorithms__utils__OffsetLookup_LT_u32_GT__GT__GT__GT_17h4d36ad61a40c2c34E
              (local_88,local_80);
    return uVar11;
  }
  uVar1 = *puVar9;
  uVar2 = puVar9[1];
  cVar4 = _ZN4just8unindent5blank17hbfd378a8e0644ce4E(uVar1,uVar2);
  if (cVar4 == '\0') {
    auVar14 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                        (uVar11,uVar1,uVar2);
    if (auVar14._0_8_ == 0) {
                    /* try { // try from 00393ba5 to 00393bbd has its CatchHandler @ 00393c31 */
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
                (uVar1,uVar2,uVar11,uVar2,&PTR_s_src_unindent_rs_00531898);
      goto LAB_00393c1e;
    }
  }
  else {
    bVar13 = lVar12 != local_78 + -1;
    puVar6 = (undefined *)0x1;
    if (lVar12 != 0 && bVar13) {
      puVar6 = &DAT_0016e198;
    }
    auVar14[8] = lVar12 != 0 && bVar13;
    auVar14._0_8_ = puVar6;
    auVar14._9_7_ = 0;
  }
                    /* try { // try from 00393b59 to 00393b66 has its CatchHandler @ 00393c2a */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6fed9915a4cca328E
            (local_70,auVar14._0_8_,auVar14._8_8_,&PTR_s_src_unindent_rs_005318b0);
  goto LAB_00393b67;
LAB_00393a00:
  uVar7 = (ulong)(uVar8 < 0x10000) | 0xfffffffffffffffc;
  if (uVar8 < 0x800) {
    uVar7 = 0xfffffffffffffffe;
  }
  if (lVar5 != uVar7 + param_3) goto LAB_00393a21;
  lVar10 = 2;
  if (0x7ff < uVar8) {
    lVar10 = 4 - (ulong)(uVar8 < 0x10000);
  }
LAB_00393a66:
  lVar10 = lVar10 + lVar5;
  auVar14 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                      (lVar12,lVar10,param_2,param_3);
  if (auVar14._0_8_ != 0) {
                    /* try { // try from 00393a85 to 00393a98 has its CatchHandler @ 00393c25 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6fed9915a4cca328E
              (&local_88,auVar14._0_8_,auVar14._8_8_,&PTR_s_src_unindent_rs_005318e0);
    lVar12 = lVar10;
    goto LAB_00393a21;
  }
                    /* try { // try from 00393c03 to 00393c1d has its CatchHandler @ 00393c2c */
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
            (param_2,param_3,lVar12,lVar10,&PTR_s_src_unindent_rs_005318c8);
LAB_00393c1e:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}