undefined8
_ZN16fuel_core_keygen25display_string_discreetly17h814b2e84e256ed26E
          (undefined *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined8 local_80;
  undefined **local_78;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 local_20;
  
  local_28 = &DAT_0011c369;
  local_20 = 0x49;
  local_38 = param_1;
  local_30 = param_2;
  cVar1 = (*(code *)PTR__ZN4atty2is17h6427351b8c0467c1E_0024c860)(0);
  if (cVar1 == '\0') {
    local_78 = (undefined **)&local_38;
    local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h00fe6bed52fea939E;
    local_68 = &DAT_00244370;
    local_60 = 2;
    local_48 = 0;
    local_58 = &local_78;
    local_50 = 1;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0024c870)(&local_68);
LAB_0018baca:
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_0024c868)();
    auVar4 = _ZN7termion6screen19IntoAlternateScreen21into_alternate_screen17hdec9e23d495d24afE
                       (uVar2);
    local_80 = auVar4._8_8_;
    if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h435aa32a2df48c91E
                        (local_80);
      return uVar2;
    }
    local_78 = (undefined **)&local_38;
    local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h00fe6bed52fea939E;
    local_68 = &DAT_00244370;
    local_60 = 2;
    local_48 = 0;
    local_50 = 1;
                    /* try { // try from 0018ba5a to 0018ba75 has its CatchHandler @ 0018bb5d */
    local_58 = &local_78;
    lVar3 = _ZN3std2io5Write9write_fmt17h1e6cf89f2958cf78E(&local_80,&local_68);
    if (lVar3 == 0) {
                    /* try { // try from 0018bace to 0018bae5 has its CatchHandler @ 0018bb5d */
      lVar3 = (*(code *)
                PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_0024c878
              )(&local_80);
      if (lVar3 == 0) {
        local_78 = &local_28;
        local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h00fe6bed52fea939E;
        local_68 = &DAT_00244370;
        local_60 = 2;
        local_48 = 0;
        local_50 = 1;
                    /* try { // try from 0018bb34 to 0018bb43 has its CatchHandler @ 0018bb5d */
        local_58 = &local_78;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0024c870)(&local_68);
        _ZN16fuel_core_keygen17wait_for_keypress17h49d514a8c45c8f8fE();
        _ZN4core3ptr83drop_in_place_LT_termion__screen__AlternateScreen_LT_std__io__stdio__Stdout_GT__GT_17h986d3c16f4a0d8c7E
                  (&local_80);
        goto LAB_0018baca;
      }
      uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h435aa32a2df48c91E
                        (lVar3);
    }
    else {
      uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h435aa32a2df48c91E
                        (lVar3);
    }
    _ZN4core3ptr83drop_in_place_LT_termion__screen__AlternateScreen_LT_std__io__stdio__Stdout_GT__GT_17h986d3c16f4a0d8c7E
              (&local_80);
  }
  return uVar2;
}