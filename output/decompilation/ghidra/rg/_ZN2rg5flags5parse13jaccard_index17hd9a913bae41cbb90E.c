double _ZN2rg5flags5parse13jaccard_index17hd9a913bae41cbb90E(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  undefined local_b8 [160];
  
  _ZN5alloc11collections5btree3set21BTreeSet_LT_T_C_A_GT_5union17hb196e318fe48abf4E
            (local_b8,param_1,param_2);
  uVar1 = _ZN4core4iter6traits8iterator8Iterator4fold17h8bd2d4f92aca02ceE();
  if (uVar1 >> 0x20 == 0) {
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h42251a411691c9f3E
              (0,&PTR_s_crates_core_flags_parse_rs_004eb698);
    dVar2 = (double)(long)uVar1;
  }
  else {
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h42251a411691c9f3E
              (1,&PTR_s_crates_core_flags_parse_rs_004eb698);
    dVar2 = 0.0;
  }
  _ZN5alloc11collections5btree3set21BTreeSet_LT_T_C_A_GT_12intersection17h90b0a819f1786a11E
            (local_b8,param_1,param_2);
  uVar1 = _ZN4core4iter6traits8iterator8Iterator4fold17h0df12baa6eff8548E(local_b8);
  if (uVar1 >> 0x20 == 0) {
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h42251a411691c9f3E
              (0,&PTR_s_crates_core_flags_parse_rs_004eb6b0);
    dVar3 = (double)(long)uVar1;
  }
  else {
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h42251a411691c9f3E
              (1,&PTR_s_crates_core_flags_parse_rs_004eb6b0);
    dVar3 = 0.0;
  }
  return dVar3 / dVar2;
}