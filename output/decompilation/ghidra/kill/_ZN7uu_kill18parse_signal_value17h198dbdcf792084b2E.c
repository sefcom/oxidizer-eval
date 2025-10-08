undefined8 *
_ZN7uu_kill18parse_signal_value17h198dbdcf792084b2E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined auVar3 [16];
  undefined8 *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_38 [24];
  undefined4 local_20;
  
  auVar3 = (*(code *)
             PTR__ZN6uucore8features7signals23signal_by_name_or_value17h89b982f23c5744ecE_001ee178)
                     (param_2,param_3);
  ppuVar2 = auVar3._8_8_;
  if ((auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    local_88 = 0;
    local_70 = 1;
    local_98 = &local_88;
    local_90 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001ee198
    ;
    local_68 = &DAT_001e7670;
    local_60 = 2;
    local_48 = 0;
    local_50 = 1;
    local_80 = param_2;
    local_78 = param_3;
    local_58 = (undefined *)&local_98;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h9ebb7b35ad4a5108E(local_38,&local_68);
    local_20 = 1;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4d33bae44fdeaf98E(local_38);
    ppuVar2 = &
              PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h68451b64ef721cd1E_001e76b0
    ;
  }
  else {
    uVar1 = 0;
  }
  param_1[1] = ppuVar2;
  *param_1 = uVar1;
  return param_1;
}