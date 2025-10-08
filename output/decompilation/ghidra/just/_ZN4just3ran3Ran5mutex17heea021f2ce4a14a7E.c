undefined8
_ZN4just3ran3Ran5mutex17heea021f2ce4a14a7E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  byte extraout_DL;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  
  _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17h8c63bddf4155ebcfE(&local_60,param_1);
  lVar4 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0311aa5668c6c0bbE(&local_60);
                    /* try { // try from 00383286 to 003832f7 has its CatchHandler @ 00383322 */
  uVar5 = _ZN4just6recipe6Recipe8namepath17haa1c710e3a0b6f26E(param_2);
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
            (&local_60,uVar5);
  local_68 = local_50;
  local_78 = local_60;
  uStack_74 = uStack_5c;
  uStack_70 = uStack_58;
  uStack_6c = uStack_54;
  _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_5entry17h932a11fd9d9692f1E
            (&local_60,lVar4 + 8,&local_78);
  uVar5 = _ZN5alloc11collections5btree3map5entry22Entry_LT_K_C_V_C_A_GT_10or_default17h2fa49c30783bbe11E
                    (&local_60);
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h43b71247e42c11acE
            (&local_78,param_3,param_4);
  _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_5entry17h730f5e9d01a6b5c1E
            (&local_60,uVar5,&local_78);
  puVar6 = (undefined8 *)
           _ZN5alloc11collections5btree3map5entry22Entry_LT_K_C_V_C_A_GT_10or_default17hfc090e0ca736ac5aE
                     (&local_60);
  plVar2 = (long *)*puVar6;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
    uVar5 = *puVar6;
    _ZN4core3ptr100drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_just__signal_handler__SignalHandler_GT__GT_17hf98ecd4a30a182c6E
              (lVar4,extraout_DL & 1);
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}