undefined8
_ZN2fd4exec7command16execute_commands17h175421eda908848dE
          (undefined4 *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char local_2f4;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  long local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  uint local_278;
  long local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  long local_200;
  undefined8 local_1f8;
  undefined local_1f0 [216];
  long local_118;
  undefined8 local_110;
  undefined local_108 [216];
  
  local_2e8 = 0;
  local_2e0 = 8;
  local_2d8 = 0;
  local_238 = *(undefined8 *)(param_1 + 8);
  local_258 = *param_1;
  uStack_254 = param_1[1];
  uStack_250 = param_1[2];
  uStack_24c = param_1[3];
  local_248 = *(undefined8 *)(param_1 + 4);
  uStack_240 = *(undefined8 *)(param_1 + 6);
  local_2d0 = param_2;
  if (param_3 == 0) {
                    /* try { // try from 002f24c0 to 002f24d4 has its CatchHandler @ 002f26bc */
    while (_ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf58a98732210d87cE
                     (&local_118,&local_258), local_118 != -0x7fffffffffffffff) {
      if (local_118 == -0x8000000000000000) goto LAB_002f25c9;
      local_200 = local_118;
      local_1f8 = local_110;
      (*(code *)PTR_memcpy_0053fd28)(local_1f0,local_108,0xd8);
                    /* try { // try from 002f2524 to 002f256b has its CatchHandler @ 002f2696 */
      (*(code *)PTR__ZN6argmax7Command5spawn17heb6b179f5482a956E_005408d0)(&local_2c8,&local_200);
      if ((int)local_2c8 == 1) {
        local_2a0 = uStack_2c0;
        goto LAB_002f260f;
      }
      uStack_218 = uStack_2b8._4_4_;
      uStack_214 = uStack_2b0;
      uStack_210 = uStack_2ac;
      local_228 = local_2c8._4_4_;
      uStack_224 = (undefined4)uStack_2c0;
      uStack_220 = uStack_2c0._4_4_;
      local_21c = (undefined4)uStack_2b8;
      (*(code *)PTR__ZN3std7process5Child16wait_with_output17h38fea98de738bb30E_005408d8)
                (&local_2a8,&local_228);
      uVar5 = local_288;
      uVar3 = local_290;
      if (local_2a8 == -0x8000000000000000) goto LAB_002f260f;
      lVar2 = local_2a8;
      uVar4 = local_2a0;
      if ((local_278 & 0xff7f) != 0) goto LAB_002f25dc;
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc97baa9231dcb408E
                (local_2a8,local_2a0);
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc97baa9231dcb408E(uVar3,uVar5);
                    /* try { // try from 002f25ae to 002f25b5 has its CatchHandler @ 002f26bc */
      _ZN4core3ptr36drop_in_place_LT_argmax__Command_GT_17hca65ebb0b5b23438E(&local_200);
    }
  }
  else {
                    /* try { // try from 002f23b0 to 002f23c4 has its CatchHandler @ 002f26be */
    while (_ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf58a98732210d87cE
                     (&local_118,&local_258), local_118 != -0x7fffffffffffffff) {
      if (local_118 == -0x8000000000000000) {
LAB_002f25c9:
                    /* try { // try from 002f25c9 to 002f25cf has its CatchHandler @ 002f2678 */
        _ZN2fd4exec7command16handle_cmd_error17he0c689dc29352ec0E(0);
        _ZN4core3ptr52drop_in_place_LT_fd__exec__command__OutputBuffer_GT_17h4d7411562d7912bdE
                  (&local_2e8);
        return 4;
      }
      local_200 = local_118;
      local_1f8 = local_110;
      (*(code *)PTR_memcpy_0053fd28)(local_1f0,local_108,0xd8);
                    /* try { // try from 002f2414 to 002f2421 has its CatchHandler @ 002f2694 */
      (*(code *)PTR__ZN6argmax7Command6output17h28af624030da78a1E_005408c8)(&local_2a8,&local_200);
      uVar1 = local_278;
      uVar5 = local_288;
      uVar3 = local_290;
      uVar4 = local_2a0;
      lVar2 = local_2a8;
      if (local_2a8 == -0x8000000000000000) goto LAB_002f260f;
      local_270 = local_2a8;
      local_268 = local_2a0;
      local_260 = local_298;
      local_2c8 = local_290;
      uStack_2c0 = local_288;
      uStack_2b8 = local_280;
                    /* try { // try from 002f2477 to 002f248d has its CatchHandler @ 002f2692 */
      _ZN2fd4exec7command12OutputBuffer4push17h5a6250b672ac0dfeE(&local_2e8,&local_270,&local_2c8);
      if ((uVar1 & 0xff7f) != 0) goto LAB_002f25dc;
                    /* try { // try from 002f249a to 002f24a1 has its CatchHandler @ 002f26be */
      _ZN4core3ptr36drop_in_place_LT_argmax__Command_GT_17hca65ebb0b5b23438E(&local_200);
    }
  }
  _ZN2fd4exec7command12OutputBuffer5write17h9f1254745ddb0158E(&local_2e8);
  return 2;
LAB_002f260f:
  uVar3 = local_2a0;
  local_2c8 = local_2a0;
                    /* try { // try from 002f2619 to 002f2622 has its CatchHandler @ 002f2681 */
  _ZN2fd4exec7command12OutputBuffer5write17h9f1254745ddb0158E(&local_2e8);
                    /* try { // try from 002f2623 to 002f2632 has its CatchHandler @ 002f267a */
  _ZN2fd4exec7command16handle_cmd_error17he0c689dc29352ec0E(&local_200,uVar3);
  goto LAB_002f2633;
LAB_002f25dc:
                    /* try { // try from 002f25dc to 002f25e5 has its CatchHandler @ 002f2654 */
  _ZN2fd4exec7command12OutputBuffer5write17h9f1254745ddb0158E(&local_2e8);
  local_2f4 = (char)param_3;
  if (local_2f4 == '\0') {
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc97baa9231dcb408E(lVar2,uVar4);
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc97baa9231dcb408E(uVar3,uVar5);
  }
LAB_002f2633:
  _ZN4core3ptr36drop_in_place_LT_argmax__Command_GT_17hca65ebb0b5b23438E(&local_200);
  return 4;
}