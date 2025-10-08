void _ZN4just10subcommand10Subcommand4show17h0bdf6b2545355152E
               (undefined *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined auVar9 [16];
  undefined7 local_b0;
  undefined uStack_a9;
  undefined7 uStack_a8;
  undefined uStack_a1;
  undefined7 uStack_a0;
  undefined uStack_99;
  undefined7 uStack_98;
  undefined uStack_91;
  undefined7 local_90;
  undefined uStack_89;
  long **local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long local_68;
  long *local_60;
  undefined **ppuStack_58;
  undefined local_50 [8];
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = *(long *)(param_4 + 8);
  lVar2 = *(long *)(param_4 + 0x10);
  local_68 = param_2;
  auVar9 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h558ebd0999430957E
                     (lVar2 + -1,lVar1,lVar2,&PTR_DAT_00531448);
  lVar8 = auVar9._0_8_;
  if (lVar8 != 0 && auVar9._8_8_ != 0) {
    lVar6 = lVar8;
    do {
      lVar7 = lVar6 + 0x18;
      param_3 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17he9fea18cadddca02E
                          (*(undefined8 *)(param_3 + 0x2a0),*(undefined8 *)(param_3 + 0x2a8),
                           *(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
      if (param_3 == 0) {
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hbfd22dd80b4b7c3fE
                  (&local_b0,param_4);
        *(ulong *)(param_1 + 0x10) = CONCAT17(uStack_a1,uStack_a8);
        *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_99,uStack_a0);
        *param_1 = 0x35;
        *(ulong *)(param_1 + 8) = CONCAT17(uStack_a9,local_b0);
        return;
      }
    } while ((lVar7 != auVar9._8_8_ * 0x18 + lVar8) && (lVar6 = lVar7, lVar7 != 0));
  }
  if ((lVar2 != 0) && (lVar8 = lVar1 + lVar2 * 0x18 + -0x18, lVar8 != 0)) {
    lVar1 = lVar1 + lVar2 * 0x18;
    local_38 = _ZN4just8justfile8Justfile9get_alias17h42732d97284ae40eE
                         (*(undefined8 *)(param_3 + 0x268),*(undefined8 *)(param_3 + 0x270),
                          *(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    if (local_38 == 0) {
      plVar5 = (long *)_ZN4just8justfile8Justfile10get_recipe17h2487a07572812fbdE
                                 (param_3,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8)
                                 );
      if (plVar5 == (long *)0x0) {
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00565d98
        )(&local_80,lVar8);
                    /* try { // try from 00390f01 to 00390f0d has its CatchHandler @ 00390f82 */
        _ZN4just8justfile8Justfile14suggest_recipe17hb59653753af09818E
                  (&local_60,param_3,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
        *(undefined8 *)(param_1 + 0x38) = local_70;
        *(long ***)(param_1 + 0x28) = local_80;
        *(undefined **)(param_1 + 0x30) = puStack_78;
        uStack_a9 = SUB81(local_60,0);
        uStack_a8 = (undefined7)((ulong)local_60 >> 8);
        uStack_a1 = SUB81(ppuStack_58,0);
        uStack_a0 = (undefined7)((ulong)ppuStack_58 >> 8);
        uStack_99 = local_50[0];
        uStack_98 = local_50._1_7_;
        uStack_91 = (undefined)uStack_48;
        *param_1 = 0x34;
        *(ulong *)(param_1 + 1) = CONCAT17(uStack_a9,local_b0);
        *(ulong *)(param_1 + 9) = CONCAT17(uStack_a1,uStack_a8);
        *(ulong *)(param_1 + 0x11) = CONCAT17(uStack_99,uStack_a0);
        *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_91,uStack_98);
        *(undefined8 *)(param_1 + 0x20) = uStack_48;
        return;
      }
      _ZN4just5color5Color6stdout17h99dee7c87aa8c485E(local_50,local_68 + 0x184);
      ppuStack_58 = &
                    PTR__ZN4core3ptr41drop_in_place_LT_just__recipe__Recipe_GT_17h23f6c53970923ce4E_00530370
      ;
      local_80 = &local_60;
      puStack_78 = 
      PTR__ZN67__LT_just__color_display__Wrapper_u20_as_u20_core__fmt__Display_GT_3fmt17hc72f260d5107bcedE_00565e40
      ;
      local_b0 = 0x52dbd8;
      uStack_a9 = 0;
      uStack_a8 = 2;
      uStack_a1 = 0;
      local_90 = 0;
      uStack_89 = 0;
      uStack_a0 = SUB87(&local_80,0);
      uStack_99 = (undefined)((ulong)&local_80 >> 0x38);
      uStack_98 = 1;
      uStack_91 = 0;
      local_60 = plVar5;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40)(&local_b0);
    }
    else {
      uVar4 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                        (*(long *)(local_38 + 0x18) + 0xa0);
      plVar5 = (long *)_ZN4just8justfile8Justfile10get_recipe17h2487a07572812fbdE(param_3,uVar4);
      puVar3 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40;
      if (plVar5 == (long *)0x0) goto LAB_00390f75;
      local_60 = &local_38;
      ppuStack_58 = (undefined **)
                    _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h05a08090f72f316cE;
      local_b0 = 0x52dbd8;
      uStack_a9 = 0;
      uStack_a8 = 2;
      uStack_a1 = 0;
      local_90 = 0;
      uStack_89 = 0;
      uStack_a0 = SUB87(&local_60,0);
      uStack_99 = (undefined)((ulong)&local_60 >> 0x38);
      uStack_98 = 1;
      uStack_91 = 0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40)(&local_b0);
      _ZN4just5color5Color6stdout17h99dee7c87aa8c485E(local_50,local_68 + 0x184);
      ppuStack_58 = &
                    PTR__ZN4core3ptr41drop_in_place_LT_just__recipe__Recipe_GT_17h23f6c53970923ce4E_00530370
      ;
      puStack_78 = 
      PTR__ZN67__LT_just__color_display__Wrapper_u20_as_u20_core__fmt__Display_GT_3fmt17hc72f260d5107bcedE_00565e40
      ;
      local_b0 = 0x52dbd8;
      uStack_a9 = 0;
      uStack_a8 = 2;
      uStack_a1 = 0;
      local_90 = 0;
      uStack_89 = 0;
      uStack_a0 = SUB87(&local_80,0);
      uStack_99 = (undefined)((ulong)&local_80 >> 0x38);
      uStack_98 = 1;
      uStack_91 = 0;
      local_80 = &local_60;
      local_60 = plVar5;
      (*(code *)puVar3)(&local_b0);
    }
    *param_1 = 0x38;
    return;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)(&PTR_DAT_00531460);
LAB_00390f75:
  uVar4 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)
                    (&PTR_DAT_00531478);
                    /* catch() { ... } // from try @ 00390f01 with catch @ 00390f82 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_80);
  _Unwind_Resume(uVar4);
  return;
}