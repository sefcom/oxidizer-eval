void _ZN9alacritty5input8keyboard15SequenceBuilder17try_build_textual17he80f562459c5cd3aE
               (undefined8 *param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined auVar6 [16];
  undefined auVar7 [12];
  uint local_b0;
  uint local_ac;
  undefined *local_a8;
  undefined *local_a0;
  uint **local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint *local_78;
  undefined *local_70;
  uint *local_68;
  undefined *local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulong uVar5;
  
  (*(code *)PTR__ZN5winit8keyboard3Key6as_ref17ha61159f0166fa8fbE_009dfee0)(&local_a8,param_3);
  if (((char)local_a8 != ' ') || (*(char *)(param_2 + 5) == '\0')) {
    *param_1 = 0x8000000000000001;
    _ZN4core3ptr56drop_in_place_LT_winit__keyboard__Key_LT__RF_str_GT__GT_17h2dc152dabd79984bE
              (&local_a8);
    return;
  }
  _ZN4core3ptr56drop_in_place_LT_winit__keyboard__Key_LT__RF_str_GT__GT_17h2dc152dabd79984bE
            (&local_a8);
  lVar2 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                    (local_a0,local_a0 + (long)local_98);
  if (lVar2 == 1) {
    bVar1 = *(byte *)(param_2 + 4);
    local_a8 = local_a0;
    local_a0 = local_a0 + (long)local_98;
    auVar6 = _ZN4core3str11validations15next_code_point17h6519aaf344192553E(&local_a8);
    uVar5 = auVar6._8_8_;
    if ((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      uVar4 = auVar6._8_4_;
      auVar6._8_8_ = uVar5;
      auVar6._0_8_ = uVar5 & 0xffffffff;
      if (uVar4 != 0x110000) {
        local_b0 = uVar4;
        local_ac = uVar4;
        if ((bVar1 & 1) != 0) {
          (*(code *)
            PTR__ZN4core7unicode12unicode_data11conversions8to_lower17hc1521f967a2a0de4E_009dfee8)
                    (&local_78,uVar5 & 0xffffffff);
          _ZN4core4char15CaseMappingIter3new17hcde4616bfd23ae0dE(&local_a8,&local_78);
          auVar6 = (*(code *)
                     PTR__ZN82__LT_core__char__ToUppercase_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd6d8602daf079abdE_009dfef0
                   )(&local_a8);
          local_b0 = auVar6._0_4_;
          if (local_b0 == 0x110000) goto LAB_0055795e;
          if (uVar4 == local_b0) {
            _ZN70__LT_winit__keyboard__Key_LT_Str_GT__u20_as_u20_core__clone__Clone_GT_5clone17ha91dda63f770d88eE
                      (&local_a8,param_3 + 0x20);
                    /* try { // try from 0055781b to 00557877 has its CatchHandler @ 0055796b */
            (*(code *)PTR__ZN5winit8keyboard3Key6as_ref17ha61159f0166fa8fbE_009dfee0)
                      (&local_78,&local_a8);
            if ((char)local_78 == ' ') {
              local_50 = (long)local_68 + (long)local_70;
              local_58 = (long)local_70;
              auVar7 = _ZN4core3str11validations15next_code_point17h6519aaf344192553E(&local_58);
              local_b0 = 0x110000;
              if ((auVar7 & (undefined  [12])0x1) != (undefined  [12])0x0) {
                local_b0 = auVar7._8_4_;
              }
              if (local_b0 == 0x110000) {
                local_b0 = uVar4;
              }
              auVar6._4_4_ = 0;
              auVar6._0_4_ = local_b0;
              _ZN4core3ptr56drop_in_place_LT_winit__keyboard__Key_LT__RF_str_GT__GT_17h2dc152dabd79984bE
                        (&local_78);
              _ZN4core3ptr41drop_in_place_LT_winit__keyboard__Key_GT_17h52f71c141f8140f2E(&local_a8)
              ;
              auVar6._8_8_ = extraout_RDX;
            }
            else {
                    /* try { // try from 00557938 to 00557941 has its CatchHandler @ 0055796b */
              _ZN4core3ptr56drop_in_place_LT_winit__keyboard__Key_LT__RF_str_GT__GT_17h2dc152dabd79984bE
                        (&local_78);
              _ZN4core3ptr41drop_in_place_LT_winit__keyboard__Key_GT_17h52f71c141f8140f2E(&local_a8)
              ;
              auVar6._8_8_ = extraout_RDX_00;
            }
          }
        }
        if (((*(byte *)(param_2 + 2) & 0x10) == 0) || (uVar4 == auVar6._0_4_)) {
          uVar3 = (*(code *)
                    PTR__ZN4core3fmt3num3imp21__LT_impl_u20_u32_GT_4_fmt17hcfe26aa883005358E_009dfef8
                  )(auVar6._0_8_ & 0xffffffff,&local_a8,10);
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4cfefc754dbf8feeE
                    (&local_48,uVar3);
        }
        else {
          local_78 = &local_b0;
          local_70 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_009deb88
          ;
          local_68 = &local_ac;
          local_60 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_009deb88
          ;
          local_a8 = &DAT_00982c90;
          local_a0 = (undefined *)0x2;
          local_88 = 0;
          local_98 = &local_78;
          local_90 = 2;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
                    (&local_48,0,auVar6._8_8_,&local_a8);
        }
        param_1[2] = local_38;
        *param_1 = local_48;
        param_1[1] = uStack_40;
        goto LAB_0055792c;
      }
    }
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_009de108)(&DAT_00982cb0);
LAB_0055795e:
    uVar3 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_009de108)
                      (&DAT_00982cc8);
                    /* catch() { ... } // from try @ 0055781b with catch @ 0055796b
                       catch() { ... } // from try @ 00557938 with catch @ 0055796b */
                    /* try { // try from 0055796e to 00557977 has its CatchHandler @ 00557980 */
    _ZN4core3ptr41drop_in_place_LT_winit__keyboard__Key_GT_17h52f71c141f8140f2E(&local_a8);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar3);
  }
  if ((param_4 == 0) || (*(char *)(param_2 + 6) == '\0')) {
    *param_1 = 0x8000000000000001;
    return;
  }
  *param_1 = 0x8000000000000000;
  param_1[1] = &DAT_00201a7c;
  param_1[2] = 1;
LAB_0055792c:
  *(undefined4 *)(param_1 + 3) = 0x110000;
  return;
}