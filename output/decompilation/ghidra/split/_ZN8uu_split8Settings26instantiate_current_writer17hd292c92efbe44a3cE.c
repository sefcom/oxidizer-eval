void _ZN8uu_split8Settings26instantiate_current_writer17hd292c92efbe44a3cE
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  code *local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_48 [24];
  
  local_98 = param_3;
  local_90 = param_4;
  cVar1 = _ZN8uu_split8platform4unix24paths_refer_to_same_file17h8ca9878e54b136ffE
                    (*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80));
  if (cVar1 != '\0') {
    local_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h791d0a6d89386828E;
    local_78 = &PTR_s____would_overwrite_input__aborti_0020aea8;
    local_70 = 2;
    local_58 = 0;
    local_68 = &local_88;
    local_60 = 1;
    local_88 = (undefined *)&local_98;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17he9a9868ebfde35f3E(local_48,0,&local_78);
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8b7f7ad758f1175cE(local_48);
    uVar2 = (*(code *)PTR__ZN3std2io5error5Error4_new17hbf6e5d7f23cac6f9E_002120e8)
                      (0x28,uVar2,
                       &
                       PTR__ZN4core3ptr238drop_in_place_LT_alloc__boxed__convert___LT_impl_u20_core__convert__From_LT_alloc__string__String_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Send_u2b_core__marker__Sync_GT__GT___from__StringError_GT_17h0677701f86cc2b4eE_0020ad88
                      );
    param_1[1] = uVar2;
    *param_1 = 0x8000000000000000;
    return;
  }
  if (*(long *)(param_2 + 0x88) == -0x8000000000000000) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x90);
  }
  _ZN8uu_split8platform4unix26instantiate_current_writer17hfd480ac8732375abE
            (param_1,uVar2,*(undefined8 *)(param_2 + 0x98),param_3,param_4,param_5);
  return;
}