undefined  [16]
_ZN11uu_truncate13file_truncate17ha430ef778d6571e6E
          (undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 **local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined local_110;
  undefined8 *local_108;
  undefined *local_100;
  undefined local_f8 [16];
  undefined8 local_e8;
  long local_e0;
  undefined local_d8;
  undefined uStack_d7;
  undefined2 uStack_d6;
  char cStack_d4;
  undefined uStack_d3;
  undefined2 uStack_d2;
  uint local_a8;
  
  _ZN3std2fs8metadata17h460bc532d18d3302E(&local_e0,param_1,param_2);
  lVar4 = 2;
  if ((local_e0 == 2) || (lVar4 = local_e0, (local_a8 & 0xf000) != 0x1000)) {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hd1c66196369792c3E
              (lVar4,CONCAT26(uStack_d2,
                              CONCAT15(uStack_d3,
                                       CONCAT14(cStack_d4,
                                                CONCAT22(uStack_d6,CONCAT11(uStack_d7,local_d8))))))
    ;
    local_e0 = 0x1b600000000;
    local_d8 = 0;
    uStack_d6 = 0;
    uStack_d3 = 0;
    uStack_d7 = 1;
    cStack_d4 = param_3;
    _ZN3std2fs11OpenOptions4open17h4717b18b07f3e237E(&local_158,&local_e0,param_1,param_2);
    if ((int)local_158 == 1) {
      cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(uStack_150);
      uVar2 = uStack_150;
      if ((param_3 == '\0') && (cVar1 == '\0')) {
                    /* try { // try from 00158fbe to 00158fc5 has its CatchHandler @ 00159033 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17ha9e3f05fa01eaf64E(uStack_150);
        uVar2 = 0;
      }
    }
    else {
      local_128 = CONCAT44(local_128._4_4_,local_158._4_4_);
                    /* try { // try from 00158fd3 to 00158fe0 has its CatchHandler @ 00159012 */
      uVar2 = (*(code *)PTR__ZN3std2fs4File7set_len17h8625c3bc8a96431dE_001ea1b8)
                        (&local_128,param_4);
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h3fd183804f862cdcE(local_158._4_4_);
    }
                    /* try { // try from 00158feb to 00158ff8 has its CatchHandler @ 00159033 */
    uVar2 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hd29365e4fd14d88eE
                      (uVar2,param_1,param_2);
    ppuVar3 = &
              PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17ha67a50cad66aa94aE_001e3e70
    ;
  }
  else {
    local_128 = 0;
    local_110 = 1;
    local_108 = &local_128;
    local_100 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001ea1b0
    ;
    local_158 = &PTR_s_cannot_open_for_writing__No_such_001e4020;
    uStack_150 = 2;
    local_138 = 0;
    local_148 = &local_108;
    local_140 = 1;
                    /* try { // try from 00158ef5 to 00158f24 has its CatchHandler @ 0015901e */
    local_120 = param_1;
    local_118 = param_2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hccc437e8064ad343E(local_f8,&local_158);
    local_140 = CONCAT44(local_140._4_4_,1);
    local_148 = (undefined8 **)local_e8;
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0fcae278b0f73f4aE(&local_158);
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hd1c66196369792c3E
              (local_e0,CONCAT26(uStack_d2,
                                 CONCAT15(uStack_d3,
                                          CONCAT14(cStack_d4,
                                                   CONCAT22(uStack_d6,CONCAT11(uStack_d7,local_d8)))
                                         )));
    ppuVar3 = &
              PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17ha44df4c1802763a0E_001e4060
    ;
  }
  auVar5._8_8_ = ppuVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}