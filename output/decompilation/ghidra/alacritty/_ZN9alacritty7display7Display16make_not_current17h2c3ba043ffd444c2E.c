void _ZN9alacritty7display7Display16make_not_current17h2c3ba043ffd444c2E(long param_1)

{
  char cVar1;
  undefined local_50 [64];
  
  cVar1 = (*(code *)
            PTR__ZN101__LT_glutin__context__PossiblyCurrentContext_u20_as_u20_glutin__context__PossiblyCurrentGlContext_GT_10is_current17hfbaab1a9cf077597E_009dfe60
          )(param_1 + 0x2a8);
  if (cVar1 != '\0') {
    (*(code *)
      PTR__ZN101__LT_glutin__context__PossiblyCurrentContext_u20_as_u20_glutin__context__PossiblyCurrentGlContext_GT_25make_not_current_in_place17h2d2fa4c8da054bfdE_009dfe68
    )(local_50,param_1 + 0x2a8);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17he18683c3aeadddaeE
              (local_50,"failed to disable context",0x19,
               &PTR_s_alacritty_src_display_mod_rs_00982538);
  }
  return;
}