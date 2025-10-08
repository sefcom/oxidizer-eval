void _ZN9alacritty8renderer8platform17create_gl_surface17hef2cfe26c84c40d1E
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined4 *param_5)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined local_80 [16];
  undefined local_70 [16];
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  local_80 = (*(code *)
               PTR__ZN84__LT_glutin__context__NotCurrentContext_u20_as_u20_glutin__display__GetGlDisplay_GT_7display17h65e5dd4d2e691e41E_009e0010
             )(param_2);
                    /* try { // try from 00561f4d to 00561f55 has its CatchHandler @ 00561fed */
  local_70 = (*(code *)
               PTR__ZN82__LT_glutin__context__NotCurrentContext_u20_as_u20_glutin__config__GetGlConfig_GT_6config17hde59c67359acb4caE_009e0018
             )(param_2);
  if (param_3 == 0) {
    ppuVar2 = &PTR_s_alacritty_src_renderer_platform__00983920;
  }
  else {
    if (param_4 != 0) {
      local_50 = *param_5;
      local_3c = param_5[5];
      local_4c = param_5[1];
      uStack_48 = param_5[2];
      uStack_44 = param_5[3];
      uStack_40 = param_5[4];
      local_60[0] = 3;
      local_30 = 0;
                    /* try { // try from 00561f9c to 00561fb3 has its CatchHandler @ 00561ff2 */
      local_38 = param_3;
      local_34 = param_4;
      (*(code *)
        PTR__ZN71__LT_glutin__display__Display_u20_as_u20_glutin__display__GlDisplay_GT_21create_window_surface17h02fb618df588d39cE_009e0020
      )(param_1,local_80,local_70,local_60);
                    /* try { // try from 00561fb4 to 00561fbd has its CatchHandler @ 00561fed */
      _ZN4core3ptr43drop_in_place_LT_glutin__config__Config_GT_17h906d309ffa857007E(local_70);
      _ZN4core3ptr45drop_in_place_LT_glutin__display__Display_GT_17h28e1ec1d671b8241E(local_80);
      return;
    }
    ppuVar2 = &PTR_s_alacritty_src_renderer_platform__00983938;
  }
                    /* try { // try from 00561fe5 to 00561fea has its CatchHandler @ 00561ff2 */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_009de108)(ppuVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}