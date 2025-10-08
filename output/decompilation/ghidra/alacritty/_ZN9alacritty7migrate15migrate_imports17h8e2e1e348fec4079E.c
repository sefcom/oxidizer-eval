void _ZN9alacritty7migrate15migrate_imports17h8e2e1e348fec4079E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined8 **local_158;
  undefined8 **ppuStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined local_130 [8];
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 **local_118;
  code *local_110;
  undefined8 **local_108;
  undefined8 **ppuStack_100;
  undefined8 local_f8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  
  uVar5 = (*(code *)
            PTR__ZN76__LT_toml_edit__document__DocumentMut_u20_as_u20_core__ops__deref__Deref_GT_5deref17h8d71f7078bbb8200E_009dff90
          )(param_5);
  lVar6 = (*(code *)PTR__ZN9toml_edit5table5Table3get17h59a6b417f8465fa5E_009dff98)
                    (uVar5,"general",7);
  if ((((lVar6 != 0) &&
       (piVar7 = (int *)_ZN9toml_edit4item4Item3get17he2e7ec39562f45c3E(lVar6), piVar7 != (int *)0x0
       )) && (*piVar7 == 7)) && (*(long *)(piVar7 + 0xc) != 0)) {
    if (param_6 == 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4cfefc754dbf8feeE
                (param_1,&DAT_00201e8d,0x2b);
      return;
    }
    auVar9 = (*(code *)
               PTR__ZN89__LT__RF_toml_edit__array__Array_u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h6c2f59cc75dec506E_009dffa0
             )(piVar7 + 2);
    uVar8 = auVar9._8_8_;
    uVar5 = auVar9._0_8_;
    bVar1 = *(byte *)(param_2 + 0x18);
    while( true ) {
                    /* try { // try from 0056013a to 00560169 has its CatchHandler @ 005603b1 */
      auVar9 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h03af57499146cca1E(uVar5,uVar8);
      if (auVar9._0_8_ == 0) break;
      _ZN9alacritty6config16normalize_import17h3c4d0292275a0832E
                (local_130,param_3,param_4,auVar9._0_8_,auVar9._8_8_);
      uVar3 = local_120;
      puVar2 = local_128;
                    /* try { // try from 00560177 to 00560237 has its CatchHandler @ 005603b6 */
      _ZN3std2fs8metadata17h8f40e5ed4fcd8161E(&local_e0,local_128,local_120);
      ppuVar4 = local_e0;
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h672bb05c96f66e9cE
                (&local_e0);
      if ((int)ppuVar4 == 2) {
        if ((bVar1 & 1) != 0) {
          local_108 = (undefined8 **)puVar2;
          ppuStack_100 = (undefined8 **)uVar3;
          ppuStack_150 = (undefined8 **)
                         PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_009dff10
          ;
          local_e0 = &PTR_s_Skipping_migration_for_nonexiste_00983520;
          local_d8 = (undefined8 ***)0x2;
          uStack_c0 = 0;
          uStack_d0 = &local_158;
          local_c8 = 1;
          local_158 = &local_108;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_009dff18)(&local_e0);
        }
      }
      else {
        _ZN9alacritty7migrate14migrate_config17heae155b6e6f7f60cE
                  (&local_e0,param_2,puVar2,uVar3,param_6 + -1);
        if ((int)local_e0 == 1) {
          local_f8 = local_c8;
          local_108 = local_d8;
          ppuStack_100 = uStack_d0;
          param_1[2] = local_c8;
          *(undefined4 *)param_1 = (undefined4)local_d8;
          *(undefined4 *)((long)param_1 + 4) = local_d8._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_d0;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_d0._4_4_;
          _ZN4core3mem4drop17ha42964a555fb617bE(local_130);
          _ZN4core3ptr261drop_in_place_LT_core__iter__adapters__filter_map__FilterMap_LT_alloc__boxed__Box_LT_dyn_u20_core__iter__traits__iterator__Iterator_u2b_Item_u20__u3d__u20__RF_toml_edit__value__Value_GT__C_alacritty__migrate__migrate_imports___u7b__u7b_closure_u7d__u7d__GT__GT_17hf0cce8b0e762af76E
                    (uVar5,uVar8);
          return;
        }
        local_138 = local_b8;
        local_148 = (undefined4)local_c8;
        uStack_144 = local_c8._4_4_;
        uStack_140 = (undefined4)uStack_c0;
        uStack_13c = uStack_c0._4_4_;
        local_158 = local_d8;
        ppuStack_150 = uStack_d0;
        if ((bVar1 & 1) != 0) {
                    /* try { // try from 00560276 to 00560287 has its CatchHandler @ 005603a2 */
          _ZN9alacritty7migrate9Migration15success_message17h6e70dbedf75118d1E
                    (&local_108,&local_158,1);
          local_110 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_e0 = (undefined **)&DAT_00982f40;
          local_d8 = (undefined8 ***)0x2;
          uStack_c0 = 0;
          uStack_d0 = &local_118;
          local_c8 = 1;
          local_118 = &local_108;
                    /* try { // try from 005602e2 to 005602ea has its CatchHandler @ 00560390 */
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_009dff18)(&local_e0);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_108);
        }
        _ZN4core3ptr50drop_in_place_LT_alacritty__migrate__Migration_GT_17h82cf96c51dcdbc49E
                  (&local_158);
      }
      _ZN4core3mem4drop17ha42964a555fb617bE(local_130);
    }
    _ZN4core3ptr261drop_in_place_LT_core__iter__adapters__filter_map__FilterMap_LT_alloc__boxed__Box_LT_dyn_u20_core__iter__traits__iterator__Iterator_u2b_Item_u20__u3d__u20__RF_toml_edit__value__Value_GT__C_alacritty__migrate__migrate_imports___u7b__u7b_closure_u7d__u7d__GT__GT_17hf0cce8b0e762af76E
              (uVar5,uVar8);
  }
  *param_1 = 0x8000000000000000;
  return;
}