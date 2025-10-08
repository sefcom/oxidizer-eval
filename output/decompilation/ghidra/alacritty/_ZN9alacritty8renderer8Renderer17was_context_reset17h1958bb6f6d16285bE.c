undefined8 _ZN9alacritty8renderer8Renderer17was_context_reset17h1958bb6f6d16285bE(ulong param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char *local_78;
  undefined8 local_70;
  undefined *local_68;
  code *local_60;
  char *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((param_1 & 1) == 0) {
    return 0;
  }
  iVar1 = (*(code *)_ZN9alacritty2gl7storage22GetGraphicsResetStatus17he603977498c441aeE_0)();
  if (iVar1 != 0) {
    uVar2 = iVar1 - 0x8253;
    if (uVar2 < 3) {
      local_78 = &DAT_0020f798 + *(int *)(&DAT_0020f798 + (ulong)uVar2 * 4);
      local_70 = *(undefined8 *)(&DAT_0020f7a8 + (ulong)uVar2 * 8);
    }
    else {
      local_70 = 7;
      local_78 = "invalid";
    }
    uVar3 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (2 < uVar3) {
      local_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
      local_30 = &PTR_s_GPU_reset__guiltyunknown_009840e8;
      local_28 = 2;
      local_10 = 0;
      local_20 = &local_68;
      local_18 = 1;
      local_68 = (undefined *)&local_78;
      local_38 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s_alacritty_src_renderer_mod_rs_00984108);
      local_58 = "alacritty::renderer3.3";
      local_50 = 0x13;
      local_48 = "alacritty::renderer3.3";
      local_40 = 0x13;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_30,3,&local_58);
    }
    return 1;
  }
  return 0;
}