void _ZN6zoxide4util8FzfChild4wait17h58b549ee022416b6E(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  int local_6c;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  undefined8 local_18;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_std__process__ChildStdin_GT__GT_17h6c7b867f27440b6eE
            (uVar1);
  iVar2 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
  if (iVar2 == -1) {
    cVar3 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0023b7b0)
                      (&PTR_s_src_util_rs_00234bb0);
LAB_00192c08:
    if (cVar3 == '\x01') {
      local_68 = &PTR_s_no_match_found_00234ba0;
      local_60 = 1;
      local_58 = 8;
      local_50 = 0;
      uStack_48 = 0;
      uVar4 = _ZN6anyhow9__private10format_err17h09b344f6a077676aE(&local_68);
    }
    else if (cVar3 == '\x02') {
      local_68 = &PTR_s_fzf_returned_an_error_00234b90;
      local_60 = 1;
      local_58 = 8;
      local_50 = 0;
      uStack_48 = 0;
      uVar4 = _ZN6anyhow9__private10format_err17h09b344f6a077676aE(&local_68);
    }
    else if (cVar3 == -0x7e) {
                    /* try { // try from 00192c21 to 00192d22 has its CatchHandler @ 00192d28 */
      uVar4 = _ZN6anyhow4kind5Adhoc3new17h40cd9dbe27630cdbE(0x82);
    }
    else {
      if (cVar3 < -1) goto LAB_00192cb8;
      local_68 = &PTR_s_fzf_returned_an_unknown_error_00234b70;
      local_60 = 1;
      local_58 = 8;
      local_50 = 0;
      uStack_48 = 0;
      uVar4 = _ZN6anyhow9__private10format_err17h09b344f6a077676aE(&local_68);
    }
  }
  else {
    local_38 = 0;
    uStack_30 = 1;
    local_28 = 0;
                    /* try { // try from 00192b60 to 00192b9c has its CatchHandler @ 00192d28 */
    local_6c = iVar2;
    auVar5 = _ZN3std2io16append_to_string17hedb55a5ab2293446E(&local_38,&local_6c,0);
    auVar5 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17hd417b96229ab7d1eE
                       (auVar5._0_8_,auVar5._8_8_);
    uVar4 = auVar5._8_8_;
    if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      (*(code *)PTR__ZN3std7process5Child4wait17h7e33de4911114104E_0023b988)(&local_68,param_2);
      _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17hb65f6847d5367690E
                (&local_20,&local_68);
      uVar4 = local_18;
      if (local_20 != 1) {
        if ((local_1c & 0x7f) == 0) {
          cVar3 = (char)(local_1c >> 8);
          if (cVar3 == '\0') {
            param_1[2] = local_28;
            *param_1 = local_38;
            param_1[1] = uStack_30;
            goto LAB_00192bea;
          }
          goto LAB_00192c08;
        }
LAB_00192cb8:
        local_68 = &PTR_s_fzf_was_terminated_00234b80;
        local_60 = 1;
        local_58 = 8;
        local_50 = 0;
        uStack_48 = 0;
        uVar4 = _ZN6anyhow9__private10format_err17h09b344f6a077676aE(&local_68);
      }
    }
  }
  param_1[1] = uVar4;
  *param_1 = 0x8000000000000000;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he43bec8f5a515731E(&local_38);
LAB_00192bea:
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hd07966af9089b9f5E(local_6c);
  return;
}