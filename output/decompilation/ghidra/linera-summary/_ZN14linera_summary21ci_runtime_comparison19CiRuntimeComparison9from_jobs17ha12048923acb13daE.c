undefined8 *
_ZN14linera_summary21ci_runtime_comparison19CiRuntimeComparison9from_jobs17ha12048923acb13daE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_60 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined *local_18;
  
                    /* try { // try from 00617b30 to 00617b39 has its CatchHandler @ 00617c0d */
  _ZN14linera_summary21ci_runtime_comparison19CiRuntimeComparison12get_runtimes17h6b7aa8181dc2e971E
            (local_60);
  if (local_60[0] == 1) {
    param_1[1] = local_58;
    *param_1 = 1;
    _ZN4core3ptr76drop_in_place_LT_alloc__vec__Vec_LT_octocrab__models__workflows__Job_GT__GT_17hb6e03596ce738328E
              (param_3);
  }
  else {
    local_a0 = local_50;
    uStack_9c = uStack_4c;
    uStack_98 = uStack_48;
    uStack_94 = uStack_44;
    local_a8 = local_58;
                    /* try { // try from 00617b6c to 00617bca has its CatchHandler @ 00617bfa */
    _ZN14linera_summary21ci_runtime_comparison19CiRuntimeComparison12get_runtimes17h6b7aa8181dc2e971E
              (local_60,param_3);
    if (local_60[0] == 1) {
      param_1[1] = local_58;
      *param_1 = 1;
    }
    else {
      local_88 = local_50;
      uStack_84 = uStack_4c;
      uStack_80 = uStack_48;
      uStack_7c = uStack_44;
      local_90 = local_58;
      _ZN119__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h7a2bb3fbe1e189a0E
                (local_60,&local_90);
      local_18 = (undefined *)&local_a8;
      _ZN4core4iter6traits8iterator8Iterator7collect17hdace7d02484990c5E(&local_78,local_60);
      param_1[3] = local_68;
      *(undefined4 *)(param_1 + 1) = local_78;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_74;
      *(undefined4 *)(param_1 + 2) = uStack_70;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_6c;
      *param_1 = 0;
    }
    _ZN4core3ptr168drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT_alloc__string__String_C_alloc__collections__btree__map__BTreeMap_LT_alloc__string__String_C_u64_GT__GT__GT_17hcda09b8ef5bf9729E
              (&local_a8);
  }
  return param_1;
}