void _ZN9alacritty8renderer4text11glyph_cache10GlyphCache16update_font_size17hc45cf17b76341be8E
               (long *param_1,long param_2,long param_3)

{
  undefined uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  float local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long lStack_70;
  float *local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  uVar1 = *(undefined *)(param_3 + 199);
  *(undefined4 *)(param_2 + 0x124) = *(undefined4 *)(param_3 + 0xc4);
  _ZN9alacritty8renderer4text11glyph_cache10GlyphCache17compute_font_keys17h70cff708fb8cdc91E
            (&local_a8,param_3,param_2 + 0x68);
  uVar6 = (undefined4)local_a0;
  uVar7 = local_a0._4_4_;
  uVar8 = (undefined4)uStack_98;
  uVar9 = uStack_98._4_4_;
  if (local_a8 == (undefined **)0x7) {
    uVar2 = *(uint *)(param_3 + 0xc0);
    _ZN9alacritty8renderer4text11glyph_cache10GlyphCache17load_font_metrics17h197a8eb0e37d6b44E
              (&local_a8,param_2 + 0x68,uVar2,uVar1,local_a0 & 0xffffffff);
    local_d8 = (char *)local_a0;
    uVar10 = (ulong)local_d8;
    uStack_d0 = (long)uStack_98;
    lVar3 = uStack_d0;
    local_c8 = (char *)local_90;
    lVar4 = (long)local_c8;
    uStack_c0 = lStack_88;
    lVar5 = uStack_c0;
    local_b8 = local_80;
    if (local_a8 == (undefined **)0x7) {
      local_d8._0_4_ = (undefined4)local_a0;
      local_d8._4_4_ = (undefined4)(local_a0 >> 0x20);
      uStack_d0._0_4_ = SUB84(uStack_98,0);
      uStack_d0._4_4_ = (undefined4)((ulong)uStack_98 >> 0x20);
      local_c8._0_4_ = (undefined4)local_90;
      local_c8._4_4_ = (undefined4)((ulong)local_90 >> 0x20);
      uStack_c0._0_4_ = (undefined4)lStack_88;
      uStack_c0._4_4_ = (undefined4)((ulong)lStack_88 >> 0x20);
      local_58 = (undefined4)local_d8;
      uStack_54 = local_d8._4_4_;
      uStack_50 = (undefined4)uStack_d0;
      uStack_4c = uStack_d0._4_4_;
      local_48 = (undefined4)local_c8;
      uStack_44 = local_c8._4_4_;
      uStack_40 = (undefined4)uStack_c0;
      uStack_3c = uStack_c0._4_4_;
      local_38 = local_80;
      local_d8 = (char *)uVar10;
      uStack_d0 = lVar3;
      local_c8 = (char *)lVar4;
      uStack_c0 = lVar5;
      uVar10 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                         (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
      if (2 < uVar10) {
        local_dc = ((float)((double)uVar2 / _s__001ead48) * _DAT_001ed784) / _DAT_001ec2f8;
        local_68 = &local_dc;
        local_60 = 
        PTR__ZN4core3fmt5float50__LT_impl_u20_core__fmt__Debug_u20_for_u20_f32_GT_3fmt17hb69e1dd567cac570E_009de990
        ;
        local_a8 = &PTR_s_Font_size_changed_to_px_00983fc0;
        local_a0 = 2;
        lStack_88 = 0;
        uStack_98 = &local_68;
        local_90 = 1;
        local_b8 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                             (&PTR_s_alacritty_src_renderer_text_glyp_00983fe0);
        local_d8 = "alacritty::renderer::text::glyph_cache";
        uStack_d0 = 0x26;
        local_c8 = "alacritty::renderer::text::glyph_cache";
        uStack_c0 = 0x26;
        _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_a8,3,&local_d8);
      }
      *(uint *)(param_2 + 0x120) = uVar2;
      *(undefined4 *)(param_2 + 0x110) = uVar6;
      *(undefined4 *)(param_2 + 0x114) = uVar7;
      *(undefined4 *)(param_2 + 0x118) = uVar8;
      *(undefined4 *)(param_2 + 0x11c) = uVar9;
      *(ulong *)(param_2 + 0x40) = CONCAT44(uStack_54,local_58);
      *(ulong *)(param_2 + 0x48) = CONCAT44(uStack_4c,uStack_50);
      *(ulong *)(param_2 + 0x50) = CONCAT44(uStack_44,local_48);
      *(ulong *)(param_2 + 0x58) = CONCAT44(uStack_3c,uStack_40);
      *(long *)(param_2 + 0x60) = local_38;
      *(undefined *)(param_2 + 0x128) = *(undefined *)(param_3 + 0xc9);
      *param_1 = 7;
    }
    else {
      param_1[6] = lStack_78;
      param_1[7] = lStack_70;
      param_1[5] = local_80;
      param_1[3] = local_90;
      param_1[4] = lStack_88;
      param_1[1] = local_a0;
      param_1[2] = (long)uStack_98;
      *param_1 = (long)local_a8;
    }
  }
  else {
    param_1[7] = lStack_70;
    param_1[5] = local_80;
    param_1[6] = lStack_78;
    param_1[3] = local_90;
    param_1[4] = lStack_88;
    *param_1 = (long)local_a8;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_a0;
    *(undefined4 *)((long)param_1 + 0xc) = local_a0._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_98;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_98._4_4_;
  }
  return;
}