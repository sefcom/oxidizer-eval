undefined8
_ZN4just15recipe_resolver14RecipeResolver14resolve_recipe17h2d75c63668874e04E
          (undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined auVar6 [16];
  long local_2b8;
  long lStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  long *local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  long local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  long local_228;
  long lStack_220;
  long lStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined local_1d0 [168];
  long local_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined local_d0 [168];
  
                    /* try { // try from 003873b3 to 00387445 has its CatchHandler @ 003876c4 */
  auVar6 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(param_4 + 0x90);
  puVar3 = (undefined8 *)
           _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h3ce94925646e0fd0E
                     (*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),auVar6._0_8_,
                      auVar6._8_8_);
  if (puVar3 == (undefined8 *)0x0) {
    auVar6 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(param_4 + 0x90)
    ;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6fed9915a4cca328E
              (param_3,auVar6._0_8_,auVar6._8_8_,&PTR_s_src_recipe_resolver_rs_00530d20);
    local_2b8 = *(long *)(param_4 + 0x20);
    lStack_2b0 = *(long *)(param_4 + 0x28) * 0x30 + local_2b8;
    local_2a8 = param_2;
    uStack_2a0 = param_4;
    local_298 = param_3;
    _ZN4core4iter6traits8iterator8Iterator7collect17h124cdc44d57f2113E(&local_238,&local_2b8);
    if ((char)local_1f0 == '%') {
      local_258 = (undefined4)local_238;
      uStack_254 = local_238._4_4_;
      uStack_250 = (undefined4)uStack_230;
      uStack_24c = uStack_230._4_4_;
      local_248 = local_228;
      if (*(long *)(param_3 + 0x10) != 0) {
        *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + -1;
      }
      (*(code *)PTR_memcpy_00565e28)(&local_238,param_4,0x100);
      _ZN4just17unresolved_recipe95__LT_impl_u20_just__recipe__Recipe_LT_just__unresolved_dependency__UnresolvedDependency_GT__GT_7resolve17h282f902b1bf99931E
                (&local_128,&local_238,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                 &local_258);
      local_2b8 = lStack_120;
      lStack_2b0 = lStack_118;
      local_2a8 = lStack_110;
      uStack_2a0 = lStack_108;
      local_298 = local_100;
      uStack_290 = uStack_f8;
      local_288 = local_f0;
      uStack_280 = uStack_e8;
      local_278 = local_e0;
      uStack_274 = uStack_dc;
      uStack_270 = uStack_d8;
      uStack_26c = uStack_d4;
      (*(code *)PTR_memcpy_00565e28)(local_1d0,local_d0,0xa8);
      lStack_220 = local_2b8;
      lStack_218 = lStack_2b0;
      uStack_210 = (undefined4)local_2a8;
      uStack_20c = local_2a8._4_4_;
      uStack_208 = (undefined4)uStack_2a0;
      uStack_204 = uStack_2a0._4_4_;
      local_200 = (undefined4)local_298;
      uStack_1fc = local_298._4_4_;
      uStack_1f8 = (undefined4)uStack_290;
      uStack_1f4 = uStack_290._4_4_;
      local_1f0 = (undefined4)local_288;
      uStack_1ec = local_288._4_4_;
      uStack_1e8 = (undefined4)uStack_280;
      uStack_1e4 = uStack_280._4_4_;
      local_1e0 = local_278;
      uStack_1dc = uStack_274;
      uStack_1d8 = uStack_270;
      uStack_1d4 = uStack_26c;
      local_238 = 1;
      uStack_230 = 1;
      local_228 = local_128;
      plVar5 = (long *)_ZN5alloc5boxed12Box_LT_T_GT_3new17hd5615bb7f3f87468E(&local_238);
      LOCK();
      lVar1 = *plVar5;
      *plVar5 = *plVar5 + 1;
      UNLOCK();
      local_260 = plVar5;
      if (*plVar5 != 0 && SCARRY8(lVar1,1) == *plVar5 < 0) {
                    /* try { // try from 00387690 to 0038769a has its CatchHandler @ 003876b5 */
        uVar4 = _ZN4just5table14Table_LT_V_GT_6insert17h70ddfb0fda70ad86E(param_2 + 0x20,plVar5);
        *param_1 = plVar5;
        *(undefined *)(param_1 + 9) = 0x25;
        return uVar4;
      }
      goto LAB_003876b3;
    }
    lStack_108 = lStack_218;
    lStack_118 = local_228;
    lStack_110 = lStack_220;
    local_128 = local_238;
    lStack_120 = uStack_230;
    *(undefined4 *)((long)param_1 + 0x4c) = uStack_1ec;
    *(uint *)((long)param_1 + 0x49) = CONCAT13((undefined)uStack_1ec,local_1f0._1_3_);
    param_1[8] = CONCAT44(uStack_1f4,uStack_1f8);
    param_1[6] = CONCAT44(uStack_204,uStack_208);
    param_1[7] = CONCAT44(uStack_1fc,local_200);
    param_1[4] = lStack_218;
    param_1[5] = CONCAT44(uStack_20c,uStack_210);
    param_1[2] = local_228;
    param_1[3] = lStack_220;
    *(undefined4 *)param_1 = (undefined4)local_238;
    *(undefined4 *)((long)param_1 + 4) = local_238._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_230;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_230._4_4_;
    *(char *)(param_1 + 9) = (char)local_1f0;
  }
  else {
    plVar5 = (long *)*puVar3;
    LOCK();
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + 1;
    UNLOCK();
    if (*plVar5 == 0 || SCARRY8(lVar1,1) != *plVar5 < 0) {
LAB_003876b3:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *param_1 = *puVar3;
    *(undefined *)(param_1 + 9) = 0x25;
  }
  uVar4 = _ZN4core3ptr98drop_in_place_LT_just__recipe__Recipe_LT_just__unresolved_dependency__UnresolvedDependency_GT__GT_17ha19f91e5b971396eE
                    (param_4);
  return uVar4;
}