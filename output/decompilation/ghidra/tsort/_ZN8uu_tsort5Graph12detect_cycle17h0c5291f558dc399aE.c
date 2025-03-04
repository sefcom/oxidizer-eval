void _ZN8uu_tsort5Graph12detect_cycle17h0c5291f558dc399aE(undefined4 *param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined local_60 [48];
  
  local_b8 = param_1;
  _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h4998c0ffd20ae47aE
            (local_60);
                    /* try { // try from 001b69e7 to 001b69f2 has its CatchHandler @ 001b6af7 */
  _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17h22ab93a426132a55E
            (&local_b0,*(undefined8 *)(param_2 + 0x18),0);
  local_d0 = CONCAT44(uStack_a4,uStack_a8);
  if (CONCAT44(uStack_ac,local_b0) != 0) {
                    /* try { // try from 001b6af1 to 001b6af6 has its CatchHandler @ 001b6af7 */
    uVar5 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE(local_d0,local_a0);
                    /* catch() { ... } // from try @ 001b69e7 with catch @ 001b6af7
                       catch() { ... } // from try @ 001b6af1 with catch @ 001b6af7 */
    _ZN4core3ptr72drop_in_place_LT_std__collections__hash__set__HashSet_LT__RF_str_GT__GT_17h784233dee5191ff5E
              (local_60);
    _Unwind_Resume(uVar5);
    return;
  }
  uStack_c8 = local_a0;
  local_c0 = 0;
                    /* try { // try from 001b6a1c to 001b6a28 has its CatchHandler @ 001b6afc */
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17hc8089db10f6b491bE(&local_b0,param_2);
  local_68 = local_90;
  local_78 = local_a0;
  uStack_70 = uStack_98;
  local_88 = local_b0;
  uStack_84 = uStack_ac;
  uStack_80 = uStack_a8;
  uStack_7c = uStack_a4;
  do {
    do {
                    /* try { // try from 001b6a60 to 001b6a9a has its CatchHandler @ 001b6afe */
      puVar3 = (undefined8 *)
               _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc5c7a3920db9fcf3E
                         (&local_88);
      if (puVar3 == (undefined8 *)0x0) {
                    /* try { // try from 001b6ad1 to 001b6ae9 has its CatchHandler @ 001b6afc */
                    /* WARNING: Subroutine does not return */
        _ZN4core9panicking5panic17h8c3a660c3523e4a4E
                  ("internal error: entered unreachable code",0x28,
                   &PTR_s_src_uu_tsort_src_tsort_rs_00221530);
      }
      uVar5 = *puVar3;
      uVar1 = puVar3[1];
      lVar4 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hc8a189156979c911E
                        (local_60,uVar5,uVar1);
    } while (lVar4 != 0);
    cVar2 = _ZN8uu_tsort5Graph3dfs17h6d3ff1788ece85a8E(param_2,uVar5,uVar1,local_60,&local_d0);
  } while (cVar2 == '\0');
  *(undefined8 *)(local_b8 + 4) = local_c0;
  *local_b8 = (undefined4)local_d0;
  local_b8[1] = local_d0._4_4_;
  local_b8[2] = (undefined4)uStack_c8;
  local_b8[3] = uStack_c8._4_4_;
  _ZN4core3ptr72drop_in_place_LT_std__collections__hash__set__HashSet_LT__RF_str_GT__GT_17h784233dee5191ff5E
            (local_60);
  return;
}