undefined  [16]
_ZN6uu_env10EnvAppData11run_program17h150b93669ea43850E(long param_1,long param_2,char param_3)

{
  code *pcVar1;
  undefined8 *****pppppuVar2;
  undefined8 ****ppppuVar3;
  char cVar4;
  undefined4 uVar5;
  ulong extraout_RDX;
  undefined **ppuVar6;
  undefined8 *****pppppuVar7;
  undefined auVar8 [16];
  undefined8 *****local_2d0;
  code *local_2c8;
  undefined8 ****ppppuStack_2c0;
  code *local_2b8;
  undefined8 local_2b0;
  code *local_2a8;
  undefined8 ****ppppuStack_2a0;
  undefined8 ****local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 local_270;
  undefined8 ****local_268;
  undefined8 local_260;
  long local_258;
  long local_250;
  undefined8 ****local_248;
  undefined8 ****local_240;
  undefined8 ****local_238;
  code *local_230;
  undefined8 *****local_228;
  code *local_220;
  undefined8 *****local_218;
  code *local_210;
  undefined local_198 [8];
  undefined8 local_190;
  undefined8 uStack_188;
  ulong local_180;
  undefined8 local_178;
  undefined local_100 [208];
  
  local_258 = *(long *)(param_2 + 0x58);
  if (local_258 == 0) {
                    /* WARNING: Subroutine does not return */
    _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(0,0,&PTR_DAT_00248b48);
  }
  pppppuVar7 = *(undefined8 ******)(param_2 + 0x50);
  local_280 = *(undefined4 *)pppppuVar7;
  uStack_27c = *(undefined4 *)((long)pppppuVar7 + 4);
  uStack_278 = *(undefined4 *)(pppppuVar7 + 1);
  uStack_274 = *(undefined4 *)((long)pppppuVar7 + 0xc);
  local_288 = 0x8000000000000000;
                    /* try { // try from 001cdf1a to 001cdf28 has its CatchHandler @ 001ce544 */
  _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__clone__Clone_GT_5clone17hbe16e6f3cec1002dE
            (&local_2b0,&local_288);
                    /* try { // try from 001cdf3b to 001cdf47 has its CatchHandler @ 001ce549 */
  local_250 = param_1;
  _ZN3std7process7Command3new17h075a12e329d1fe67E
            (local_100,CONCAT44(uStack_27c,local_280),CONCAT44(uStack_274,uStack_278));
  local_248 = pppppuVar7 + 2;
                    /* try { // try from 001cdf58 to 001cdf96 has its CatchHandler @ 001ce54e */
  _ZN3std7process7Command4args17hea19ada20403eab5E(local_100,local_248,local_258 + -1);
  pcVar1 = *(code **)(param_2 + 0x88);
  if (pcVar1 == (code *)0x0) {
    if (param_3 == '\0') goto LAB_001ce29c;
  }
  else {
    pppppuVar2 = *(undefined8 ******)(param_2 + 0x90);
    _ZN76__LT_std__process__Command_u20_as_u20_std__os__unix__process__CommandExt_GT_4arg017h2cf9a00e306c4985E
              (local_100,pcVar1,pppppuVar2);
                    /* try { // try from 001cdf97 to 001cdfa0 has its CatchHandler @ 001ce521 */
    _ZN4core3ptr70drop_in_place_LT_alloc__borrow__Cow_LT_std__ffi__os_str__OsStr_GT__GT_17he07de9b5285c91baE
              (&local_2b0);
    local_2b0 = 0x8000000000000000;
    local_2a8 = pcVar1;
    ppppuStack_2a0 = pppppuVar2;
    if (param_3 == '\0') goto LAB_001ce29c;
    local_198 = (undefined  [8])0x1;
    local_180 = CONCAT71(local_180._1_7_,1);
    local_2d0 = (undefined8 *****)local_198;
    local_2c8 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_238 = (undefined8 ****)&PTR_DAT_00248a78;
    local_230 = (code *)0x2;
    local_218 = (undefined8 *****)0x0;
    local_228 = &local_2d0;
    local_220 = (code *)0x1;
                    /* try { // try from 001ce036 to 001ce175 has its CatchHandler @ 001ce54e */
    local_190 = pcVar1;
    uStack_188 = pppppuVar2;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_238);
  }
  local_198 = (undefined  [8])0x1;
  local_190 = (code *)CONCAT44(uStack_27c,local_280);
  uStack_188 = (undefined8 *****)CONCAT44(uStack_274,uStack_278);
  local_180 = local_180 & 0xffffffffffffff00;
  local_2c8 = _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
  ;
  local_238 = (undefined8 ****)&PTR_DAT_00248a98;
  local_230 = (code *)0x2;
  local_218 = (undefined8 *****)0x0;
  local_220 = (code *)0x1;
  local_2d0 = (undefined8 *****)local_198;
  local_228 = &local_2d0;
  _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_238);
  local_298 = (undefined8 ****)&DAT_0012496d;
  local_290 = 6;
  local_198 = (undefined  [8])&DAT_00000001;
  local_190 = local_2a8;
  uStack_188 = (undefined8 *****)ppppuStack_2a0;
  local_180 = CONCAT71(local_180._1_7_,1);
  local_2d0 = &local_298;
  local_2c8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h402b3702303fb18eE;
  local_2b8 = _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
  ;
  local_238 = (undefined8 ****)&DAT_00248ab8;
  local_230 = (code *)0x3;
  local_218 = (undefined8 ******)0x0;
  local_220 = (code *)0x2;
  ppppuStack_2c0 = (undefined8 ****)local_198;
  local_228 = &local_2d0;
  _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_238);
  pppppuVar7 = pppppuVar7 + local_258 * 2;
  local_270 = (undefined8 *****)local_248;
  local_260 = 0;
  local_268 = pppppuVar7;
  auVar8 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h90ed3a0c4574e561E
                     (&local_270);
  if (auVar8._8_8_ != 0) {
    pppppuVar7 = (undefined8 *****)local_198;
    do {
      local_240 = (undefined8 ****)(auVar8._0_8_ + 1);
      local_2c8 = (code *)*auVar8._8_8_;
      ppppuStack_2c0 = (undefined8 ****)auVar8._8_8_[1];
      local_2d0 = (undefined8 *****)&DAT_00000001;
      local_2b8 = (code *)CONCAT71(local_2b8._1_7_,1);
      local_238 = &local_298;
      local_230 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h402b3702303fb18eE;
      local_220 = 
      _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
      ;
      local_218 = &local_2d0;
      local_210 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_198 = (undefined  [8])&DAT_00248ae8;
      local_190 = (code *)0x4;
      local_178 = 0;
      uStack_188 = &local_238;
      local_180 = 3;
      local_228 = &local_240;
                    /* try { // try from 001ce285 to 001ce28a has its CatchHandler @ 001ce550 */
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(pppppuVar7);
      auVar8 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h90ed3a0c4574e561E
                         (&local_270);
    } while (auVar8._8_8_ != 0);
  }
LAB_001ce29c:
                    /* try { // try from 001ce29c to 001ce2ae has its CatchHandler @ 001ce54e */
  _ZN3std7process7Command6status17h3dc0f2a83545ac66E(&local_270,local_100);
  ppppuVar3 = local_268;
  if ((int)local_270 == 0) {
    if (local_270._4_4_ == 0) {
                    /* try { // try from 001ce46c to 001ce478 has its CatchHandler @ 001ce549 */
      _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17hce49e9d552bacf8aE(local_100);
                    /* try { // try from 001ce479 to 001ce482 has its CatchHandler @ 001ce544 */
      _ZN4core3ptr70drop_in_place_LT_alloc__borrow__Cow_LT_std__ffi__os_str__OsStr_GT__GT_17he07de9b5285c91baE
                (&local_2b0);
      _ZN4core3ptr70drop_in_place_LT_alloc__borrow__Cow_LT_std__ffi__os_str__OsStr_GT__GT_17he07de9b5285c91baE
                (&local_288);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = pppppuVar7;
      return auVar8 << 0x40;
    }
    if (((ulong)local_270 & 0x7f00000000) != 0) {
      if ('\x01' < (char)(((byte)((ulong)local_270 >> 0x20) & 0x7f) + 1)) goto LAB_001ce4b6;
      ppuVar6 = &PTR_DAT_00248b60;
      do {
                    /* try { // try from 001ce4b0 to 001ce506 has its CatchHandler @ 001ce51f */
        _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(ppuVar6);
LAB_001ce4b6:
        uVar5 = _ZN78__LT_nix__sys__signal__Signal_u20_as_u20_core__convert__TryFrom_LT_i32_GT__GT_8try_from17h02b141bd98cda8e5E
                          ();
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0b8d9f63ece7aa71E
                  (uVar5,extraout_RDX & 0xffffffff);
        _ZN3nix3sys6signal6SigSet3all17h0cec38824fe6a56aE(&local_238);
        _ZN3nix3sys6signal9SigAction3new17h7e3c376dfc3f2270E(local_198,&local_238);
        _ZN3nix3sys6signal9sigaction17haeef16a5456d4ae5E
                  (&local_238,extraout_RDX & 0xffffffff,local_198);
        _ZN3nix3sys6signal5raise17h6585bf1a9c55b1adE(extraout_RDX & 0xffffffff);
        ppuVar6 = &PTR_DAT_00248b90;
      } while( true );
    }
                    /* try { // try from 001ce320 to 001ce325 has its CatchHandler @ 001ce51f */
    auVar8 = _ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h0b17f6d5d891df77E
                       (local_270._4_4_ >> 8 & 0xff);
  }
  else {
    cVar4 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(local_268);
    if ((cVar4 == '\0') ||
       (cVar4 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(ppppuVar3), cVar4 == '\x14')) {
                    /* try { // try from 001ce2ee to 001ce2f2 has its CatchHandler @ 001ce512 */
      auVar8 = _ZN6uu_env10EnvAppData30make_error_no_such_file_or_dir17hb7f284d37785d950E
                         (*(undefined *)(local_250 + 1),CONCAT44(uStack_27c,local_280),
                          CONCAT44(uStack_274,uStack_278));
                    /* try { // try from 001ce2f3 to 001ce300 has its CatchHandler @ 001ce54e */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hd5ebd4cd57902993E(&local_268);
    }
    else {
      local_298 = ppppuVar3;
                    /* try { // try from 001ce336 to 001ce422 has its CatchHandler @ 001ce535 */
      _local_198 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_2c8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h402b3702303fb18eE;
      local_238 = (undefined8 ****)&DAT_00248978;
      local_230 = (code *)0x2;
      local_218 = (undefined8 *****)0x0;
      local_228 = &local_2d0;
      local_220 = (code *)0x1;
      local_2d0 = (undefined8 *****)local_198;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_238);
      local_198 = (undefined  [8])&local_298;
      local_190 = 
      _ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17h2c21fb8e0a153abfE;
      local_238 = (undefined8 ****)&PTR_DAT_00248b28;
      local_230 = (code *)0x2;
      local_218 = (undefined8 ******)0x0;
      local_220 = (code *)0x1;
      local_228 = (undefined8 *****)local_198;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_238);
      auVar8 = _ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h0b17f6d5d891df77E
                         (0x7e);
                    /* try { // try from 001ce423 to 001ce432 has its CatchHandler @ 001ce510 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hd5ebd4cd57902993E(&local_298);
    }
  }
                    /* try { // try from 001ce433 to 001ce43f has its CatchHandler @ 001ce549 */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17hce49e9d552bacf8aE(local_100);
                    /* try { // try from 001ce440 to 001ce449 has its CatchHandler @ 001ce544 */
  _ZN4core3ptr70drop_in_place_LT_alloc__borrow__Cow_LT_std__ffi__os_str__OsStr_GT__GT_17he07de9b5285c91baE
            (&local_2b0);
  _ZN4core3ptr70drop_in_place_LT_alloc__borrow__Cow_LT_std__ffi__os_str__OsStr_GT__GT_17he07de9b5285c91baE
            (&local_288);
  return auVar8;
}