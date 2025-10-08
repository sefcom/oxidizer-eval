undefined  [16] _ZN6uu_who8platform4unix3Who4exec17hfa7301829d97906eE(long param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  byte extraout_DL;
  byte extraout_DL_00;
  byte bVar14;
  char *unaff_R15;
  undefined auVar15 [16];
  undefined8 ***local_3a0;
  code *local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  byte local_370;
  undefined local_368 [8];
  undefined8 local_360;
  undefined8 **local_358;
  undefined8 local_350;
  byte local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 ***local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 ***local_1b8;
  undefined *puStack_1b0;
  undefined8 local_1a8;
  
  puVar13 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
  puVar11 = (undefined8 *)(*(long *)(param_1 + 8) + 0x10);
  if (*(long *)(param_1 + 0x10) != 1) {
    puVar13 = (undefined8 *)
              PTR__ZN6uucore8features5utmpx2ut12DEFAULT_FILE17h6ad9aaf5b9ead8d5E_00205f70;
    puVar11 = (undefined8 *)
              (PTR__ZN6uucore8features5utmpx2ut12DEFAULT_FILE17h6ad9aaf5b9ead8d5E_00205f70 + 8);
  }
  if (*(char *)(param_1 + 0x19) == '\0') {
    uVar12 = _ZN6uucore8features5utmpx5Utmpx21iter_all_records_from17h4237c126b37763e3E
                       (*puVar13,*puVar11);
    bVar14 = extraout_DL_00 & 1;
    local_350 = uVar12;
    local_348 = bVar14;
    if (*(char *)(param_1 + 0x1c) != '\0') {
                    /* try { // try from 00167822 to 00167895 has its CatchHandler @ 00167afd */
      unaff_R15 = "PID";
      _ZN6uu_who8platform4unix3Who10print_line17h48873e2090b4b940E
                (param_1,&DAT_00119264,4,0x20,&DAT_001192b0,4,&DAT_00119284,4,&DAT_00119288,4,"PID",
                 3,"COMMENT",7,&DAT_001191b0,4);
    }
    cVar1 = *(char *)(param_1 + 0x26);
    if (cVar1 == '\0') {
      local_3a0 = (undefined8 ***)0x0;
      local_380 = 1;
      local_388 = 0;
    }
    else {
      _ZN6uu_who8platform4unix11current_tty17h7efed81fa6083dd7E(&local_3a0);
      local_380 = local_398;
      local_388 = local_390;
    }
    bVar2 = *(byte *)(param_1 + 0x25);
    bVar3 = *(byte *)(param_1 + 0x24);
    bVar4 = *(byte *)(param_1 + 0x1f);
    bVar5 = *(byte *)(param_1 + 0x20);
    bVar6 = *(byte *)(param_1 + 0x23);
    bVar7 = *(byte *)(param_1 + 0x22);
    bVar8 = *(byte *)(param_1 + 0x21);
    local_398 = (code *)local_380;
    local_390 = local_388;
    local_378 = uVar12;
    local_370 = bVar14;
LAB_0016793b:
    do {
      (*(code *)
        PTR__ZN93__LT_uucore__features__utmpx__UtmpxIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0874e3c7200a2adaE_00205e68
      )(&local_340,&local_378);
      if ((int)local_340 != 1) {
                    /* try { // try from 00167a8e to 00167ac9 has its CatchHandler @ 00167ad6 */
        _ZN4core3ptr55drop_in_place_LT_uucore__features__utmpx__UtmpxIter_GT_17h74db595d7cb4e6feE
                  (&local_378);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(&local_3a0);
        goto LAB_00167aa2;
      }
      (*(code *)PTR_memcpy_00205c60)(&local_1b8,(long)&local_340 + 4,0x180);
      if (cVar1 != '\0') {
                    /* try { // try from 0016796e to 00167a88 has its CatchHandler @ 00167b21 */
        (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx10tty_device17h164f6e4ca04cfddcE_00205fa8)
                  (local_368,&local_1b8);
        uVar10 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17ha23ce3230bdc0fdaE
                           (local_380,local_388,local_360,local_358);
        unaff_R15 = (char *)(ulong)uVar10;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(local_368);
        if ((char)uVar10 == '\0') goto LAB_0016793b;
      }
      if (((bVar2 & 1) == 0) ||
         (cVar9 = (*(code *)
                    PTR__ZN6uucore8features5utmpx5Utmpx15is_user_process17h30a2442fae430ce7E_00205e58
                  )(&local_1b8), cVar9 == '\0')) {
        if ((bVar3 & (short)local_1b8 == 1) == 0) {
          if ((bVar4 & (short)local_1b8 == 2) == 0) {
            if ((bVar6 & (short)local_1b8 == 3) == 0) {
              if ((bVar7 & (short)local_1b8 == 5) == 0) {
                if ((bVar8 & (short)local_1b8 == 6) == 0) {
                  if ((bVar5 & (short)local_1b8 == 8) != 0) {
                    _ZN6uu_who8platform4unix3Who15print_deadprocs17h2131ef1c65baa56aE
                              (param_1,&local_1b8);
                  }
                }
                else {
                  _ZN6uu_who8platform4unix3Who11print_login17h2c5ca408ebd3692aE(param_1,&local_1b8);
                }
              }
              else {
                _ZN6uu_who8platform4unix3Who15print_initspawn17h93d956fb414ae39cE
                          (param_1,&local_1b8);
              }
            }
            else {
              _ZN6uu_who8platform4unix3Who17print_clockchange17h290c0182533fa887E
                        (param_1,&local_1b8);
            }
          }
          else {
            _ZN6uu_who8platform4unix3Who14print_boottime17h50688022477eb7c7E(param_1,&local_1b8);
          }
        }
        else {
                    /* try { // try from 00167930 to 0016794a has its CatchHandler @ 00167b21 */
          _ZN6uu_who8platform4unix3Who14print_runlevel17h9d15e26d69ee4710E(param_1,&local_1b8);
        }
        goto LAB_0016793b;
      }
      auVar15 = _ZN6uu_who8platform4unix3Who10print_user17hb7a5018d3494c7feE(param_1,&local_1b8);
    } while (auVar15._0_8_ == 0);
    _ZN4core3ptr55drop_in_place_LT_uucore__features__utmpx__UtmpxIter_GT_17h74db595d7cb4e6feE
              (&local_378);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(&local_3a0);
  }
  else {
    uVar12 = _ZN6uucore8features5utmpx5Utmpx21iter_all_records_from17h4237c126b37763e3E
                       (*puVar13,*puVar11);
    _ZN4core4iter6traits8iterator8Iterator7collect17h1b554caae092d3aaE
              (local_368,uVar12,extraout_DL & 1);
                    /* try { // try from 0016770a to 00167716 has its CatchHandler @ 00167b0c */
    _ZN5alloc3str17join_generic_copy17h24ed4c49f35fc838E(&local_340,local_360,local_358);
    local_1a8 = local_330;
    local_3a0 = &local_1b8;
    local_398 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_340 = (undefined **)&DAT_001fef18;
    uStack_338 = 2;
    local_320 = 0;
    unaff_R15 = (char *)&local_3a0;
    local_328 = 1;
                    /* try { // try from 00167781 to 0016778b has its CatchHandler @ 00167adb */
    local_330 = (undefined8 ***)unaff_R15;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00205fa0)(&local_340);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(&local_1b8);
    local_3a0 = (undefined8 ***)local_358;
    puStack_1b0 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00205e38
    ;
    local_340 = &PTR_s___users__001fef38;
    uStack_338 = 2;
    local_320 = 0;
    local_328 = 1;
                    /* try { // try from 001677ea to 001677f4 has its CatchHandler @ 00167b0c */
    local_330 = &local_1b8;
    local_1b8 = (undefined8 ***)unaff_R15;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00205fa0)(&local_340);
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hddca066d18e15028E
              (local_368);
LAB_00167aa2:
    auVar15._8_8_ = 0;
    auVar15._0_8_ = unaff_R15;
    auVar15 = auVar15 << 0x40;
  }
  return auVar15;
}