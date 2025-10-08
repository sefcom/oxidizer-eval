void _ZN5uu_dd5Input13discard_cache17h505abcb6f4256ec2E(void)

{
  undefined4 uVar1;
  long local_88;
  undefined **local_80;
  long local_78;
  undefined **local_70;
  undefined local_68 [16];
  undefined8 *local_58;
  code *local_50;
  undefined *local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar1 = _ZN5uu_dd6Source13discard_cache17h504f8f38f4fa8955E();
  local_88 = _ZN205__LT_core__result__Result_LT_T_C_nix__errno__consts__Errno_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h5f54743af1ac3190E
                       (uVar1);
  local_70 = &
             PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h33bb4e8842876bc6E_0023cab0
  ;
  local_78 = local_88;
  if (local_88 != 0) {
    local_80 = &
               PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h33bb4e8842876bc6E_0023cab0
    ;
    uVar1 = _ZN6uucore4mods5error6UError4code17hd9df56f05ccd0627E();
                    /* try { // try from 0018ff7c to 0018fff9 has its CatchHandler @ 0019001e */
    (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00246ce0)(uVar1);
    local_68 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00246778)();
    local_58 = (undefined8 *)local_68;
    local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
    local_40 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h07fe195a9490a30fE
    ;
    local_38 = &DAT_0023dd50;
    local_30 = 3;
    local_18 = 0;
    local_28 = &local_58;
    local_20 = 2;
    local_48 = (undefined *)&local_88;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00246780)(&local_38);
    _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h2f8fd742369c2f2bE
              (&local_88);
    return;
  }
  _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17haecb1dcee0b7efdaE
            (&local_78);
  return;
}