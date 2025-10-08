void _ZN9alacritty3cli13WindowOptions16config_overrides17h363042409a39fcc3E
               (undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_108;
  code *pcStack_100;
  int *piStack_f8;
  undefined *puStack_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_158 = 0;
  uStack_150 = 8;
  uStack_148 = 0;
  puStack_140 = param_1;
  if (param_3 != 0) {
    lVar1 = param_2 + param_3 * 0x18;
    do {
      lStack_160 = param_2;
      _ZN4toml2de8from_str17hb249a18d92861147E
                (&iStack_88,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
      if (iStack_88 == 2) {
        uStack_128 = (long **)CONCAT44(uStack_6c,uStack_70);
        uStack_120 = CONCAT44(uStack_64,uStack_68);
        uStack_138 = (undefined **)CONCAT44(uStack_7c,uStack_80);
        uStack_130 = CONCAT44(uStack_74,uStack_78);
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_009de2a8
        )(&iStack_88,lStack_160);
        uStack_c0 = (undefined4)uStack_128;
        uStack_bc = uStack_128._4_4_;
        uStack_b8 = (undefined4)uStack_120;
        uStack_b4 = uStack_120._4_4_;
        uStack_d0 = uStack_138;
        uStack_c8 = uStack_130;
        iStack_e8 = iStack_88;
        uStack_e4 = uStack_84;
        uStack_e0 = uStack_80;
        uStack_dc = uStack_7c;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3daab237eee37720E(&uStack_158,&iStack_e8);
      }
      else {
        uStack_98 = uStack_38;
        uStack_a8 = uStack_48;
        uStack_a0 = uStack_40;
        uStack_b8 = uStack_58;
        uStack_b4 = uStack_54;
        uStack_b0 = uStack_50;
        uStack_ac = uStack_4c;
        uStack_c8 = CONCAT44(uStack_64,uStack_68);
        uStack_c0 = uStack_60;
        uStack_bc = uStack_5c;
        uStack_d0 = (undefined **)CONCAT44(uStack_6c,uStack_70);
        iStack_e8 = iStack_88;
        uStack_e4 = uStack_84;
        uStack_e0 = uStack_80;
        uStack_dc = uStack_7c;
        plStack_108 = &lStack_160;
        pcStack_100 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h83f1bbefb10239b3E;
        puStack_f0 = 
        PTR__ZN61__LT_toml__de__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h5637888e57e7e273E_009dea90
        ;
        uStack_138 = &PTR_s_Ignoring_invalid_CLI_option_____00981658;
        uStack_130 = 3;
        uStack_118 = 0;
        uStack_128 = &plStack_108;
        uStack_120 = 2;
        piStack_f8 = &iStack_e8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_009de5d0)(&uStack_138);
        _ZN4core3ptr43drop_in_place_LT_toml__de__error__Error_GT_17h4158bf9df3d9fe37E(&iStack_e8);
      }
      param_2 = param_2 + 0x18;
    } while (param_2 != lVar1);
  }
  puStack_140[2] = uStack_148;
  *puStack_140 = uStack_158;
  puStack_140[1] = uStack_150;
  return;
}