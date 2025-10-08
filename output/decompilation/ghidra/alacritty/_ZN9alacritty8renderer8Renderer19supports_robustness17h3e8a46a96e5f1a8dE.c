ulong _ZN9alacritty8renderer8Renderer19supports_robustness17h3e8a46a96e5f1a8dE(void)

{
  char cVar1;
  ulong uVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  int local_64;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_64 = 0;
  cVar1 = _ZN9alacritty8renderer12GlExtensions8contains17h085256d27559bf27E
                    ("GL_KHR_robustness",0x11);
  if (cVar1 == '\0') {
    local_64 = 0x8261;
  }
  else {
    (*(code *)_ZN9alacritty2gl7storage11GetIntegerv17h28c461c932844c37E_0)(0x8256,&local_64);
    if (local_64 == 0x8252) {
      uVar2 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                        (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
      uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
      if (2 < uVar2) {
        local_38 = &PTR_s_GPU_reset_notifications_are_enab_00984120;
        local_30 = 1;
        local_28 = 8;
        local_20 = 0;
        uStack_18 = 0;
        local_40 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                             (&PTR_s_alacritty_src_renderer_mod_rs_00984140);
        local_60 = "alacritty::renderer3.3";
        local_58 = 0x13;
        local_50 = "alacritty::renderer3.3";
        local_48 = 0x13;
        _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_38,3,&local_60);
      }
      goto LAB_0056d509;
    }
  }
  uVar3 = 0;
  uVar2 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  if (2 < uVar2) {
    local_38 = &PTR_s_GPU_reset_notifications_are_disa_00984130;
    local_30 = 1;
    local_28 = 8;
    local_20 = 0;
    uStack_18 = 0;
    local_40 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                         (&PTR_s_alacritty_src_renderer_mod_rs_00984158);
    local_60 = "alacritty::renderer3.3";
    local_58 = 0x13;
    local_50 = "alacritty::renderer3.3";
    local_48 = 0x13;
    _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_38,3,&local_60);
    return 0;
  }
LAB_0056d509:
  return uVar3 & 0xffffffff;
}