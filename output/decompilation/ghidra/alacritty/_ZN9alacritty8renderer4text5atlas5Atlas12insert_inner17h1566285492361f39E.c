void _ZN9alacritty8renderer4text5atlas5Atlas12insert_inner17h1566285492361f39E
               (undefined4 *param_1,undefined4 *param_2,long *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  long **pplVar10;
  undefined auVar11 [16];
  float fVar12;
  float fVar15;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar16 [16];
  undefined **local_e0;
  undefined8 local_d8;
  undefined local_c0 [16];
  undefined8 local_b0;
  long *local_a8;
  undefined4 *local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  long local_88;
  undefined local_80 [8];
  long *local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined *puVar8;
  ulong uVar9;
  
  uVar1 = param_2[4];
  local_48 = *(undefined8 *)(param_2 + 3);
  uStack_40 = 0;
  uVar2 = *param_2;
  iVar3 = param_2[3];
  iVar4 = *(int *)((long)param_3 + 0x2c);
  iVar5 = *(int *)(param_3 + 6);
  local_58 = *(undefined8 *)((long)param_3 + 0x2c);
  uStack_50 = 0;
  local_90 = param_4;
  (*(code *)_ZN9alacritty2gl7storage11BindTexture17h1bc957198888829cE_0)(0xde1,uVar2);
  local_88 = *param_3;
  uVar7 = 0x1908;
  if ((local_88 == 0) && (uVar7 = 0x1907, *(char *)(param_2 + 6) == '\x01')) {
    uVar9 = param_3[3];
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar9;
    local_a0 = param_2;
    local_98 = param_1;
    local_c0 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                         (SUB168(auVar16 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2 & 0xfffffffffffffffc,1
                          ,1,&PTR_s_alacritty_src_renderer_text_atla_00983bc0);
    local_b0 = 0;
    local_a8 = param_3;
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_12chunks_exact17h30b3f8b4dacb9967E
              (local_80,param_3[2],uVar9);
    local_e0 = &PTR_s_alacritty_src_renderer_text_atla_00983bd8;
    local_d8 = 0;
    while( true ) {
      auVar16 = _ZN98__LT_core__slice__iter__ChunksExact_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h190b9675d345e3acE
                          (local_80);
      uVar9 = auVar16._8_8_;
      puVar8 = auVar16._0_8_;
      if (puVar8 == (undefined *)0x0) break;
      if (uVar9 == 0) {
LAB_00564122:
                    /* try { // try from 00564122 to 00564134 has its CatchHandler @ 00564137 */
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                  (local_d8,local_d8,local_e0);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
                    /* try { // try from 00563f75 to 00563fc9 has its CatchHandler @ 00564139 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd6373653790597aE
                (local_c0,*puVar8,&PTR_s_alacritty_src_renderer_text_atla_00983bf0);
      if (uVar9 == 1) {
        local_d8 = 1;
        local_e0 = &PTR_s_alacritty_src_renderer_text_atla_00983c08;
        goto LAB_00564122;
      }
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd6373653790597aE
                (local_c0,puVar8[1],&PTR_s_alacritty_src_renderer_text_atla_00983c20);
      if (uVar9 < 3) {
        local_d8 = 2;
        local_e0 = &PTR_s_alacritty_src_renderer_text_atla_00983c38;
        goto LAB_00564122;
      }
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd6373653790597aE
                (local_c0,puVar8[2],&PTR_s_alacritty_src_renderer_text_atla_00983c50);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd6373653790597aE
                (local_c0,0xff,&PTR_s_alacritty_src_renderer_text_atla_00983c68);
    }
    pplVar10 = &local_78;
    local_78 = (long *)local_c0._8_8_;
    local_70 = local_b0;
    uVar7 = 0x1908;
    param_1 = local_98;
    param_2 = local_a0;
    param_3 = local_a8;
    _local_80 = local_c0;
  }
  else {
    local_78 = param_3 + 1;
    local_80 = (undefined  [8])0x8000000000000000;
    pplVar10 = (long **)(param_3 + 2);
  }
  (*(code *)_ZN9alacritty2gl7storage13TexSubImage2D17h822f041644ccbaa4E_0)
            (0xde1,0,iVar3,uVar1,iVar4,iVar5,uVar7,0x1401,*pplVar10);
  (*(code *)_ZN9alacritty2gl7storage11BindTexture17h1bc957198888829cE_0)(0xde1,0);
  *local_90 = 0;
  _ZN4core3ptr104drop_in_place_LT_core__result__Result_LT_alloc__vec__Vec_LT_u8_GT__C_base64__decode__DecodeError_GT__GT_17h4be53208bd9d6391E
            (local_80);
  param_2[3] = iVar3 + iVar4;
  if ((int)param_2[5] < iVar5) {
    param_2[5] = iVar5;
  }
  auVar11._0_4_ = (float)local_48._4_4_;
  auVar11._4_4_ = (float)(int)local_48;
  auVar11._8_4_ = (float)(int)local_58;
  auVar11._12_4_ = (float)local_58._4_4_;
  *param_1 = uVar2;
  *(char *)(param_1 + 7) = (char)local_88;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = *(ulong *)((long)param_3 + 0x34);
  auVar16 = pshuflw(auVar13,auVar13,0xe8);
  param_1[5] = auVar16._0_4_;
  *(short *)(param_1 + 6) = (short)iVar4;
  *(short *)((long)param_1 + 0x1a) = (short)iVar5;
  fVar12 = (float)(int)*(undefined8 *)(param_2 + 1);
  fVar15 = (float)(int)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
  auVar14._4_4_ = fVar12;
  auVar14._0_4_ = fVar15;
  auVar14._8_4_ = fVar12;
  auVar14._12_4_ = fVar15;
  auVar16 = divps(auVar11,auVar14);
  *(undefined (*) [16])(param_1 + 1) = auVar16;
  return;
}