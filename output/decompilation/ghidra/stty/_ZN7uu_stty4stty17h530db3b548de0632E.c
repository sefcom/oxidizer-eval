undefined  [16] _ZN7uu_stty4stty17h530db3b548de0632E(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined auVar8 [16];
  undefined8 *local_168;
  undefined *local_160;
  code *local_158;
  undefined **local_150;
  undefined8 local_148;
  undefined **local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined **local_c8 [3];
  undefined4 local_b0;
  undefined local_a8 [128];
  
  if (*(char *)(param_1 + 0x29) == '\0') {
    if (*(char *)(param_1 + 0x28) != '\x01') {
      uVar2 = (*(code *)
                PTR__ZN60__LT_uu_stty__Device_u20_as_u20_std__os__fd__owned__AsFd_GT_5as_fd17h63ece466c1809a3bE_001eae50
              )(param_1 + 0x18);
      _ZN3nix3sys7termios9tcgetattr17h6c2eaf1ab91c3c8aE(&local_150,uVar2);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17hd6ced1984292ee9fE(local_a8,&local_150);
      if (*(long *)(param_1 + 0x10) != 0) {
        puVar6 = *(undefined8 **)(param_1 + 8);
        puVar7 = puVar6 + *(long *)(param_1 + 0x10) * 2;
        do {
          local_168 = puVar6;
          cVar1 = _ZN7uu_stty13apply_setting17h519146f657897442E(local_a8,*puVar6,puVar6[1]);
          if (cVar1 == '\0') {
            local_158 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h73b50bfbd05958dfE;
            local_150 = &PTR_s_invalid_argument____001e2960;
            local_148 = 2;
            local_130 = 0;
            local_140 = &local_160;
            local_138 = 1;
            pppuVar4 = local_c8;
            local_160 = (undefined *)&local_168;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h151e00dca817615dE(pppuVar4,&local_150);
            local_b0 = 1;
            goto LAB_0015872c;
          }
          puVar6 = puVar6 + 2;
        } while (puVar6 != puVar7);
      }
      uVar2 = (*(code *)
                PTR__ZN60__LT_uu_stty__Device_u20_as_u20_std__os__fd__owned__AsFd_GT_5as_fd17h63ece466c1809a3bE_001eae50
              )(param_1 + 0x18);
      uVar2 = _ZN3nix3sys7termios9tcsetattr17h9180e09cf07383c4E(uVar2,local_a8);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17hec0d541a941ab66aE
                (uVar2,"Could not write terminal attributes",0x23,
                 &PTR_s_src_uu_stty_src_stty_rs_001e2a20);
      uVar3 = 0;
      goto LAB_001587b6;
    }
LAB_0015870b:
    pcVar5 = "when specifying an output style, modes may not be set";
    uVar3 = 0x35;
  }
  else {
    if (*(char *)(param_1 + 0x28) != '\x01') goto LAB_0015870b;
    pcVar5 = "the options for verbose and stty-readable output styles are mutually exclusive";
    uVar3 = 0x4e;
  }
  pppuVar4 = &local_150;
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hed2105606e4cf42eE
            (pppuVar4,pcVar5,uVar3);
  local_138 = CONCAT44(local_138._4_4_,1);
LAB_0015872c:
  uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha6383690e510e890E(pppuVar4);
LAB_001587b6:
  auVar8._8_8_ = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h16f8c4618c159aecE_001e29a0
  ;
  auVar8._0_8_ = uVar3;
  return auVar8;
}