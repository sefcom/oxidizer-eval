void _ZN2rg5flags5parse9parse_low17h35c75d00aa8b822dE(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined local_571;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  long local_538;
  long local_530;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  long local_518;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined8 local_4e8;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined *local_278;
  undefined *local_270;
  char local_3e;
  char local_1d;
  
  cVar1 = _ZN2rg6logger6Logger4init17h39afe8855839179cE();
  if (cVar1 != '\0') {
    local_278 = &local_571;
    local_270 = 
    PTR__ZN58__LT_log__SetLoggerError_u20_as_u20_core__fmt__Display_GT_3fmt17h107e5ab9e1675b66E_00527238
    ;
    local_4d8 = &PTR_s_failed_to_initialize_logger__004eb4a8;
    uStack_4d0 = 1;
    local_4b8 = 0;
    local_4c8 = &local_278;
    uStack_4c0 = 1;
    uVar2 = _ZN6anyhow9__private10format_err17hd87f3faee3401bd9E(&local_4d8);
    param_1[1] = uVar2;
    *param_1 = 4;
    return;
  }
  uVar2 = _ZN2rg5flags5parse6Parser3new17h41a0a58eaeb94208E();
  _ZN70__LT_rg__flags__lowargs__LowArgs_u20_as_u20_core__default__Default_GT_7default17hdcacbbf77242812eE
            (&local_278);
                    /* try { // try from 00353ee1 to 00354012 has its CatchHandler @ 003542d2 */
  (*(code *)PTR__ZN3std3env7args_os17h5ff0cf6a45e392f2E_00527230)(&local_570);
  local_4c8._0_4_ = SUB84(local_560,0);
  local_4c8._4_4_ = local_560._4_4_;
  uStack_4c0._0_4_ = (undefined4)uStack_558;
  uStack_4c0._4_4_ = uStack_558._4_4_;
  local_4d8._0_4_ = SUB84(local_570,0);
  local_4d8._4_4_ = local_570._4_4_;
  uStack_4d0._0_4_ = (undefined4)uStack_568;
  uStack_4d0._4_4_ = uStack_568._4_4_;
  local_4b8 = 1;
  local_548 = _ZN2rg5flags5parse6Parser5parse17h0488f37e65c7a097E(uVar2,&local_4d8,&local_278);
  if (local_548 == 0) {
    _ZN4core3ptr73drop_in_place_LT_core__result__Result_LT__LP__RP__C_anyhow__Error_GT__GT_17h7cb11f3db7529187E
              (&local_548);
    _ZN2rg5flags5parse14set_log_levels17h439e558fa954fe77E(&local_278);
    cVar1 = local_1d;
    local_1d = '\x05';
    if (cVar1 == '\x05') {
      if (local_3e != '\0') {
        uVar3 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                          (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
        if (3 < uVar3) {
          local_4d8._0_4_ = 0x4eb4b8;
          local_4d8._4_4_ = 0;
          uStack_4d0._0_4_ = 1;
          uStack_4d0._4_4_ = 0;
          local_4c8._0_4_ = 8;
          local_4c8._4_4_ = 0;
          uStack_4c0._0_4_ = 0;
          uStack_4c0._4_4_ = 0;
          local_4b8 = 0;
          local_550 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                                (&PTR_s_crates_core_flags_parse_rs_004eb4f0);
          local_570 = &DAT_001620f0;
          uStack_568 = 0x10;
          local_560 = &DAT_001620f0;
          uStack_558 = 0x10;
          _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_4d8,4,&local_570);
        }
        (*(code *)PTR_memcpy_00526658)(param_1,&local_278,0x260);
        return;
      }
                    /* try { // try from 0035404f to 00354058 has its CatchHandler @ 003542d2 */
      _ZN2rg5flags6config4args17h29f19532c97db275E(&local_548);
      if (local_538 == 0) {
                    /* try { // try from 0035411c to 003541ad has its CatchHandler @ 00354281 */
        uVar3 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                          (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
        if (3 < uVar3) {
          local_4d8._0_4_ = 0x4eb4c8;
          local_4d8._4_4_ = 0;
          uStack_4d0._0_4_ = 1;
          uStack_4d0._4_4_ = 0;
          local_4c8._0_4_ = 8;
          local_4c8._4_4_ = 0;
          uStack_4c0._0_4_ = 0;
          uStack_4c0._4_4_ = 0;
          local_4b8 = 0;
          local_550 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                                (&PTR_s_crates_core_flags_parse_rs_004eb4d8);
          local_570 = &DAT_001620f0;
          uStack_568 = 0x10;
          local_560 = &DAT_001620f0;
          uStack_558 = 0x10;
          _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_4d8,4,&local_570);
        }
        (*(code *)PTR_memcpy_00526658)(param_1,&local_278,0x260);
        _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17hdf4ecb22c21181e2E
                  (&local_548);
        return;
      }
      local_518 = local_538;
      local_528 = (undefined4)local_548;
      uStack_524 = local_548._4_4_;
      uStack_520 = uStack_540;
      uStack_51c = uStack_53c;
                    /* try { // try from 00354079 to 003540cb has its CatchHandler @ 003542b0 */
      (*(code *)PTR__ZN3std3env7args_os17h5ff0cf6a45e392f2E_00527230)(&local_4d8);
      local_4f8 = (undefined4)local_4c8;
      uStack_4f4 = local_4c8._4_4_;
      uStack_4f0 = (undefined4)uStack_4c0;
      uStack_4ec = uStack_4c0._4_4_;
      local_508 = (undefined4)local_4d8;
      uStack_504 = local_4d8._4_4_;
      uStack_500 = (undefined4)uStack_4d0;
      uStack_4fc = uStack_4d0._4_4_;
      local_4e8 = 1;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_16extend_desugared17he66b74d3c29a35b3E(&local_528,&local_508);
      _ZN70__LT_rg__flags__lowargs__LowArgs_u20_as_u20_core__default__Default_GT_7default17hdcacbbf77242812eE
                (&local_4d8);
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h67e6255c929e4e1eE
                (&local_570,&local_528);
                    /* try { // try from 003540de to 003540f0 has its CatchHandler @ 0035428b */
      local_530 = _ZN2rg5flags5parse6Parser5parse17hec8cd0d856932be5E(uVar2,&local_570,&local_4d8);
      if (local_530 == 0) {
                    /* try { // try from 003541d3 to 003541e9 has its CatchHandler @ 0035428b */
        _ZN4core3ptr73drop_in_place_LT_core__result__Result_LT__LP__RP__C_anyhow__Error_GT__GT_17h7cb11f3db7529187E
                  (&local_530);
        _ZN2rg5flags5parse14set_log_levels17h439e558fa954fe77E(&local_4d8);
        (*(code *)PTR_memcpy_00526658)(param_1,&local_4d8,0x260);
      }
      else {
        param_1[1] = local_530;
        *param_1 = 4;
        _ZN4core3ptr48drop_in_place_LT_rg__flags__lowargs__LowArgs_GT_17h7b549ec26e82ff0bE
                  (&local_4d8);
      }
    }
    else {
      *(char *)(param_1 + 1) = cVar1;
      *param_1 = 2;
    }
  }
  else {
    param_1[1] = local_548;
    *param_1 = 4;
  }
  _ZN4core3ptr48drop_in_place_LT_rg__flags__lowargs__LowArgs_GT_17h7b549ec26e82ff0bE(&local_278);
  return;
}