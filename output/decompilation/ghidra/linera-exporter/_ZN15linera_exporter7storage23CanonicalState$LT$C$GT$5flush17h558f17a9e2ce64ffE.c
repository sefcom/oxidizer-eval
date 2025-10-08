void _ZN15linera_exporter7storage23CanonicalState_LT_C_GT_5flush17h558f17a9e2ce64ffE
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  char local_100;
  undefined uStack_ff;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined4 uStack_f4;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  undefined2 local_e0;
  undefined6 uStack_de;
  undefined local_b8 [4];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_9c;
  undefined local_78 [24];
  undefined local_60 [32];
  undefined8 local_40;
  long local_38;
  
  lVar1 = *(long *)(param_2 + 200) + 0x10;
  _ZN5seize5guard10LocalGuard5enter17h641a2c8feab3edc9E
            (local_60,*(undefined8 *)(*(long *)(param_2 + 200) + 0x20));
                    /* try { // try from 00a10732 to 00a10771 has its CatchHandler @ 00a1083c */
  local_38 = lVar1;
  _ZN6papaya3raw24HashMap_LT_K_C_V_C_S_GT_4iter17he23f8845b55fddbeE(&local_100,lVar1,local_60);
  uStack_b0 = CONCAT22(uStack_f6,uStack_f8);
  uStack_a4 = uStack_ec;
  uStack_9c = uStack_e4;
  uStack_b4 = uStack_fc;
  uStack_ac = uStack_f4;
  _ZN4core4iter6traits8iterator8Iterator7collect17h1c3b756207202f45E(local_78,local_b8);
  _ZN119__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h024b287683c48b59E
            (&local_100,local_78);
  while( true ) {
                    /* try { // try from 00a107a0 to 00a107bd has its CatchHandler @ 00a10841 */
    _ZN116__LT_alloc__collections__btree__map__IntoIter_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h51093076c657c59fE
              (local_b8,&local_100);
    if (CONCAT44(uStack_ac,uStack_b0) == 0) break;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h435fc2949049e4f2E(param_2 + 0x98,&uStack_b0);
  }
                    /* try { // try from 00a107c0 to 00a107c9 has its CatchHandler @ 00a1083c */
  _ZN4core3ptr116drop_in_place_LT_alloc__collections__btree__map__IntoIter_LT_usize_C_linera_exporter__common__CanonicalBlock_GT__GT_17hc906fd6e9d4e02ddE
            (&local_100);
  uVar2 = 0x8000000000000014;
  _ZN4core3ptr159drop_in_place_LT_papaya__map__HashMapRef_LT_usize_C_linera_exporter__common__CanonicalBlock_C_std__hash__random__RandomState_C_seize__guard__LocalGuard_GT__GT_17h5592183aace78ce3E
            (local_40);
  _ZN97__LT_linera_views__views__log_view__LogView_LT_C_C_T_GT__u20_as_u20_linera_views__views__View_GT_5flush17hd13516b89aa8bcbdE
            (&local_100,param_2,param_3);
  if (local_100 == '\f') {
    uVar2 = 0x800000000000001c;
  }
  else {
    param_1[5] = CONCAT62(uStack_de,local_e0);
    *(ulong *)((long)param_1 + 0x1a) = CONCAT26(uStack_e8,CONCAT42(uStack_ec,uStack_ee));
    *(ulong *)((long)param_1 + 0x22) = CONCAT26(local_e0,CONCAT42(uStack_e4,uStack_e6));
    *(ulong *)((long)param_1 + 10) = CONCAT26(uStack_f8,CONCAT42(uStack_fc,uStack_fe));
    *(ulong *)((long)param_1 + 0x12) = CONCAT26(local_f0,CONCAT42(uStack_f4,uStack_f6));
    *(char *)(param_1 + 1) = local_100;
    *(undefined *)((long)param_1 + 9) = uStack_ff;
  }
  *param_1 = uVar2;
  return;
}