void _ZN12forc_publish14md_pre_process16MarkdownDepGraph16topological_sort17h47c705fd8070ccadE
               (undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  local_f0 = param_1;
  local_68 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17he15e8432aab59907E();
  local_88 = PTR_DAT_00f53140;
  uStack_80 = _UNK_00f53148;
  local_78 = _DAT_00f53150;
  uStack_74 = _UNK_00f53154;
  uStack_70 = _UNK_00f53158;
  uStack_6c = _UNK_00f5315c;
  local_90 = param_2;
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17h03b7f5d9d5d89134E(&local_58,param_2);
  auVar8 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h28d1df70ff11cc3fE
                     (&local_58);
  if (auVar8._0_8_ != 0) {
    do {
                    /* try { // try from 00763d61 to 00763d90 has its CatchHandler @ 00764123 */
      _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf5c3ac682d18fe48E
                (&local_160,*(undefined8 *)(auVar8._0_8_ + 8),*(undefined8 *)(auVar8._0_8_ + 0x10));
      local_b8 = local_160;
      uStack_b4 = uStack_15c;
      uStack_b0 = uStack_158;
      uStack_ac = uStack_154;
      _ZN9hashbrown11rustc_entry62__LT_impl_u20_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__GT_11rustc_entry17h11f760c2106583f7E
                (&local_160,&local_88,&local_b8);
      if (CONCAT44(uStack_15c,local_160) == -0x8000000000000000) {
        local_118 = 0x8000000000000000;
      }
      else {
        local_f8 = local_140;
        local_118 = CONCAT44(uStack_15c,local_160);
      }
      _ZN3std11collections4hash3map18Entry_LT_K_C_V_GT_9or_insert17hd11a032a8ee11007E(&local_118);
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17h03b7f5d9d5d89134E
                (&local_160,auVar8._8_8_);
      local_98 = local_140;
      uStack_a0 = uStack_148;
      uStack_9c = uStack_144;
      local_b8 = local_160;
      uStack_b4 = uStack_15c;
      uStack_b0 = uStack_158;
      uStack_ac = uStack_154;
      lVar3 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6b0506ffa8a352c7E
                        (&local_b8);
      while (lVar3 != 0) {
                    /* try { // try from 00763e72 to 00763e9b has its CatchHandler @ 00764129 */
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf5c3ac682d18fe48E
                  (&local_160,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        local_128 = CONCAT44(uStack_14c,local_150);
        local_138 = local_160;
        uStack_134 = uStack_15c;
        uStack_130 = uStack_158;
        uStack_12c = uStack_154;
        _ZN9hashbrown11rustc_entry62__LT_impl_u20_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__GT_11rustc_entry17h11f760c2106583f7E
                  (&local_160,&local_88,&local_138);
        if (CONCAT44(uStack_15c,local_160) == -0x8000000000000000) {
          local_118 = 0x8000000000000000;
        }
        else {
          local_f8 = local_140;
          local_118 = CONCAT44(uStack_15c,local_160);
        }
        piVar4 = (int *)_ZN3std11collections4hash3map18Entry_LT_K_C_V_GT_9or_insert17hd11a032a8ee11007E
                                  (&local_118);
        *piVar4 = *piVar4 + 1;
        lVar3 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6b0506ffa8a352c7E
                          (&local_b8);
      }
      auVar8 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h28d1df70ff11cc3fE
                         (&local_58);
    } while (auVar8._0_8_ != 0);
  }
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17h03b7f5d9d5d89134E(&local_160,&local_88);
                    /* try { // try from 00763ed8 to 00763ee4 has its CatchHandler @ 00764121 */
  _ZN4core4iter6traits8iterator8Iterator7collect17hd412d4f92a30cd8aE(&local_118,&local_160);
  local_e8 = 0;
  uStack_e0 = 8;
  local_d8 = 0;
  _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17hf0df2804a5340476E
            (&local_d0,&local_118);
  if (CONCAT44(uStack_cc,local_d0) == -0x8000000000000000) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      local_128 = local_c0;
      local_138 = local_d0;
      uStack_134 = uStack_cc;
      uStack_130 = uStack_c8;
      uStack_12c = uStack_c4;
                    /* try { // try from 00763ff9 to 0076403c has its CatchHandler @ 00764125 */
      _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf5c3ac682d18fe48E
                (&local_160,CONCAT44(uStack_c4,uStack_c8));
      local_a8 = CONCAT44(uStack_14c,local_150);
      local_b8 = local_160;
      uStack_b4 = uStack_15c;
      uStack_b0 = uStack_158;
      uStack_ac = uStack_154;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h538ff0db778a06f9E(&local_e8,&local_b8);
      lVar5 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h290608a7b67d6ebbE
                        (local_90,&local_138);
      if (lVar5 != 0) {
        _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17h03b7f5d9d5d89134E
                  (&local_160,lVar5 + 0x18);
        while( true ) {
          lVar5 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6b0506ffa8a352c7E
                            (&local_160);
          if (lVar5 == 0) break;
                    /* try { // try from 00764074 to 007640cc has its CatchHandler @ 00764127 */
          lVar6 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h57d4880cedffaf93E
                            (&local_88,lVar5);
          if (lVar6 == 0) {
                    /* try { // try from 00764112 to 0076411e has its CatchHandler @ 00764141 */
            (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_01048e68)
                      (&PTR_s_forc_plugins_forc_publish_src_md_00f53f10);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          piVar4 = (int *)(lVar6 + 0x18);
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf5c3ac682d18fe48E
                      (&local_b8,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
            local_48 = local_a8;
            local_58 = local_b8;
            uStack_54 = uStack_b4;
            uStack_50 = uStack_b0;
            uStack_4c = uStack_ac;
            _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17hafd136424c0bc826E
                      (&local_118,&local_58);
          }
        }
      }
      lVar3 = lVar3 + 1;
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h355ad17cb4a62d71E
                (CONCAT44(uStack_134,local_138),CONCAT44(uStack_12c,uStack_130));
      _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17hf0df2804a5340476E
                (&local_d0,&local_118);
    } while (CONCAT44(uStack_cc,local_d0) != -0x8000000000000000);
  }
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h9be087add58bb5cfE
            (0x8000000000000000,CONCAT44(uStack_c4,uStack_c8));
  if (lVar3 == CONCAT44(uStack_6c,uStack_70)) {
    local_f0[3] = local_d8;
    *(undefined4 *)(local_f0 + 1) = (undefined4)local_e8;
    *(undefined4 *)((long)local_f0 + 0xc) = local_e8._4_4_;
    *(undefined4 *)(local_f0 + 2) = (undefined4)uStack_e0;
    *(undefined4 *)((long)local_f0 + 0x14) = uStack_e0._4_4_;
    uVar7 = 6;
  }
  else {
    _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17hf8f879b1104fcb5aE
              (&local_e8);
    uVar7 = 3;
  }
  puVar2 = local_f0;
  _ZN4core3ptr86drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT_std__path__PathBuf_GT__GT_17hb4d8bfc5714a6b84E
            (&local_118);
  _ZN4core3ptr89drop_in_place_LT_std__collections__hash__map__HashMap_LT_std__path__PathBuf_C_i32_GT__GT_17ha567042ca95cdac4E
            (&local_88);
  *puVar2 = uVar7;
  return;
}