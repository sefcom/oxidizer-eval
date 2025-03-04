void _ZN11uu_unexpand4open17h29e09d4acbe1a140E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_78;
  undefined8 *local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  cVar1 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(param_2,param_3);
  if (cVar1 != '\0') {
    local_70 = &local_60;
    local_68 = 
    _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E;
    local_50 = &DAT_0021cf70;
    local_48 = 2;
    local_30 = 0;
    local_40 = &local_70;
    local_38 = 1;
    local_60 = param_2;
    local_58 = param_3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h76d79f35edc71809E(&local_90,&local_50);
    local_78 = 1;
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h94e9d4f87d516a2cE(&local_90);
    param_1[1] = uVar2;
    param_1[2] = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h2f27ede19d800715E_0021d078
    ;
LAB_001b264b:
    *param_1 = 0;
    return;
  }
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h62532d3932070b7aE
                    (param_2,param_3,"-",1);
  if (cVar1 == '\0') {
    _ZN3std2fs4File4open17h6533ca8bcbc1a3e9E(&local_50,param_2,param_3);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h1af4d7cd559368acE
              (&local_90,&local_50,param_2,param_3);
    if (local_90 != 0) {
      param_1[1] = local_90;
      param_1[2] = CONCAT44(uStack_84,local_88);
      goto LAB_001b264b;
    }
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc41914ec638acdb5E(local_88);
    ppuVar3 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35bf475b0736da6bE_0021cf90;
  }
  else {
    uVar2 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17habb3fb88f54e05c3E(uVar2);
    ppuVar3 = (undefined **)&DAT_0021cfe8;
  }
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hc296df1f2003fc99E
            (param_1,0x2000,uVar2,ppuVar3);
  return;
}