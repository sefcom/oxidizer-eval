void _ZN8uu_tsort5Graph20find_and_break_cycle17hd1217009a967d454E
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined auVar8 [16];
  long local_f0;
  undefined **local_e8;
  undefined local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 **local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a0;
  code *local_98;
  undefined8 *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  long local_38;
  
  local_60 = param_2;
  _ZN8uu_tsort5Graph12detect_cycle17he977b3591bc78cb9E(&local_48,param_1);
                    /* try { // try from 001604ec to 001604f9 has its CatchHandler @ 001607b1 */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001f1c90
  )(&local_d0,param_1);
  local_68 = local_c0;
  local_78 = (undefined4)local_d0;
  uStack_74 = local_d0._4_4_;
  uStack_70 = (undefined4)uStack_c8;
  uStack_6c = uStack_c8._4_4_;
  local_80 = 2;
                    /* try { // try from 0016051d to 0016059f has its CatchHandler @ 0016079e */
  (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f1dd8)(1);
  local_e0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f1c48)();
  local_a0 = (undefined8 *)local_e0;
  local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdba2249fdd736854E;
  local_90 = &local_80;
  local_88 = 
  PTR__ZN59__LT_uu_tsort__TsortError_u20_as_u20_core__fmt__Display_GT_3fmt17h3b33dc5b43b5f539E_001f1ce8
  ;
  local_d0 = &DAT_001eb378;
  uStack_c8 = 3;
  local_b0 = 0;
  local_c0 = &local_a0;
  local_b8 = 2;
  (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f1c50)(&local_d0);
  local_50 = param_1;
  _ZN4core3ptr41drop_in_place_LT_uu_tsort__TsortError_GT_17h9d156dfc799f2429E(&local_80);
  puVar4 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f1c50;
  local_e8 = &PTR_s_src_uu_tsort_src_tsort_001eb3a8;
  if (local_38 == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = local_38;
    local_58 = local_40;
    puVar7 = local_40;
    do {
                    /* try { // try from 00160618 to 0016061f has its CatchHandler @ 001607a0 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1c391e09306501bdE
                (&local_d0,*puVar7,puVar7[1]);
      local_68 = local_c0;
      local_78 = (undefined4)local_d0;
      uStack_74 = local_d0._4_4_;
      uStack_70 = (undefined4)uStack_c8;
      uStack_6c = uStack_c8._4_4_;
      local_80 = 3;
                    /* try { // try from 0016063d to 001606b5 has its CatchHandler @ 001607a2 */
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f1dd8)(1);
      auVar8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f1c48)();
      local_a0 = (undefined8 *)local_e0;
      local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdba2249fdd736854E;
      local_88 = 
      PTR__ZN59__LT_uu_tsort__TsortError_u20_as_u20_core__fmt__Display_GT_3fmt17h3b33dc5b43b5f539E_001f1ce8
      ;
      local_d0 = &DAT_001eb378;
      uStack_c8 = 3;
      local_b0 = 0;
      local_c0 = &local_a0;
      local_b8 = 2;
      local_90 = &local_80;
      local_e0 = auVar8;
      (*(code *)puVar4)(&local_d0);
      _ZN4core3ptr41drop_in_place_LT_uu_tsort__TsortError_GT_17h9d156dfc799f2429E(&local_80);
      uVar6 = local_50;
      puVar5 = local_58;
      puVar7 = puVar7 + 2;
    } while (puVar7 != local_40 + local_38 * 2);
    if (local_38 != 0) {
      if (local_38 != 1) {
        uVar1 = local_58[2];
        uVar2 = local_58[3];
                    /* try { // try from 00160702 to 0016079b has its CatchHandler @ 001607b1 */
        _ZN8uu_tsort5Graph11remove_edge17ha9a469af9283dfcdE
                  (local_50,*local_58,local_58[1],uVar1,uVar2);
        auVar8 = _ZN8uu_tsort5Graph8indegree17h78335c1a80f6dbc5E(uVar6,uVar1,uVar2);
        if ((auVar8 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          if (auVar8._8_8_ == 0) {
            _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17hbf92dcd24a88f4ebE
                      (local_60,uVar1,uVar2,&PTR_s_src_uu_tsort_src_tsort_001eb3f0);
          }
          _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hff7f0467ec13c3ebE
                    (local_48,puVar5);
          return;
        }
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001f1dc8)
                  (&PTR_s_src_uu_tsort_src_tsort_001eb3d8);
        goto LAB_0016079c;
      }
      local_e8 = &PTR_s_src_uu_tsort_src_tsort_001eb3c0;
    }
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001f1b48)
            (local_f0,local_f0,local_e8);
LAB_0016079c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}