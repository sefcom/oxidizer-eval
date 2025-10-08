void _ZN9alacritty8renderer6shader13ShaderProgram3new17h209704e80cfd93afE
               (long *param_1,undefined param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  _ZN9alacritty8renderer6shader6Shader3new17h6444538ec03c5914E(&local_48);
  uVar1 = uStack_40;
  if (CONCAT44(uStack_44,local_48) == 3) {
                    /* try { // try from 0056361e to 0056363b has its CatchHandler @ 00563741 */
    _ZN9alacritty8renderer6shader6Shader3new17h6444538ec03c5914E
              (&local_48,param_2,param_3,param_4,0x8b30,param_7,param_8);
    uVar2 = uStack_40;
    if (CONCAT44(uStack_44,local_48) == 3) {
      uVar3 = (*(code *)_ZN9alacritty2gl7storage13CreateProgram17h2614cabd7678c2a9E_0)();
      local_4c = 0;
      (*(code *)_ZN9alacritty2gl7storage12AttachShader17h785b6ccfbbb3b8d2E_0)(uVar3,uVar1);
      (*(code *)_ZN9alacritty2gl7storage12AttachShader17h785b6ccfbbb3b8d2E_0)(uVar3,uVar2);
      (*(code *)_ZN9alacritty2gl7storage11LinkProgram17hbaa61d8d0ce34338E_0)(uVar3);
      (*(code *)_ZN9alacritty2gl7storage12GetProgramiv17h07b84d595768eb5eE_0)
                (uVar3,0x8b82,&local_4c);
      if (local_4c == 1) {
        *(undefined4 *)(param_1 + 1) = uVar3;
        *param_1 = 3;
                    /* try { // try from 0056369f to 005636a5 has its CatchHandler @ 00563741 */
        _ZN4core3ptr56drop_in_place_LT_alacritty__renderer__shader__Shader_GT_17hc79e3c62068da574E
                  (uVar2);
      }
      else {
                    /* try { // try from 005636de to 005636ea has its CatchHandler @ 0056372d */
        _ZN9alacritty8renderer6shader20get_program_info_log17hc21cbe3cb5f50aa9E(&local_48,uVar3);
        param_1[3] = CONCAT44(uStack_34,local_38);
        *(undefined4 *)(param_1 + 1) = local_48;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
        *(undefined4 *)(param_1 + 2) = uStack_40;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_3c;
        *param_1 = 1;
                    /* try { // try from 00563705 to 0056370c has its CatchHandler @ 00563728 */
        _ZN4core3ptr63drop_in_place_LT_alacritty__renderer__shader__ShaderProgram_GT_17h64d42f895d6f13b2E
                  (uVar3);
                    /* try { // try from 0056370d to 00563713 has its CatchHandler @ 00563741 */
        _ZN4core3ptr56drop_in_place_LT_alacritty__renderer__shader__Shader_GT_17hc79e3c62068da574E
                  (uVar2);
      }
    }
    else {
      *(undefined4 *)((long)param_1 + 0x1c) = local_2c;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
      *(undefined4 *)(param_1 + 2) = local_38;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_34;
      *(undefined4 *)(param_1 + 3) = uStack_30;
      *param_1 = CONCAT44(uStack_44,local_48);
      *(undefined4 *)(param_1 + 1) = uStack_40;
    }
    _ZN4core3ptr56drop_in_place_LT_alacritty__renderer__shader__Shader_GT_17hc79e3c62068da574E
              (uVar1);
  }
  else {
    *(undefined4 *)((long)param_1 + 0x1c) = local_2c;
    *(ulong *)((long)param_1 + 0xc) = CONCAT44(local_38,uStack_3c);
    *(ulong *)((long)param_1 + 0x14) = CONCAT44(uStack_30,uStack_34);
    *param_1 = CONCAT44(uStack_44,local_48);
    *(undefined4 *)(param_1 + 1) = uStack_40;
  }
  return;
}