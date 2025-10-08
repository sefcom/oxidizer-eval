void _ZN5uu_dd14bufferedoutput14BufferedOutput13discard_cache17h60b6879c47290589E(void)

{
  undefined4 uVar1;
  long lStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  undefined auStack_68 [16];
  undefined8 *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 **ppuStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = _ZN5uu_dd4Dest13discard_cache17hb821f426c899f381E();
  lStack_88 = _ZN205__LT_core__result__Result_LT_T_C_nix__errno__consts__Errno_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h3dc615e44788f3c8E
                        (uVar1);
  ppuStack_70 = &
                PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h33bb4e8842876bc6E_0023cab0
  ;
  lStack_78 = lStack_88;
  if (lStack_88 != 0) {
    ppuStack_80 = &
                  PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h33bb4e8842876bc6E_0023cab0
    ;
    uVar1 = _ZN6uucore4mods5error6UError4code17hd9df56f05ccd0627E();
    (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00246ce0)(uVar1);
    auStack_68 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00246778)();
    puStack_58 = (undefined8 *)auStack_68;
    pcStack_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
    pcStack_40 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h07fe195a9490a30fE
    ;
    puStack_38 = &DAT_0023dd50;
    uStack_30 = 3;
    uStack_18 = 0;
    ppuStack_28 = &puStack_58;
    uStack_20 = 2;
    puStack_48 = (undefined *)&lStack_88;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00246780)(&puStack_38);
    _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h2f8fd742369c2f2bE
              (&lStack_88);
    return;
  }
  _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17haecb1dcee0b7efdaE
            (&lStack_78);
  return;
}