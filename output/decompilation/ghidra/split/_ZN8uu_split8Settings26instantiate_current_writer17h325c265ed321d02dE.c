undefined8 *
_ZN8uu_split8Settings26instantiate_current_writer17h325c265ed321d02dE
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  code *local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_40 [24];
  
  local_90 = param_3;
  local_88 = param_4;
  cVar1 = _ZN8uu_split8platform4unix24paths_refer_to_same_file17h083a83a0b2f9c23eE
                    (*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80));
  if (cVar1 == '\0') {
    _ZN8uu_split8platform4unix26instantiate_current_writer17h64f110ef12de1802E
              (param_1,param_2 + 0x88,param_3,param_4,param_5);
  }
  else {
    local_80 = &local_90;
    local_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h07748dddbe8bbb98E;
    local_70 = &PTR_s____would_overwrite_input__aborti_00248380;
    local_68 = 2;
    local_50 = 0;
    local_60 = &local_80;
    local_58 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha1a29b635627d471E(local_40,0,&local_70);
    uVar2 = _ZN3std2io5error5Error3new17hd2fa1afc07f95968E(0x27,local_40);
    param_1[1] = uVar2;
    *param_1 = 0x8000000000000000;
  }
  return param_1;
}