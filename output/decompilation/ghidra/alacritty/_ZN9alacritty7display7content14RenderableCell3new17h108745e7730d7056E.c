void _ZN9alacritty7display7content14RenderableCell3new17h108745e7730d7056E
               (ulong *param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong extraout_RDX;
  int iVar12;
  uint uVar13;
  long *plVar14;
  float fVar15;
  undefined local_9c [2];
  char local_9a;
  undefined2 local_98;
  char local_96;
  uint local_94;
  int local_90;
  float local_8c;
  long *local_88;
  uint local_7c;
  undefined8 *local_78;
  long lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char local_58;
  undefined3 local_57;
  undefined uStack_54;
  undefined3 uStack_53;
  undefined uStack_50;
  long local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  plVar2 = (long *)*param_3;
  _local_9c = _ZN9alacritty7display7content14RenderableCell14compute_fg_rgb17h3800f23b34f30751E
                        (param_2,*(undefined4 *)(plVar2 + 1),*(undefined4 *)((long)plVar2 + 0x14));
  uVar7 = _ZN9alacritty7display7content14RenderableCell14compute_bg_rgb17h1db88f8de20295e8E
                    (param_2[0xf],param_2[0x1e],*(undefined4 *)((long)plVar2 + 0xc));
  local_98 = (undefined2)uVar7;
  local_96 = (char)((uint)uVar7 >> 0x10);
  uVar1 = *(ushort *)((long)plVar2 + 0x14);
  local_88 = param_3;
  if ((uVar1 & 1) == 0) {
    lVar10 = param_2[0x1d];
    local_78 = (undefined8 *)CONCAT44(local_78._4_4_,*(undefined4 *)((long)plVar2 + 0xc));
    cVar5 = _ZN57__LT_vte__ansi__Color_u20_as_u20_core__cmp__PartialEq_GT_2eq17heb01e5a1191ca78eE
                      (&local_78,"");
    local_8c = 0.0;
    if ((cVar5 == '\0') && (local_8c = DAT_001eb5d0, *(char *)(lVar10 + 0x28f) == '\x01')) {
      local_8c = *(float *)(lVar10 + 0x1a4);
    }
    cVar5 = *(char *)(param_2 + 0x17);
    param_3 = local_88;
    if (cVar5 != '\x02') goto LAB_005468d0;
LAB_00546957:
    cVar5 = '\0';
  }
  else {
    _ZN4core10intrinsics25typed_swap_nonoverlapping17hf7f74993e905442aE(local_9c,&local_98);
    local_8c = 1.0;
    cVar5 = *(char *)(param_2 + 0x17);
    if (cVar5 == '\x02') goto LAB_00546957;
LAB_005468d0:
    local_78 = (undefined8 *)param_2[0x13];
    lStack_70 = param_2[0x14];
    local_68 = *(undefined4 *)(param_2 + 0x15);
    uStack_64 = *(undefined4 *)((long)param_2 + 0xac);
    uStack_60 = *(undefined4 *)(param_2 + 0x16);
    uStack_5c = *(undefined4 *)((long)param_2 + 0xb4);
    local_57 = (undefined3)*(undefined4 *)((long)param_2 + 0xb9);
    uStack_54 = (undefined)*(undefined4 *)((long)param_2 + 0xbc);
    uStack_53 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0xbc) >> 8);
    local_58 = cVar5;
    cVar5 = (*(code *)
              PTR__ZN18alacritty_terminal9selection14SelectionRange13contains_cell17h17cee683c4e8c58cE_009dfde0
            )(&local_78,param_3,param_2[0x10],*(undefined4 *)(param_2 + 0x11),
              *(undefined4 *)(param_2 + 0x23));
    uVar1 = *(ushort *)((long)plVar2 + 0x14);
  }
  local_94 = (uint)uVar1;
  local_7c = *(uint *)(param_2 + 9);
  lVar10 = param_2[0x1d];
  local_90 = *(int *)(plVar2 + 2);
  if ((param_2[4] == -0x7fffffffffffffff) ||
     (iVar8 = _ZN9alacritty7display7content4Hint7advance17h8bcb95d1876cc7abE
                        (param_2 + 4,-local_7c,*(undefined8 *)(param_2[0x1f] + 8),local_88[1],
                         *(undefined4 *)(local_88 + 2)), plVar14 = local_88, uVar13 = local_94,
     iVar8 == 0x110001)) {
    plVar14 = local_88;
    if (cVar5 == '\0') {
      uVar13 = local_94;
      iVar12 = local_90;
      if (*param_2 != -0x7fffffffffffffff) {
        lVar9 = local_88[1];
        uVar7 = *(undefined4 *)(local_88 + 2);
        local_48 = lVar10;
        cVar5 = _ZN9alacritty7display7content11HintMatches7advance17hba48573630649a2fE
                          (param_2,lVar9,uVar7);
        uVar13 = local_94;
        iVar12 = local_90;
        if (cVar5 != '\0') {
          if (param_2[0x22] == 0) {
            lVar9 = 0x224;
            lVar10 = 0x220;
          }
          else {
            bVar6 = _ZN4core3ops5range11RangeBounds8contains17h3765a02d6a3b303aE
                              (param_2[0x22],lVar9,uVar7);
            lVar9 = (ulong)(bVar6 ^ 1) * 8;
            lVar10 = lVar9 + 0x218;
            lVar9 = lVar9 + 0x21c;
          }
          iVar12 = local_90;
          uVar13 = local_94;
          _ZN9alacritty7display7content14RenderableCell16compute_cell_rgb17h05954dccd224f102E
                    (local_9c,&local_98,&local_8c,*(undefined4 *)(local_48 + lVar10),
                     *(undefined4 *)(local_48 + lVar9));
        }
      }
      goto LAB_00546bbc;
    }
    _ZN9alacritty7display7content14RenderableCell16compute_cell_rgb17h05954dccd224f102E
              (local_9c,&local_98,&local_8c,*(undefined4 *)(lVar10 + 0x210),
               *(undefined4 *)(lVar10 + 0x214));
    plVar14 = local_88;
    uVar13 = local_94;
    iVar12 = local_90;
    if (local_9c[0] != (char)local_98) goto LAB_00546bbc;
    if (((local_9c[1] != local_98._1_1_) || (local_9a != local_96)) ||
       ((*(byte *)((long)plVar2 + 0x15) & 1) != 0)) goto LAB_00546bbc;
    lVar10 = param_2[0xf];
    lVar9 = param_2[0x1e];
    _local_9c = _ZN9alacritty7display7content17RenderableContent5color17h883a873f7862c055E
                          (lVar10,lVar9,0x101);
    iVar12 = local_90;
    uVar13 = local_94;
    uVar7 = _ZN9alacritty7display7content17RenderableContent5color17h883a873f7862c055E
                      (lVar10,lVar9,0x100);
    local_98 = (undefined2)uVar7;
    local_96 = (char)((uint)uVar7 >> 0x10);
    fVar15 = DAT_001eb5d0;
LAB_00546bca:
    if (*(char *)(param_2[0x1d] + 0x28f) != '\0') {
      fVar15 = *(float *)(param_2[0x1d] + 0x1a4);
    }
  }
  else {
    if ((extraout_RDX & 1) == 0) {
      if (iVar8 == 0x110000) {
        uVar13 = local_94 | 8;
      }
      else {
        _ZN9alacritty7display7content14RenderableCell16compute_cell_rgb17h05954dccd224f102E
                  (local_9c,&local_98,&local_8c,*(undefined4 *)(lVar10 + 0x230),
                   *(undefined4 *)(lVar10 + 0x234));
      }
    }
    else {
      _ZN9alacritty7display7content14RenderableCell16compute_cell_rgb17h05954dccd224f102E
                (local_9c,&local_98,&local_8c,*(undefined4 *)(lVar10 + 0x228),
                 *(undefined4 *)(lVar10 + 0x22c));
      plVar14 = local_88;
      uVar13 = local_94;
    }
    iVar12 = local_90;
    if (iVar8 != 0x110000) {
      iVar12 = iVar8;
    }
LAB_00546bbc:
    fVar15 = local_8c;
    if (0.0 < local_8c) goto LAB_00546bca;
  }
  local_7c = local_7c + *(int *)(plVar14 + 2);
  if ((int)local_7c < 0) {
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_009de108)
              (&PTR_s_alacritty_src_display_content_rs_00982120);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_88 = (long *)CONCAT44(local_88._4_4_,fVar15);
  if (*plVar2 == 0) {
    uVar7 = 3;
  }
  else {
    uVar7 = *(undefined4 *)(*plVar2 + 0x30);
  }
  uVar3 = plVar14[1];
  uVar7 = _ZN4core6option15Option_LT_T_GT_6map_or17hcbce6c8b470ad398E
                    (uVar7,(ulong)_local_9c,param_2,uVar13);
  lVar10 = *plVar2;
  if (lVar10 == 0) {
    local_40 = 0;
    lVar10 = _ZN18alacritty_terminal4term4cell4Cell9hyperlink17h5de1efd02cb51dbcE();
    local_78 = &local_40;
    lStack_70 = lVar10;
    if (lVar10 == 0) {
      _ZN4core3ptr98drop_in_place_LT_alacritty__display__content__RenderableCell__new___u7b__u7b_closure_u7d__u7d__GT_17ha65facaad3e948a7E
                (&local_78);
      uVar11 = 0;
      goto LAB_00546c76;
    }
  }
  else {
    local_40 = *(undefined8 *)(lVar10 + 0x18);
    uStack_38 = *(undefined4 *)(lVar10 + 0x20);
    uStack_34 = *(undefined4 *)(lVar10 + 0x24);
    lVar10 = _ZN18alacritty_terminal4term4cell4Cell9hyperlink17h5de1efd02cb51dbcE();
  }
  uVar11 = _ZN9alacritty7display7content14RenderableCell3new28__u7b__u7b_closure_u7d__u7d_17hc01974c0677aac72E
                     (&local_40,lVar10);
LAB_00546c76:
  *(char *)((long)param_1 + 0x24) = local_9a;
  *(undefined (*) [2])((long)param_1 + 0x22) = local_9c;
  *(char *)((long)param_1 + 0x27) = local_96;
  *(undefined2 *)((long)param_1 + 0x25) = local_98;
  *(int *)((long)param_1 + 0x1c) = iVar12;
  *param_1 = (ulong)local_7c;
  param_1[1] = uVar3;
  *(undefined4 *)(param_1 + 3) = local_88._0_4_;
  *(char *)((long)param_1 + 0x2a) = (char)((uint)uVar7 >> 0x10);
  *(short *)(param_1 + 5) = (short)uVar7;
  *(short *)(param_1 + 4) = (short)uVar13;
  param_1[2] = uVar11;
  return;
}