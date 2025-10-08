void _ZN9alacritty8renderer5rects12RectRenderer8add_rect17h35912be66eb425f4E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  undefined auVar1 [16];
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  float fVar8;
  float local_50;
  float local_4c;
  undefined local_48;
  undefined local_47;
  undefined local_46;
  undefined local_45;
  float local_44;
  float local_40;
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  undefined8 local_38;
  undefined local_30;
  undefined local_2f;
  undefined local_2e;
  undefined local_2d;
  undefined8 local_28;
  undefined local_20;
  undefined local_1f;
  undefined local_1e;
  undefined local_1d;
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  local_48 = *(undefined *)((long)param_4 + 0x14);
  local_47 = *(undefined *)((long)param_4 + 0x15);
  local_46 = *(undefined *)((long)param_4 + 0x16);
  fVar8 = 0.0;
  if (0.0 <= *(float *)(param_4 + 2) * DAT_001ed1e8) {
    fVar8 = *(float *)(param_4 + 2) * DAT_001ed1e8;
  }
  fVar2 = DAT_001ed1e8;
  if (fVar8 <= DAT_001ed1e8) {
    fVar2 = fVar8;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_4;
  auVar6._4_4_ = (int)param_2;
  auVar6._0_4_ = (int)param_1;
  auVar6._8_4_ = uVar3;
  auVar6._12_4_ = uVar4;
  auVar6 = divps(auVar5,auVar6);
  local_50 = DAT_001ebe74 + auVar6._0_4_;
  local_40 = _UNK_001e97c4 - auVar6._4_4_;
  local_38 = CONCAT44(local_40,local_50);
  local_45 = (undefined)(int)fVar2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_4[1];
  auVar1._4_4_ = (int)param_2;
  auVar1._0_4_ = (int)param_1;
  auVar1._8_4_ = uVar3;
  auVar1._12_4_ = uVar4;
  auVar6 = divps(auVar7,auVar1);
  local_44 = local_50 + auVar6._0_4_;
  local_4c = local_40 - auVar6._4_4_;
  local_28 = CONCAT44(local_4c,local_44);
  local_3c = local_48;
  local_3b = local_47;
  local_3a = local_46;
  local_39 = local_45;
  local_30 = local_48;
  local_2f = local_47;
  local_2e = local_46;
  local_2d = local_45;
  local_20 = local_48;
  local_1f = local_47;
  local_1e = local_46;
  local_1d = local_45;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he4bc558e25e20e3dE
            (param_3,&local_38,&PTR_s_alacritty_src_renderer_rects_rs_00983a10);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he4bc558e25e20e3dE
            (param_3,&local_50,&PTR_s_alacritty_src_renderer_rects_rs_00983a28);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he4bc558e25e20e3dE
            (param_3,&local_44,&PTR_s_alacritty_src_renderer_rects_rs_00983a40);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he4bc558e25e20e3dE
            (param_3,&local_44,&PTR_s_alacritty_src_renderer_rects_rs_00983a58);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he4bc558e25e20e3dE
            (param_3,&local_28,&PTR_s_alacritty_src_renderer_rects_rs_00983a70);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he4bc558e25e20e3dE
            (param_3,&local_50,&PTR_s_alacritty_src_renderer_rects_rs_00983a88);
  return;
}