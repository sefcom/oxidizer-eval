void _ZN7uu_kill4list17h0b8bd48cc010fd8eE(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined auVar7 [16];
  long local_a0;
  undefined **local_98;
  undefined local_90 [16];
  undefined8 *local_80;
  code *local_78;
  long *local_70;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  puVar3 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ee050;
  if (*(long *)(param_1 + 0x10) == 0) {
    _ZN7uu_kill13print_signals17h042cfab5aaca8808E();
    return;
  }
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10) * 0x18;
  lVar6 = 0;
  do {
    while( true ) {
      lVar5 = _ZN7uu_kill12print_signal17hbbda5da3d768aa27E
                        (*(undefined8 *)(lVar1 + 8 + lVar6),*(undefined8 *)(lVar1 + 0x10 + lVar6));
      if (lVar5 != 0) break;
      _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17hddf9a1b880dd3247E
                (0,&
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h68451b64ef721cd1E_001e76b0
                );
      lVar6 = lVar6 + 0x18;
      if (lVar2 == lVar6) {
        return;
      }
    }
    local_98 = &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h68451b64ef721cd1E_001e76b0
    ;
    local_a0 = lVar5;
    uVar4 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                      (lVar5);
                    /* try { // try from 0015d61d to 0015d696 has its CatchHandler @ 0015d6d5 */
    (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ee1a0)(uVar4);
    auVar7 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ee048)();
    local_80 = (undefined8 *)local_90;
    local_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3a9a4fe6be7cab02E;
    local_70 = &local_a0;
    local_68 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h5053a415acb728e8E
    ;
    local_60 = &DAT_001e7718;
    local_58 = 3;
    local_40 = 0;
    local_50 = &local_80;
    local_48 = 2;
    local_90 = auVar7;
    (*(code *)puVar3)(&local_60);
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hd18bab097a34ea48E
              (local_a0,local_98);
    lVar6 = lVar6 + 0x18;
  } while (lVar2 != lVar6);
  return;
}