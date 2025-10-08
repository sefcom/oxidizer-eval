void _ZN14linera_summary6github13GithubContext18get_local_git_info17h57dc8e6f5dcc2bb3E
               (undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined **local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined **local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  (*(code *)PTR__ZN4git24repo10Repository13open_from_env17h79ab167bfd5dce3bE_00a4cb70)(&local_a8);
  auVar4 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h7b702a86a60c088eE
                     (&local_a8);
  local_b0 = auVar4._8_8_;
  if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    param_1[1] = local_b0;
    *param_1 = 0x8000000000000000;
    return;
  }
                    /* try { // try from 006188a8 to 006188e4 has its CatchHandler @ 00618b36 */
  (*(code *)PTR__ZN4git24repo10Repository4head17h5f705e83c3730039E_00a4cb78)(&local_a8,&local_b0);
  if (local_a8 == (undefined **)0x0) {
    local_b8 = uStack_a0;
                    /* try { // try from 006188ff to 00618939 has its CatchHandler @ 00618b29 */
    (*(code *)PTR__ZN4git29reference9Reference14peel_to_commit17h096eb58399d37602E_00a4cb80)
              (&local_a8,&local_b8);
    if (local_a8 == (undefined **)0x0) {
      local_58 = uStack_a0;
                    /* try { // try from 0061895d to 00618981 has its CatchHandler @ 00618b0b */
      (*(code *)PTR__ZN4git26commit6Commit2id17h75f5b774da928f64E_00a4cb88)(&local_28,&local_58);
      _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h7a7f7d96c5bdc7cfE
                (&local_40,&local_28);
                    /* try { // try from 00618982 to 006189bb has its CatchHandler @ 00618b1a */
      _ZN4core3ptr41drop_in_place_LT_git2__commit__Commit_GT_17hb88ec7ba09ec5f8dE(&local_58);
      cVar1 = (*(code *)PTR__ZN4git29reference9Reference9is_branch17h0eaed2db323e3e10E_00a4cb90)
                        (&local_b8);
      if (cVar1 == '\0') {
        local_a8 = &PTR_s_HEAD_is_not_on_a_branch___it_may_009f3460;
        uStack_a0 = (undefined **)0x1;
        local_98 = 8;
        local_90 = (undefined **)0x0;
        uStack_88 = 0;
                    /* try { // try from 00618aa0 to 00618adb has its CatchHandler @ 00618b1a */
        uVar2 = _ZN6anyhow9__private10format_err17hb7ed131eb83ec9a9E(&local_a8);
      }
      else {
        lVar3 = (*(code *)PTR__ZN4git29reference9Reference9shorthand17h156796cbccb63b3eE_00a4cb98)
                          (&local_b8);
        if (lVar3 != 0) {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h81302a4b01e720c3E
                    (&local_a8,lVar3);
          local_48 = local_98;
          local_58 = local_a8;
          uStack_50 = (undefined4)uStack_a0;
          uStack_4c = uStack_a0._4_4_;
                    /* try { // try from 006189d0 to 006189e8 has its CatchHandler @ 00618afc */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h81302a4b01e720c3E
                    (&local_28,"mainincbkrai",4);
          local_68 = local_18;
          local_78 = local_28;
          uStack_74 = uStack_24;
          uStack_70 = uStack_20;
          uStack_6c = uStack_1c;
          local_a8 = (undefined **)CONCAT44(uStack_3c,local_40);
          uStack_a0 = (undefined **)CONCAT44(uStack_34,uStack_38);
          local_98 = local_30;
          local_90 = local_58;
          uStack_88 = CONCAT44(uStack_4c,uStack_50);
          local_80 = local_48;
          param_1[8] = local_18;
          *(undefined4 *)(param_1 + 6) = local_28;
          *(undefined4 *)((long)param_1 + 0x34) = uStack_24;
          *(undefined4 *)(param_1 + 7) = uStack_20;
          *(undefined4 *)((long)param_1 + 0x3c) = uStack_1c;
          param_1[4] = uStack_88;
          param_1[5] = local_48;
          param_1[2] = local_30;
          param_1[3] = local_58;
          *(undefined4 *)param_1 = local_40;
          *(undefined4 *)((long)param_1 + 4) = uStack_3c;
          *(undefined4 *)(param_1 + 1) = uStack_38;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_34;
                    /* try { // try from 00618a5d to 00618a64 has its CatchHandler @ 00618b36 */
          _ZN4core3ptr47drop_in_place_LT_git2__reference__Reference_GT_17h02cad6968eda8d49E
                    (&local_b8);
          goto LAB_00618a65;
        }
        local_a8 = &PTR_s_Failed_to_get_current_branch_nam_009f3450;
        uStack_a0 = (undefined **)0x1;
        local_98 = 8;
        local_90 = (undefined **)0x0;
        uStack_88 = 0;
        uVar2 = _ZN6anyhow9__private10format_err17hb7ed131eb83ec9a9E(&local_a8);
      }
      param_1[1] = uVar2;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_40);
    }
    else {
      uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h292f58dd015d095aE
                        (&local_a8);
      param_1[1] = uVar2;
      *param_1 = 0x8000000000000000;
    }
                    /* try { // try from 0061894b to 00618952 has its CatchHandler @ 00618b36 */
    _ZN4core3ptr47drop_in_place_LT_git2__reference__Reference_GT_17h02cad6968eda8d49E(&local_b8);
  }
  else {
    uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h292f58dd015d095aE
                      (&local_a8);
    param_1[1] = uVar2;
    *param_1 = 0x8000000000000000;
  }
LAB_00618a65:
  _ZN4core3ptr43drop_in_place_LT_git2__repo__Repository_GT_17h38ea74f1f8f24a95E(&local_b0);
  return;
}