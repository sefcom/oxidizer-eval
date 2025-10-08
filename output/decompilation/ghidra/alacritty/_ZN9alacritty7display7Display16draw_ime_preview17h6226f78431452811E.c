void _ZN9alacritty7display7Display16draw_ime_preview17h6226f78431452811E
               (undefined4 param_1,long param_2,ulong param_3,long param_4,undefined4 param_5,
               undefined4 param_6,undefined8 param_7)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined uVar5;
  undefined2 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined auVar13 [16];
  ulong local_178;
  long local_170;
  int local_168;
  undefined2 local_164;
  undefined local_162;
  undefined2 local_161;
  undefined local_15f;
  byte local_15e;
  undefined local_158 [8];
  long local_150;
  long local_148;
  ulong local_140;
  long local_138;
  ulong local_130;
  long local_128;
  undefined2 local_120;
  undefined local_11e;
  ulong local_110 [3];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined local_d0 [24];
  undefined local_b8 [32];
  undefined local_98 [104];
  
  if (*(ulong *)(param_2 + 0x2d0) == 2) {
    _ZN9alacritty7display6window6Window19update_ime_position17h9e6fbf55ca260375E
              (param_2 + 800,param_3,param_4,param_2 + 0x798);
    return;
  }
  uVar2 = *(ulong *)(param_2 + 0x7a0);
  if ((((*(ulong *)(param_2 + 0x2d0) & 1) == 0) || ((*(byte *)(param_2 + 0x2e8) & 1) == 0)) ||
     (*(ulong *)(param_2 + 0x2f0) <= uVar2)) {
    auVar13 = *(undefined (*) [16])(param_2 + 0x308);
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 0x2d8);
    uVar3 = *(undefined8 *)(param_2 + 0x308);
    uVar4 = *(undefined8 *)(param_2 + 0x310);
    auVar13 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                        (uVar11,uVar3,uVar4);
    if (auVar13._0_8_ == 0) {
      uVar11 = (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_009de180)
                         (uVar3,uVar4,uVar11,uVar4,&PTR_s_alacritty_src_display_mod_rs_00982710);
                    /* catch() { ... } // from try @ 0054e87f with catch @ 0054eaf1 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(local_158);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar11);
    }
    uVar11 = 1;
  }
  _ZN9alacritty6string12StrShortener3new17hcb4d209a7d9df863E
            (&local_140,auVar13._0_8_,auVar13._8_8_,uVar2,uVar11);
  _ZN4core4iter6traits8iterator8Iterator7collect17h3c9ad0add9d9250fE(local_158,&local_140);
                    /* try { // try from 0054e87f to 0054eabb has its CatchHandler @ 0054eaf1 */
  uVar7 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                    (local_150,local_148 + local_150);
  puVar1 = (ulong *)(param_2 + 0x798);
  uVar8 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(param_4 + uVar7,uVar2);
  lVar12 = 0;
  if (uVar7 <= uVar8) {
    lVar12 = uVar8 - uVar7;
  }
  local_d8 = *(undefined8 *)(param_2 + 0x658);
  local_f8 = *(undefined4 *)(param_2 + 0x638);
  uStack_f4 = *(undefined4 *)(param_2 + 0x63c);
  uStack_f0 = *(undefined4 *)(param_2 + 0x640);
  uStack_ec = *(undefined4 *)(param_2 + 0x644);
  local_e8 = *(undefined4 *)(param_2 + 0x648);
  uStack_e4 = *(undefined4 *)(param_2 + 0x64c);
  uStack_e0 = *(undefined4 *)(param_2 + 0x650);
  uStack_dc = *(undefined4 *)(param_2 + 0x654);
  _ZN9alacritty8renderer8Renderer11draw_string17he548dbda3300cc92E
            (param_2 + 0xe0,param_3,lVar12,param_5,param_6,local_150,local_148 + local_150,puVar1,
             param_2 + 0x5f8);
  if (param_3 < *puVar1) {
    local_110[1] = 0;
    local_110[0] = param_3;
    local_110[2] = uVar2;
    _ZN9alacritty7display6damage11FrameDamage11damage_line17hb967af29845291d1E
              (*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),local_110);
    _ZN9alacritty7display6damage11FrameDamage11damage_line17hb967af29845291d1E
              (*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x60),local_110);
  }
  lVar9 = uVar8 - 1;
  uVar6 = (undefined2)param_5;
  uVar5 = (undefined)((uint)param_5 >> 0x10);
  local_140 = param_3;
  local_138 = lVar12;
  local_130 = param_3;
  local_128 = lVar9;
  local_120 = uVar6;
  local_11e = uVar5;
  _ZN9alacritty8renderer5rects10RenderLine5rects17h3e1b797e248680e5E
            (local_d0,&local_140,8,&local_f8,puVar1);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h78a34c0660272eecE
            (local_b8,local_d0);
  _ZN136__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_alloc__vec__into_iter__IntoIter_LT_T_GT__GT__GT_11spec_extend17he6ea13a474fdacadE
            (param_7,local_b8);
  if (*(int *)(param_2 + 0x2e8) == 1) {
    iVar10 = (int)*(long *)(param_2 + 0x2f0) - *(int *)(param_2 + 0x2f8);
    lVar9 = _ZN4core3cmp3Ord3max17h99a4ab283a63d31fE(uVar8 - *(long *)(param_2 + 0x2f0));
    local_178 = param_3;
    local_170 = lVar9;
    local_168 = iVar10 + (uint)(iVar10 == 0);
    local_164 = uVar6;
    local_162 = uVar5;
    local_161 = uVar6;
    local_15f = uVar5;
    local_15e = iVar10 == 0 ^ 3;
    _ZN103__LT_alacritty__display__content__RenderableCursor_u20_as_u20_alacritty__display__cursor__IntoRects_GT_5rects17h24fb12653be3a4e9E
              (param_1,local_98,&local_178,puVar1);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_16extend_desugared17heb81fe2e84edcb75E(param_7,local_98);
  }
  _ZN9alacritty7display6window6Window19update_ime_position17h9e6fbf55ca260375E
            (param_2 + 800,param_3,lVar9,puVar1);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(local_158);
  return;
}