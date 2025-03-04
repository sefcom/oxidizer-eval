undefined8
_ZN11uu_truncate13file_truncate17h8689dfa8e5b80143E
          (undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 **local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined local_100;
  undefined8 *local_f8;
  code *local_f0;
  undefined local_e8 [16];
  undefined8 local_d8;
  long local_d0;
  undefined local_c8;
  undefined uStack_c7;
  undefined2 uStack_c6;
  char cStack_c4;
  undefined uStack_c3;
  undefined2 uStack_c2;
  uint local_98;
  
  _ZN3std2fs8metadata17h6368ec5e748c38e4E(&local_d0,param_1,param_2);
  if ((local_d0 == 2) || ((local_98 & 0xf000) != 0x1000)) {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hf10946d364a1ba5fE
              (local_d0,CONCAT26(uStack_c2,
                                 CONCAT15(uStack_c3,
                                          CONCAT14(cStack_c4,
                                                   CONCAT22(uStack_c6,CONCAT11(uStack_c7,local_c8)))
                                         )));
    local_d0 = 0x1b600000000;
    local_c8 = 0;
    uStack_c6 = 0;
    uStack_c3 = 0;
    uStack_c7 = 1;
    cStack_c4 = param_3;
    _ZN3std2fs11OpenOptions4open17h4c049ac57fc11c66E(&local_148,&local_d0,param_1,param_2);
    if ((int)local_148 == 0) {
      local_118 = CONCAT44(local_118._4_4_,local_148._4_4_);
                    /* try { // try from 001ad9f6 to 001ada03 has its CatchHandler @ 001ada2a */
      uVar2 = _ZN3std2fs4File7set_len17hd21acd2eeb028efbE(&local_118,param_4);
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb7323c6ad1fce92aE(local_148._4_4_);
    }
    else {
      cVar1 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(uStack_140);
      uVar2 = uStack_140;
      if ((cVar1 == '\0') && (param_3 == '\0')) {
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hbd0972a5eeb59076E(uStack_140);
        uVar2 = 0;
      }
    }
    uVar2 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hd5342900d4cb632dE
                      (uVar2,param_1,param_2);
  }
  else {
    local_118 = 0;
    local_100 = 1;
    local_f8 = &local_118;
    local_f0 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_148 = &PTR_s_cannot_open_for_writing__No_such_002165a0;
    uStack_140 = 2;
    local_128 = 0;
    local_138 = &local_f8;
    local_130 = 1;
                    /* try { // try from 001ad91f to 001ad94e has its CatchHandler @ 001ada3c */
    local_110 = param_1;
    local_108 = param_2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha526a84f6413e2dcE(local_e8,&local_148);
    local_130 = CONCAT44(local_130._4_4_,1);
    local_138 = (undefined8 **)local_d8;
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2e09ae21cbeee3ecE(&local_148);
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hf10946d364a1ba5fE
              (local_d0,CONCAT26(uStack_c2,
                                 CONCAT15(uStack_c3,
                                          CONCAT14(cStack_c4,
                                                   CONCAT22(uStack_c6,CONCAT11(uStack_c7,local_c8)))
                                         )));
  }
  return uVar2;
}