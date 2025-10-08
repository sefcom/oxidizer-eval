undefined8 _ZN11forc_crypto14display_output17h66f719bf0e2367ecE(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  undefined auVar5 [16];
  undefined8 local_80;
  undefined **local_78;
  undefined8 uStack_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 **local_48;
  code *pcStack_40;
  undefined8 **local_38;
  undefined8 **local_30;
  code *local_28;
  
                    /* try { // try from 004ce17c to 004ce1a9 has its CatchHandler @ 004ce3fe */
  (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00786640)();
  cVar1 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17h6c92f1d5ed2e2a5cE();
  if (cVar1 == '\0') {
                    /* try { // try from 004ce1e0 to 004ce239 has its CatchHandler @ 004ce3fe */
    _ZN10serde_json3ser6to_vec17h4cc2f2554692b519E(&local_78,param_1);
    local_38 = local_68;
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h231369dcb5213460E(&local_30,&local_48);
    pcStack_40 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_78 = (undefined **)&DAT_0017ab60;
    uStack_70 = 1;
    uStack_58 = 0;
    local_60 = 1;
                    /* try { // try from 004ce277 to 004ce281 has its CatchHandler @ 004ce3e5 */
    local_68 = &local_48;
    local_48 = &local_30;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00786648)(&local_78);
    pppuVar4 = &local_30;
  }
  else {
    _ZN10serde_yaml3ser9to_string17h0d4b516021a5e273E(&local_78,param_1);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h0d3f7e9a511f0351E(&local_48,&local_78);
                    /* try { // try from 004ce1aa to 004ce1d7 has its CatchHandler @ 004ce3ef */
    cVar1 = _ZN11forc_crypto17has_sensible_info17hdcf6a8a75752cdf1E(param_1);
    if (cVar1 != '\0') {
      uVar2 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00786640)();
      auVar5 = _ZN7termion6screen19IntoAlternateScreen21into_alternate_screen17hf8ad71a136e74bfcE
                         (uVar2);
      if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        local_28 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_78 = (undefined **)&DAT_0072cb98;
        uStack_70 = 2;
        uStack_58 = 0;
        local_68 = &local_30;
        local_60 = 1;
                    /* try { // try from 004ce32f to 004ce364 has its CatchHandler @ 004ce3d6 */
        local_80 = auVar5._8_8_;
        local_30 = &local_48;
        lVar3 = _ZN3std2io5Write9write_fmt17hf858b19f349b9540E(&local_80,&local_78);
        if (lVar3 == 0) {
          lVar3 = (*(code *)
                    PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_00786650
                  )(&local_80);
          if (lVar3 == 0) {
            local_78 = &PTR_s_____Do_not_share_or_lose_this_pr_0072cbb8;
            uStack_70 = 1;
            local_68 = (undefined8 **)&DAT_00000008;
            local_60 = 0;
            uStack_58 = 0;
                    /* try { // try from 004ce3b7 to 004ce3c6 has its CatchHandler @ 004ce3d6 */
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00786648)(&local_78);
            _ZN11forc_crypto17wait_for_keypress17h097f336dd4d0c55fE();
                    /* try { // try from 004ce3c7 to 004ce3d0 has its CatchHandler @ 004ce3ef */
            _ZN4core3ptr83drop_in_place_LT_termion__screen__AlternateScreen_LT_std__io__stdio__Stdout_GT__GT_17h4ccd460257eaf062E
                      (&local_80);
            goto LAB_004ce2d6;
          }
          uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h9c7952ad6d2df1efE
                            (lVar3);
        }
        else {
          uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h9c7952ad6d2df1efE
                            (lVar3);
        }
                    /* try { // try from 004ce368 to 004ce371 has its CatchHandler @ 004ce3ef */
        _ZN4core3ptr83drop_in_place_LT_termion__screen__AlternateScreen_LT_std__io__stdio__Stdout_GT__GT_17h4ccd460257eaf062E
                  (&local_80);
      }
      else {
        uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h9c7952ad6d2df1efE
                          (auVar5._8_8_);
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h194128577f2b3aedE(&local_48);
      goto LAB_004ce37c;
    }
    local_28 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_78 = (undefined **)&DAT_0072cb98;
    uStack_70 = 2;
    uStack_58 = 0;
    local_68 = &local_30;
    local_60 = 1;
                    /* try { // try from 004ce2cb to 004ce2d5 has its CatchHandler @ 004ce3ef */
    local_30 = &local_48;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00786648)(&local_78);
LAB_004ce2d6:
    pppuVar4 = &local_48;
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h194128577f2b3aedE(pppuVar4);
  uVar2 = 0;
LAB_004ce37c:
  _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17h05e5c3c511967cdaE(param_1);
  return uVar2;
}