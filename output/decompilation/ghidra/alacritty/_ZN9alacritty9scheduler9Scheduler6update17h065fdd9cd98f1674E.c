undefined  [16] _ZN9alacritty9scheduler9Scheduler6update17h065fdd9cd98f1674E(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  undefined auVar9 [16];
  undefined8 local_398;
  undefined8 local_390;
  undefined local_388 [192];
  undefined8 local_2c8;
  int local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined local_298 [176];
  int local_1e8 [60];
  undefined local_f8 [200];
  
  auVar9 = (*(code *)PTR__ZN3std4time7Instant3now17h767314cc8c6c5886E_009de3e8)();
  lVar5 = param_1 + 0x20;
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar7 = auVar9._8_8_ & 0xffffffff;
    do {
      while( true ) {
        lVar4 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_3get17h584517b93fcf50dfE
                          (lVar5);
        if (lVar4 == 0) {
          uVar6 = (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_009de340)
                            ("Out of bounds access",0x14,&PTR_s_alacritty_src_scheduler_rs_00984198)
          ;
                    /* catch() { ... } // from try @ 0056d9a3 with catch @ 0056dabe
                       catch() { ... } // from try @ 0056d9ed with catch @ 0056dabe */
                    /* try { // try from 0056dac1 to 0056daca has its CatchHandler @ 0056dad3 */
          _ZN4core3ptr44drop_in_place_LT_alacritty__event__Event_GT_17h62e9a8616c9ea4f1E(&local_398)
          ;
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume(uVar6);
        }
        if (*(long *)(lVar4 + 0xc0) == auVar9._0_8_) {
          if ((uint)uVar7 < *(uint *)(lVar4 + 200)) goto LAB_0056da6f;
        }
        else if (auVar9._0_8_ < *(long *)(lVar4 + 0xc0)) goto LAB_0056da6f;
        _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17h1e3b0af02de6cd46E
                  (local_1e8,lVar5);
        if (local_1e8[0] == 2) break;
        (*(code *)PTR_memcpy_009de0b0)(&local_398,local_1e8,0xf0);
        iVar3 = local_2c0;
        uVar2 = local_2c8;
        uVar1 = local_390;
        uVar6 = local_398;
        uVar8 = (uint)uVar7;
        if (local_2c0 != 1000000000) {
                    /* try { // try from 0056d9a3 to 0056d9b7 has its CatchHandler @ 0056dabe */
          _ZN66__LT_alacritty__event__EventType_u20_as_u20_core__clone__Clone_GT_5clone17hc479ebfb767007feE
                    (local_f8,local_388);
          local_2a8 = uVar6;
          local_2a0 = uVar1;
          (*(code *)PTR_memcpy_009de0b0)(local_298,local_f8,0xb0);
                    /* try { // try from 0056d9ed to 0056da0b has its CatchHandler @ 0056dabe */
          _ZN9alacritty9scheduler9Scheduler8schedule17hb60357d8e26bddb3E
                    (param_1,&local_2a8,uVar2,iVar3,1,local_2b8,local_2b0);
          uVar8 = auVar9._8_4_;
        }
        uVar7 = (ulong)uVar8;
        (*(code *)PTR_memcpy_009de0b0)(&local_2a8,&local_398,0xc0);
        _ZN5winit10event_loop23EventLoopProxy_LT_T_GT_10send_event17ha003452b73db1a9aE
                  (local_f8,param_1,&local_2a8);
        _ZN4core3ptr125drop_in_place_LT_core__result__Result_LT__LP__RP__C_winit__event_loop__EventLoopClosed_LT_alacritty__event__Event_GT__GT__GT_17ha34e38cbba7ecdb0E
                  (local_f8);
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_0056da6f;
      }
      _ZN4core3ptr76drop_in_place_LT_core__option__Option_LT_alacritty__scheduler__Timer_GT__GT_17h4830a0e7a5b3781aE
                (local_1e8);
    } while (*(long *)(param_1 + 0x38) != 0);
  }
LAB_0056da6f:
  lVar5 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_3get17h584517b93fcf50dfE(lVar5);
  if (lVar5 == 0) {
    uVar7 = 1000000000;
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar5 + 0xc0);
    uVar7 = (ulong)*(uint *)(lVar5 + 200);
  }
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = uVar6;
  return auVar9;
}