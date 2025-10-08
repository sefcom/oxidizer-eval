void _ZN4just17unresolved_recipe95__LT_impl_u20_just__recipe__Recipe_LT_just__unresolved_dependency__UnresolvedDependency_GT__GT_7resolve17h282f902b1bf99931E
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  long local_190;
  long local_188;
  long local_180;
  undefined local_178 [16];
  undefined local_168 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_190 = param_2[5];
  local_188 = *(long *)(param_5 + 0x10);
  if (local_190 != local_188) {
    local_1f8 = &local_180;
    uStack_1f0 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00566230
    ;
    local_1e8 = &local_68;
    uStack_1e0 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00566230
    ;
    local_158 = &PTR_s_UnresolvedRecipe_resolve__depen_00531928;
    uStack_150 = 2;
    local_148 = &local_1f8;
    local_140 = (undefined8 *)0x2;
    uStack_138 = 0;
    local_180 = local_190;
    local_68 = local_188;
    (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_00566218)
              (0,&local_190,&local_188,&local_158,&PTR_s_src_unresolved_recipe_rsThe__whi_00531948);
LAB_00394525:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  local_1a0 = param_3;
  local_198 = param_4;
  _ZN4core4iter6traits8iterator8Iterator3zip17hdb4c70db203b6305E
            (&local_68,param_2[4],local_190 * 0x30 + param_2[4],*(undefined8 *)(param_5 + 8));
  auVar13 = _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17h23faae95849f4f62E
                      (&local_68);
  puVar6 = PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10;
  if (auVar13._0_8_ != 0) {
    do {
      plVar11 = auVar13._8_8_;
      lVar12 = auVar13._0_8_;
                    /* try { // try from 00394068 to 00394097 has its CatchHandler @ 00394560 */
      uVar8 = _ZN4just8namepath8Namepath4last17hd204dfab89d26ff3E
                        (*(undefined8 *)(lVar12 + 0x20),*(undefined8 *)(lVar12 + 0x28));
      auVar13 = (*(code *)puVar6)(uVar8);
      local_178 = auVar13;
      auVar14 = (*(code *)puVar6)(*plVar11 + 0xa0);
      local_168 = auVar14;
      cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                        (auVar13._0_8_,auVar13._8_8_,auVar14._0_8_,auVar14._8_8_);
      if (cVar7 == '\0') {
        local_158 = (undefined **)0x0;
                    /* try { // try from 00394457 to 00394524 has its CatchHandler @ 00394562 */
        (*(code *)PTR__ZN4core9panicking13assert_failed17hd806a79f1961bff5E_00566d40)
                  (0,local_178,local_168,&local_158,&PTR_s_src_unresolved_recipe_rsThe__whi_00531960
                  );
        goto LAB_00394525;
      }
      _ZN4just6recipe15Recipe_LT_D_GT_14argument_range17hb6d51d234f252302E
                (&local_158,*(undefined8 *)(*plVar11 + 0x60),*(undefined8 *)(*plVar11 + 0x68));
      cVar7 = _ZN4core3ops5range11RangeBounds8contains17hb1bc8a8e40d7f57eE
                        (&local_158,*(undefined8 *)(lVar12 + 0x10));
      if (cVar7 == '\0') {
                    /* try { // try from 0039432d to 003943f0 has its CatchHandler @ 00394562 */
        uVar9 = _ZN4just8namepath8Namepath4last17hd204dfab89d26ff3E
                          (*(undefined8 *)(lVar12 + 0x20),*(undefined8 *)(lVar12 + 0x28));
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17ha18ac3b8a47dca8fE
                  (&local_158,*(undefined8 *)(lVar12 + 0x20),*(undefined8 *)(lVar12 + 0x28));
        local_1e8 = local_148;
        local_1f8._0_4_ = SUB84(local_158,0);
        local_1f8._4_4_ = local_158._4_4_;
        uStack_1f0._0_4_ = (undefined4)uStack_150;
        uStack_1f0._4_4_ = uStack_150._4_4_;
        uVar8 = *(undefined8 *)(lVar12 + 0x10);
        lVar12 = *(long *)(*plVar11 + 0x60);
        lVar4 = *(long *)(*plVar11 + 0x68);
        uVar10 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17hca6170881fec0ef2E
                           (lVar12,lVar4 * 0xd0 + lVar12);
        local_128 = _ZN4just6recipe15Recipe_LT_D_GT_13max_arguments17h4d291109c050f382E
                              (lVar12,lVar4);
        uStack_150 = CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
        local_148 = (undefined8 *)CONCAT44(uStack_1f0._4_4_,(undefined4)uStack_1f0);
        local_140 = local_1e8;
        local_158 = (undefined **)0x8000000000000019;
        uStack_138 = uVar8;
        local_130 = uVar10;
        _ZN4just5token5Token5error17h986494da066a4455E(&local_1f8,uVar9,&local_158);
        param_1[9] = local_1b8;
        param_1[10] = uStack_1b0;
        *(undefined4 *)(param_1 + 7) = local_1c8;
        *(undefined4 *)((long)param_1 + 0x3c) = uStack_1c4;
        *(undefined4 *)(param_1 + 8) = uStack_1c0;
        *(undefined4 *)((long)param_1 + 0x44) = uStack_1bc;
        *(undefined4 *)(param_1 + 5) = local_1d8;
        *(undefined4 *)((long)param_1 + 0x2c) = uStack_1d4;
        *(undefined4 *)(param_1 + 6) = uStack_1d0;
        *(undefined4 *)((long)param_1 + 0x34) = uStack_1cc;
        *(undefined4 *)(param_1 + 3) = (undefined4)local_1e8;
        *(undefined4 *)((long)param_1 + 0x1c) = local_1e8._4_4_;
        *(undefined4 *)(param_1 + 4) = (undefined4)uStack_1e0;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_1e0._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)local_1f8;
        *(undefined4 *)((long)param_1 + 0xc) = local_1f8._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1f0;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_1f0._4_4_;
        *param_1 = 0x8000000000000000;
                    /* try { // try from 00394426 to 0039442f has its CatchHandler @ 00394527 */
        _ZN4core3ptr88drop_in_place_LT_alloc__vec__Vec_LT_alloc__sync__Arc_LT_just__recipe__Recipe_GT__GT__GT_17h1d087e065d0c4e7cE
                  (param_5);
        _ZN4core3ptr98drop_in_place_LT_just__recipe__Recipe_LT_just__unresolved_dependency__UnresolvedDependency_GT__GT_17ha19f91e5b971396eE
                  (param_2);
        return;
      }
      auVar13 = _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17h23faae95849f4f62E
                          (&local_68);
    } while (auVar13._0_8_ != 0);
  }
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h0ac5e7818b1c5b68E
            (&local_1f8,param_2 + 3);
  _ZN4core4iter6traits8iterator8Iterator3zip17ha813e2278cf83b22E(&local_158,&local_1f8,param_5);
                    /* try { // try from 0039412f to 0039413e has its CatchHandler @ 00394533 */
  _ZN4core4iter6traits8iterator8Iterator7collect17hc7286269246af594E(&local_68,&local_158);
                    /* try { // try from 0039413f to 00394158 has its CatchHandler @ 0039452e */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
            (&local_158,local_1a0,local_198);
  local_1e8 = local_148;
  local_1f8 = (long *)local_158;
  uStack_1f0 = (undefined *)uStack_150;
  if (local_148 != (undefined8 *)0x0) {
                    /* try { // try from 0039417c to 003941b4 has its CatchHandler @ 0039453e */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hb25a112a407b21ecE
              (&local_1f8,&DAT_0016e4ee,&DAT_0016e4f0);
  }
  auVar13 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(param_2 + 0x12);
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hb25a112a407b21ecE
            (&local_1f8,auVar13._0_8_,auVar13._8_8_ + auVar13._0_8_);
  local_70 = param_2[0x1d];
  local_80 = param_2[0x1b];
  uStack_78 = param_2[0x1c];
  local_130 = local_58;
  local_140 = (undefined8 *)local_68;
  uStack_138 = uStack_60;
  local_f8 = param_2[0xc];
  uStack_f0 = param_2[0xd];
  local_e8 = param_2[0xe];
  uVar3 = *(undefined4 *)(param_2 + 0x1f);
  local_118 = param_2[8];
  local_128 = param_2[6];
  uStack_120 = param_2[7];
  local_c8 = param_2[0x12];
  uStack_c0 = param_2[0x13];
  local_b8 = *(undefined4 *)(param_2 + 0x14);
  uStack_b4 = *(undefined4 *)((long)param_2 + 0xa4);
  uStack_b0 = *(undefined4 *)(param_2 + 0x15);
  uStack_ac = *(undefined4 *)((long)param_2 + 0xac);
  local_a8 = *(undefined4 *)(param_2 + 0x16);
  uStack_a4 = *(undefined4 *)((long)param_2 + 0xb4);
  uStack_a0 = *(undefined4 *)(param_2 + 0x17);
  uStack_9c = *(undefined4 *)((long)param_2 + 0xbc);
  local_98 = *(undefined4 *)(param_2 + 0x18);
  uStack_94 = *(undefined4 *)((long)param_2 + 0xc4);
  uStack_90 = *(undefined4 *)(param_2 + 0x19);
  uStack_8c = *(undefined4 *)((long)param_2 + 0xcc);
  local_88 = param_2[0x1a];
  local_e0 = local_1f8;
  uStack_d8 = uStack_1f0;
  local_d0 = local_1e8;
  local_110 = param_2[9];
  uStack_108 = param_2[10];
  local_100 = param_2[0xb];
  uVar8 = param_2[0x1e];
  uVar2 = *(undefined2 *)((long)param_2 + 0xfc);
  uVar1 = *(undefined *)((long)param_2 + 0xfe);
  local_158 = (undefined **)*param_2;
  uStack_150 = param_2[1];
  local_148 = (undefined8 *)param_2[2];
  (*(code *)PTR_memcpy_00565e28)(param_1,&local_158,0xf0);
  param_1[0x1e] = uVar8;
  *(undefined4 *)(param_1 + 0x1f) = uVar3;
  *(undefined2 *)((long)param_1 + 0xfc) = uVar2;
  *(undefined *)((long)param_1 + 0xfe) = uVar1;
  _ZN4core3ptr40drop_in_place_LT_regex__error__Error_GT_17h38559d1aa9a290b7E(param_2 + 0xf);
  return;
}