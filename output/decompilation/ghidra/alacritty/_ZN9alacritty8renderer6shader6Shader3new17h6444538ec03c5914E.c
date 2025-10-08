void _ZN9alacritty8renderer6shader6Shader3new17h6444538ec03c5914E
               (undefined8 *param_1,int param_2,long param_3,undefined8 param_4,undefined4 param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  char *pcVar2;
  int local_94;
  undefined local_90 [16];
  ulong local_80;
  undefined4 local_74;
  undefined local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar1 = 0x12;
  if (param_2 != 0) {
    uVar1 = 0x24;
  }
  local_74 = param_5;
  local_58 = param_4;
  local_50 = param_6;
  local_70 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                       (3,8,8,&PTR_s_alacritty_src_renderer_shader_rs_00983aa0);
  local_60 = 0;
                    /* try { // try from 0056381a to 00563834 has its CatchHandler @ 005639a2 */
  local_90 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                       (3,4,4,&PTR_s_alacritty_src_renderer_shader_rs_00983ab8);
  pcVar2 = "#version 330 core\n";
  if ((char)param_2 != '\0') {
    pcVar2 = "#version 100\n#define GLES2_RENDERER\n";
  }
  local_80 = 0;
                    /* try { // try from 0056385d to 005638df has its CatchHandler @ 005639a7 */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h36581b1288600654E
            (local_70,pcVar2,&PTR_s_alacritty_src_renderer_shader_rs_00983ad0);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0e3402a5d050e4a8E
            (local_90,uVar1,&PTR_s_alacritty_src_renderer_shader_rs_00983ae8);
  if (param_3 != 0) {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h36581b1288600654E
              (local_70,param_3,&PTR_s_alacritty_src_renderer_shader_rs_00983b00);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0e3402a5d050e4a8E
              (local_90,local_58,&PTR_s_alacritty_src_renderer_shader_rs_00983b18);
  }
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h36581b1288600654E
            (local_70,local_50,&PTR_s_alacritty_src_renderer_shader_rs_00983b30);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0e3402a5d050e4a8E
            (local_90,param_7,&PTR_s_alacritty_src_renderer_shader_rs_00983b48);
  uVar1 = (*(code *)_ZN9alacritty2gl7storage12CreateShader17hcd73aa42dce6e632E_0)(local_74);
  local_94 = 0;
  (*(code *)_ZN9alacritty2gl7storage12ShaderSource17h36e3f9f07e0e8e33E_0)
            (uVar1,local_80 & 0xffffffff,local_70._8_8_,local_90._8_8_);
  (*(code *)_ZN9alacritty2gl7storage13CompileShader17hc7ca431ea497331dE_0)(uVar1);
  (*(code *)_ZN9alacritty2gl7storage11GetShaderiv17h69c95f7d61f52dacE_0)(uVar1,0x8b81,&local_94);
  if (local_94 == 1) {
    *(undefined4 *)(param_1 + 1) = uVar1;
    *param_1 = 3;
  }
  else {
                    /* try { // try from 00563937 to 00563942 has its CatchHandler @ 00563990 */
    _ZN9alacritty8renderer6shader19get_shader_info_log17hdea51570b7be2ae5E(&local_48,uVar1);
    param_1[3] = local_38;
    *(undefined4 *)(param_1 + 1) = local_48;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
    *(undefined4 *)(param_1 + 2) = uStack_40;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_3c;
    *param_1 = 0;
                    /* try { // try from 0056395c to 00563962 has its CatchHandler @ 005639a7 */
    _ZN4core3ptr56drop_in_place_LT_alacritty__renderer__shader__Shader_GT_17hc79e3c62068da574E
              (uVar1);
  }
  _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_i32_GT__GT_17hfe34e1f207b818dfE
            (local_90._0_8_,local_90._8_8_);
  _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17h15d634af1a53dcfcE
            (local_70._0_8_,local_70._8_8_);
  return;
}