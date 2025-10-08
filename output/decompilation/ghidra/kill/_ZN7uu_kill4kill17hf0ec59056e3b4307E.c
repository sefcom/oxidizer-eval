void _ZN7uu_kill4kill17hf0ec59056e3b4307E(undefined4 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined8 local_a0;
  undefined4 local_94;
  undefined local_90 [16];
  undefined8 *local_80;
  code *local_78;
  undefined8 *local_70;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ee050;
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      local_94 = *(undefined4 *)(param_2 + lVar3);
      uVar2 = _ZN3nix3sys6signal4kill17hae40f56929b3de6eE(local_94,param_1);
      if (uVar2 != 0x86) {
        local_a0 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17hf3c0616e28f90799E
                             ((ulong)uVar2 << 0x20 | 2,&local_94);
                    /* try { // try from 0015d97d to 0015d9fa has its CatchHandler @ 0015da19 */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ee1a0)(1);
        auVar4 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ee048)();
        local_80 = (undefined8 *)local_90;
        local_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3a9a4fe6be7cab02E;
        local_70 = &local_a0;
        local_68 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc2db305b91b5782cE
        ;
        local_60 = &DAT_001e7718;
        local_58 = 3;
        local_40 = 0;
        local_50 = &local_80;
        local_48 = 2;
        local_90 = auVar4;
        (*(code *)puVar1)(&local_60);
        _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h133e6d19fe6e02d4E
                  (local_a0);
      }
      lVar3 = lVar3 + 4;
    } while (param_3 << 2 != lVar3);
  }
  return;
}