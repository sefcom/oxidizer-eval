undefined  [16]
_ZN6uu_env10EnvAppData11run_program17he856797d7be52ddcE(long param_1,long param_2,char param_3)

{
  undefined8 *puVar1;
  long ***ppplVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  char cVar8;
  undefined4 uVar9;
  ulong extraout_RDX;
  byte bVar10;
  undefined **ppuVar11;
  long ***ppplVar12;
  undefined auVar13 [16];
  undefined8 **local_2e0;
  code *local_2d8;
  undefined8 *local_2d0;
  undefined *local_2c8;
  undefined8 local_2c0;
  long *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 **local_2a0;
  undefined ***pppuStack_298;
  undefined ***local_290;
  long local_288;
  long **local_280;
  undefined8 local_278;
  undefined8 **local_270;
  code *local_268;
  undefined8 **local_260;
  undefined *local_258;
  undefined8 **local_250;
  undefined *local_248;
  long local_1d0;
  undefined8 *local_1c8;
  undefined local_1c0 [8];
  undefined8 **local_1b8;
  undefined ***pppuStack_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  undefined8 local_128;
  undefined8 **local_120;
  undefined ***local_118;
  undefined local_110 [224];
  
  local_288 = *(long *)(param_2 + 0x58);
  local_1d0 = param_1;
  if (local_288 == 0) {
    bVar10 = 0;
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00219388)
              (0,0,&PTR_DAT_00210ba8);
    goto LAB_00174be1;
  }
  puVar1 = *(undefined8 **)(param_2 + 0x50);
  ppplVar2 = (long ***)*puVar1;
  pppuVar3 = (undefined8 ***)puVar1[1];
  local_128 = 0x8000000000000000;
                    /* try { // try from 0017457e to 00174593 has its CatchHandler @ 00174c48 */
  local_120 = ppplVar2;
  local_118 = (undefined ***)pppuVar3;
  _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__clone__Clone_GT_5clone17h2c866a58aa2651bfE
            (&local_2a8,&local_128);
                    /* try { // try from 00174594 to 001745ab has its CatchHandler @ 00174c5c */
  local_290 = (undefined ***)pppuVar3;
  _ZN3std7process7Command3new17h7c9a3a5c27f688cbE(local_110,ppplVar2,pppuVar3);
                    /* try { // try from 001745b9 to 001747d0 has its CatchHandler @ 00174c61 */
  _ZN3std7process7Command4args17hf49502e597a82f21E(local_110,puVar1 + 2,local_288 + -1);
  ppplVar12 = *(long ****)(param_2 + 0x88);
  if (ppplVar12 == (long ***)0x0) {
    if (param_3 != '\0') goto LAB_001746aa;
  }
  else {
    pppuVar3 = *(undefined8 ****)(param_2 + 0x90);
    _ZN76__LT_std__process__Command_u20_as_u20_std__os__unix__process__CommandExt_GT_4arg017h169c3378e1fdf608E
              (local_110,ppplVar12,pppuVar3);
    _ZN4core3ptr70drop_in_place_LT_alloc__borrow__Cow_LT_std__ffi__os_str__OsStr_GT__GT_17hf18cf8a450edb385E
              (local_2a8,local_2a0);
    local_2a8 = 0x8000000000000000;
    local_2a0 = ppplVar12;
    pppuStack_298 = (undefined ***)pppuVar3;
    if (param_3 != '\0') {
      local_1c0 = (undefined  [8])0x1;
      local_1a8 = CONCAT71(local_1a8._1_7_,1);
      local_2e0 = (undefined8 **)local_1c0;
      local_2d8 = (code *)
                  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00219558
      ;
      local_270 = (undefined8 **)&PTR_DAT_00210ab8;
      local_268 = (code *)0x2;
      local_250 = (undefined8 **)0x0;
      local_260 = &local_2e0;
      local_258 = (undefined *)0x1;
      local_1b8 = ppplVar12;
      pppuStack_1b0 = (undefined ***)pppuVar3;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002191e0)(&local_270);
LAB_001746aa:
      puVar5 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00219558
      ;
      local_1c0 = (undefined  [8])0x1;
      pppuStack_1b0 = local_290;
      local_1a8 = local_1a8 & 0xffffffffffffff00;
      local_2d8 = (code *)
                  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00219558
      ;
      local_270 = (undefined8 **)&PTR_DAT_00210ad8;
      local_268 = (code *)0x2;
      local_250 = (undefined8 **)0x0;
      ppplVar12 = &local_2e0;
      local_258 = (undefined *)0x1;
      local_2e0 = (undefined8 **)local_1c0;
      local_260 = ppplVar12;
      local_1b8 = ppplVar2;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002191e0)(&local_270);
      local_280 = (long **)&DAT_0011ed0b;
      local_278 = 6;
      local_1c0 = (undefined  [8])&DAT_00000001;
      local_1b8 = local_2a0;
      pppuStack_1b0 = pppuStack_298;
      local_1a8 = CONCAT71(local_1a8._1_7_,1);
      local_2e0 = &local_280;
      local_2d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0c2ec06aa0838e92E;
      local_2c8 = puVar5;
      local_270 = (undefined8 **)&DAT_00210af8;
      local_268 = (code *)0x3;
      local_250 = (undefined8 ***)0x0;
      local_258 = (undefined *)0x2;
      local_2d0 = (undefined8 *)local_1c0;
      local_260 = ppplVar12;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002191e0)(&local_270);
      local_2b8 = puVar1 + local_288 * 2;
      local_2b0 = 0;
      local_2c0 = puVar1 + 2;
      auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h153148f6263ff6d0E
                          (&local_2c0);
      puVar6 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00219450
      ;
      puVar5 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002191e0;
      if (auVar13._8_8_ != 0) {
        ppplVar12 = (long ***)&DAT_00210b28;
        do {
          local_1c8 = (undefined8 *)(auVar13._0_8_ + 1);
          local_2d8 = (code *)*auVar13._8_8_;
          local_2d0 = (undefined8 *)auVar13._8_8_[1];
          local_2e0 = (undefined8 **)&DAT_00000001;
          local_2c8 = (undefined *)CONCAT71(local_2c8._1_7_,1);
          local_270 = &local_280;
          local_268 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0c2ec06aa0838e92E;
          local_258 = puVar6;
          local_250 = &local_2e0;
          local_248 = 
          PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00219558
          ;
          local_1c0 = (undefined  [8])&DAT_00210b28;
          local_1b8 = (long ***)0x4;
          local_1a0 = 0;
          pppuStack_1b0 = (undefined ***)&local_270;
          local_1a8 = 3;
          local_260 = &local_1c8;
                    /* try { // try from 001748d8 to 001748dc has its CatchHandler @ 00174c63 */
          (*(code *)puVar5)(local_1c0);
          auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h153148f6263ff6d0E
                              (&local_2c0);
        } while (auVar13._8_8_ != 0);
      }
    }
  }
                    /* try { // try from 001748f8 to 0017490a has its CatchHandler @ 00174c61 */
  (*(code *)PTR__ZN3std7process7Command6status17h6e1e3c5811681da5E_002195b0)(&local_2c0,local_110);
  if ((int)local_2c0 == 1) {
    local_280 = &local_2b8;
    cVar8 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_2b8);
    pppuVar7 = local_290;
    if (cVar8 == '\0') {
LAB_00174944:
                    /* try { // try from 00174950 to 00174978 has its CatchHandler @ 00174c4d */
      auVar13 = _ZN6uu_env10EnvAppData30make_error_no_such_file_or_dir17hd6612e965bb2f841E
                          (*(undefined *)(local_1d0 + 1),ppplVar2,local_290);
    }
    else {
      if (cVar8 == '\x01') {
                    /* try { // try from 0017499d to 00174b75 has its CatchHandler @ 00174c4d */
        _local_1c0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_002191d8)();
        local_2d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0c2ec06aa0838e92E;
        local_270 = (undefined8 **)&DAT_00210958;
        local_268 = (code *)0x2;
        local_250 = (undefined8 **)0x0;
        local_258 = (undefined *)0x1;
        local_2e0 = (undefined8 **)local_1c0;
        local_260 = &local_2e0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002191e0)(&local_270);
        local_1c0 = (undefined  [8])&DAT_00000001;
        pppuStack_1b0 = pppuVar7;
        local_1a8 = CONCAT71(local_1a8._1_7_,1);
        local_2d8 = (code *)
                    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00219558
        ;
        local_270 = (undefined8 **)&DAT_00210b68;
        local_268 = (code *)0x2;
        local_250 = (undefined8 ***)0x0;
        local_258 = &DAT_00000001;
        local_2e0 = (undefined8 **)local_1c0;
        local_260 = &local_2e0;
        local_1b8 = ppplVar2;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002191e0)(&local_270);
      }
      else {
        if (cVar8 == '\x14') goto LAB_00174944;
        _local_1c0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_002191d8)();
        local_2d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0c2ec06aa0838e92E;
        local_270 = (undefined8 **)&DAT_00210958;
        local_268 = (code *)0x2;
        local_250 = (undefined8 **)0x0;
        local_260 = &local_2e0;
        local_258 = (undefined *)0x1;
        local_2e0 = (undefined8 **)local_1c0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002191e0)(&local_270);
        local_1c0 = (undefined  [8])&local_280;
        local_1b8 = (undefined8 **)
                    _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h343726f25827f1d9E;
        local_270 = (undefined8 **)&PTR_DAT_00210b88;
        local_268 = (code *)0x2;
        local_250 = (undefined8 ***)0x0;
        local_258 = &DAT_00000001;
        local_260 = (undefined8 **)local_1c0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002191e0)(&local_270);
      }
      auVar13 = (*(code *)
                  PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_002195b8
                )(0x7e);
    }
  }
  else {
    if (local_2c0._4_4_ == 0) {
                    /* try { // try from 0017497e to 00174987 has its CatchHandler @ 00174c61 */
      _ZN4core3ptr97drop_in_place_LT_core__result__Result_LT_std__process__ExitStatus_C_std__io__error__Error_GT__GT_17hd3752023ff91501cE
                (&local_2c0);
                    /* try { // try from 00174988 to 00174994 has its CatchHandler @ 00174c5c */
      _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h4f4015e7e1c0b0b1E(local_110);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ppplVar12;
      auVar13 = auVar13 << 0x40;
      goto LAB_00174b9d;
    }
    bVar10 = (byte)((ulong)local_2c0 >> 0x20) & 0x7f;
    if (((ulong)local_2c0 & 0x7f00000000) != 0) {
LAB_00174be1:
      if ((char)(bVar10 + 1) < '\x02') {
        ppuVar11 = &PTR_DAT_00210bc0;
      }
      else {
        uVar9 = _ZN78__LT_nix__sys__signal__Signal_u20_as_u20_core__convert__TryFrom_LT_i32_GT__GT_8try_from17h9a35f89cbe212992E
                          ();
                    /* try { // try from 00174bef to 00174c3c has its CatchHandler @ 00174c4d */
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h4e7a9fcfafa3cdbaE
                  (uVar9,extraout_RDX & 0xffffffff);
        (*(code *)PTR__ZN3nix3sys6signal6SigSet3all17h73a1d49e20e266c3E_002195c0)(&local_270);
        _ZN3nix3sys6signal9SigAction3new17h3cd9b9e633f15c0aE(local_1c0,&local_270);
        (*(code *)PTR__ZN3nix3sys6signal9sigaction17hfba5b52838f1660dE_002195c8)
                  (&local_270,extraout_RDX & 0xffffffff,local_1c0);
        (*(code *)PTR__ZN3nix3sys6signal5raise17ha368cf497e0c8ff8E_002195d0)
                  (extraout_RDX & 0xffffffff);
        ppuVar11 = &PTR_DAT_00210bf0;
      }
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_002194b0)(ppuVar11);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    auVar13 = (*(code *)
                PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_002195b8
              )(local_2c0._4_4_ >> 8 & 0xff);
  }
                    /* try { // try from 00174b86 to 00174b8f has its CatchHandler @ 00174c61 */
  _ZN4core3ptr97drop_in_place_LT_core__result__Result_LT_std__process__ExitStatus_C_std__io__error__Error_GT__GT_17hd3752023ff91501cE
            (&local_2c0);
                    /* try { // try from 00174b90 to 00174b9c has its CatchHandler @ 00174c5c */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h4f4015e7e1c0b0b1E(local_110);
LAB_00174b9d:
  _ZN4core3ptr70drop_in_place_LT_alloc__borrow__Cow_LT_std__ffi__os_str__OsStr_GT__GT_17hf18cf8a450edb385E
            (local_2a8,local_2a0);
  _ZN4core3ptr70drop_in_place_LT_alloc__borrow__Cow_LT_std__ffi__os_str__OsStr_GT__GT_17hf18cf8a450edb385E
            (0x8000000000000000,ppplVar2);
  return auVar13;
}