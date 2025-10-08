void _ZN4just14signal_handler13SignalHandler5spawn17h570faf30980efc60E
               (undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  byte extraout_DL;
  byte extraout_DL_00;
  undefined8 extraout_RDX;
  undefined local_26d;
  uint local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  uint local_260;
  undefined4 local_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 local_210;
  undefined local_208 [24];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined *local_110;
  undefined *local_108;
  
                    /* try { // try from 0038aa07 to 0038aa0b has its CatchHandler @ 0038aca1 */
  lVar2 = _ZN4just14signal_handler13SignalHandler8instance17h68aa94a07828712fE();
                    /* try { // try from 0038aa15 to 0038aa25 has its CatchHandler @ 0038ac74 */
  (*(code *)PTR__ZN3std7process7Command5spawn17haea730ea7b05a977E_00566cb8)(&local_1f0,param_2);
  if ((int)local_1f0 == 1) {
    *param_1 = 0x8000000000000000;
    param_1[1] = uStack_1e8;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  else {
    uStack_258 = uStack_1e0._4_4_;
    uStack_254 = (undefined4)local_1d8;
    uStack_250 = local_1d8._4_4_;
    local_268 = local_1f0._4_4_;
    uStack_264 = (undefined4)uStack_1e8;
    local_260 = uStack_1e8._4_4_;
    local_25c = (undefined4)uStack_1e0;
    local_26c = uStack_1e8._4_4_ >> 0x1f;
    if (-1 < uStack_1e8) {
      (*(code *)PTR_memcpy_00565e28)(&local_1f0,param_2,0xe0);
                    /* try { // try from 0038aaa5 to 0038aacc has its CatchHandler @ 0038ac7f */
      _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h09a706d466e486d9E
                (&local_110,lVar2 + 8,uStack_1e8._4_4_,&local_1f0);
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__process__Command_GT__GT_17h96bb04e57b0be99bE
                (&local_110);
                    /* try { // try from 0038aacd to 0038aad8 has its CatchHandler @ 0038ac44 */
      _ZN4core3ptr100drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_just__signal_handler__SignalHandler_GT__GT_17hf98ecd4a30a182c6E
                (lVar2,extraout_DL & 1);
      _ZN4core3ops8function2Fn4call17hf37251a2e5a30d6eE(&local_240,&local_268);
                    /* try { // try from 0038aae8 to 0038aaec has its CatchHandler @ 0038ac3f */
      lVar2 = _ZN4just14signal_handler13SignalHandler8instance17h68aa94a07828712fE();
                    /* try { // try from 0038aafd to 0038ab19 has its CatchHandler @ 0038ac59 */
      _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6remove17h0d088e6304f84304E
                (&local_1f0,lVar2 + 8,uStack_1e8._4_4_);
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__process__Command_GT__GT_17h96bb04e57b0be99bE
                (&local_1f0);
      uVar1 = *(undefined4 *)(lVar2 + 0x20);
      param_1[6] = local_210;
      *(undefined4 *)(param_1 + 4) = local_220;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_21c;
      *(undefined4 *)(param_1 + 5) = uStack_218;
      *(undefined4 *)((long)param_1 + 0x2c) = uStack_214;
      *(undefined4 *)(param_1 + 2) = local_230;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_22c;
      *(undefined4 *)(param_1 + 3) = uStack_228;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_224;
      *(undefined4 *)param_1 = local_240;
      *(undefined4 *)((long)param_1 + 4) = uStack_23c;
      *(undefined4 *)(param_1 + 1) = uStack_238;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_234;
      *(undefined4 *)(param_1 + 7) = uVar1;
      _ZN4core3ptr100drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_just__signal_handler__SignalHandler_GT__GT_17hf98ecd4a30a182c6E
                (lVar2,extraout_DL_00 & 1);
      return;
    }
    local_110 = &local_26d;
    local_108 = 
    PTR__ZN72__LT_core__num__error__TryFromIntError_u20_as_u20_core__fmt__Display_GT_3fmt17h290431c872b2642aE_00566cc0
    ;
    local_1f0 = &PTR_DAT_00530f40;
    uStack_1e8 = 1;
    local_1d0 = 0;
    uStack_1e0 = &local_110;
    local_1d8 = 1;
                    /* try { // try from 0038abc3 to 0038abf5 has its CatchHandler @ 0038ac7f */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
              (local_208,0,extraout_RDX,&local_1f0);
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf7e2634ead86a888E(local_208);
    uVar3 = (*(code *)PTR__ZN3std2io5error5Error4_new17hbf6e5d7f23cac6f9E_00566cb0)
                      (0x28,uVar3,
                       &
                       PTR__ZN4core3ptr238drop_in_place_LT_alloc__boxed__convert___LT_impl_u20_core__convert__From_LT_alloc__string__String_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Send_u2b_core__marker__Sync_GT__GT___from__StringError_GT_17h0241e8a7ff4912c4E_00530e98
                      );
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar3;
    *(undefined4 *)(param_1 + 7) = 0;
    _ZN4core3ptr40drop_in_place_LT_std__process__Child_GT_17h297edfa0c5bf1f96E(&local_268);
  }
                    /* try { // try from 0038ac19 to 0038ac24 has its CatchHandler @ 0038aca1 */
  _ZN4core3ptr100drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_just__signal_handler__SignalHandler_GT__GT_17hf98ecd4a30a182c6E
            (lVar2,extraout_DL & 1);
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h68c11017a1ebd395E(param_2);
  return;
}