void _ZN9alacritty7display7Display16highlight_damage17h3a1808b0e321020bE
               (long param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined local_52;
  undefined local_51;
  undefined8 local_48;
  int *local_40;
  long local_38;
  
  fVar1 = *(float *)(param_1 + 0x7a8);
  iVar6 = 0;
  local_80 = (int)(long)fVar1;
  if (fVar1 < 0.0) {
    local_80 = iVar6;
  }
  fVar2 = *(float *)(param_1 + 0x7ac);
  if (DAT_001edbc8 < fVar1) {
    local_80 = -1;
  }
  local_7c = (int)(long)fVar2;
  if (fVar2 < 0.0) {
    local_7c = iVar6;
  }
  fVar1 = *(float *)(param_1 + 0x7b0);
  if (DAT_001edbc8 < fVar2) {
    local_7c = -1;
  }
  local_78 = (int)(long)fVar1;
  if (fVar1 < 0.0) {
    local_78 = iVar6;
  }
  fVar3 = *(float *)(param_1 + 0x7b4);
  if (DAT_001edbc8 < fVar1) {
    local_78 = -1;
  }
  local_74 = (int)(long)fVar3;
  if (fVar3 < 0.0) {
    local_74 = 0;
  }
  fVar1 = *(float *)(param_1 + 0x7b8);
  if (DAT_001edbc8 < fVar3) {
    local_74 = 0xffffffff;
  }
  local_70 = (int)(long)fVar1;
  if (fVar1 < 0.0) {
    local_70 = 0;
  }
  fVar3 = *(float *)(param_1 + 0x7bc);
  if (DAT_001edbc8 < fVar1) {
    local_70 = 0xffffffff;
  }
  local_6c = (int)(long)fVar3;
  if (fVar3 < 0.0) {
    local_6c = iVar6;
  }
  local_90 = *(undefined8 *)(param_1 + 0x798);
  if (DAT_001edbc8 < fVar3) {
    local_6c = -1;
  }
  local_88 = local_90;
  _ZN9alacritty7display6damage13DamageTracker18shape_frame_damage17h7cbe9008dfbb19f8E
            (&local_48,param_1,&local_90);
  if (local_38 != 0) {
    iVar5 = 0x7fffffff;
    if (fVar2 <= DAT_001edecc) {
      iVar5 = (int)fVar2;
    }
    if (NAN(fVar2)) {
      iVar5 = iVar6;
    }
    piVar4 = local_40;
    do {
      local_68 = (float)*piVar4;
      fStack_64 = (float)(iVar5 - (piVar4[3] + piVar4[1]));
      fStack_60 = (float)(int)*(undefined8 *)(piVar4 + 2);
      fStack_5c = (float)(int)((ulong)*(undefined8 *)(piVar4 + 2) >> 0x20);
      local_52 = 0xff;
      local_54 = 0xff;
      local_58 = 0x3f000000;
      local_51 = 0;
                    /* try { // try from 0054f68f to 0054f69e has its CatchHandler @ 0054f6c4 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdfcf9666c620093fE
                (param_2,&local_68,&PTR_s_alacritty_src_display_mod_rs_00982818);
      piVar4 = piVar4 + 4;
    } while (piVar4 != local_40 + local_38 * 4);
  }
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_glutin__surface__Rect_GT__GT_17h23eaac4cc5abca69E
            (local_48,local_40);
  return;
}