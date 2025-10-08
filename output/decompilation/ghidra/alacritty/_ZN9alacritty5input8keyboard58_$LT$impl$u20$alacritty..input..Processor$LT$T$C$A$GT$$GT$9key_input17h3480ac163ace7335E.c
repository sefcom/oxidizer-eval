void _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_9key_input17h3480ac163ace7335E
               (undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined auVar13 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long local_c8;
  undefined local_b8 [16];
  long local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar10 = param_1[6];
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_7display17hd691c8f83dd13719E
            (lVar10);
  if (*(int *)(lVar10 + 0x2d0) == 2) {
    lVar12 = param_1[1];
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
              (lVar12);
    uVar1 = *(uint *)(lVar12 + 0x6dc);
    puVar3 = (uint *)param_1[5];
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
              (puVar3);
    uVar2 = *puVar3;
    if (*(char *)(param_2 + 0xf) != '\0') {
      lVar12 = param_1[0xe];
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
                (lVar12);
      if (*(char *)(lVar12 + 4) != '\0') {
        uVar8 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6window17hc2466ca785044c59E
                          (lVar10);
                    /* try { // try from 0055645e to 005564f8 has its CatchHandler @ 005567a1 */
        _ZN9alacritty7display6window6Window15set_ime_allowed17hbb6cdda1349198bdE(uVar8,1);
      }
      local_48 = param_2[0xe];
      uStack_40 = param_2[0xf];
      local_58 = param_2[0xc];
      uStack_50 = param_2[0xd];
      local_68 = param_2[10];
      uStack_60 = param_2[0xb];
      local_78 = param_2[8];
      uStack_70 = param_2[9];
      local_b8._0_8_ = *param_2;
      local_b8._8_8_ = param_2[1];
      local_a8 = param_2[2];
      uStack_a0 = *(undefined4 *)(param_2 + 3);
      uStack_9c = *(undefined4 *)((long)param_2 + 0x1c);
      local_98 = *(undefined4 *)(param_2 + 4);
      uStack_94 = *(undefined4 *)((long)param_2 + 0x24);
      uStack_90 = *(undefined4 *)(param_2 + 5);
      uStack_8c = *(undefined4 *)((long)param_2 + 0x2c);
      local_88 = *(undefined4 *)(param_2 + 6);
      uStack_84 = *(undefined4 *)((long)param_2 + 0x34);
      uStack_80 = *(undefined4 *)(param_2 + 7);
      uStack_7c = *(undefined4 *)((long)param_2 + 0x3c);
      _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_11key_release17h4e004f4cf113a66bE
                (param_1,local_b8,uVar1,uVar2);
      return;
    }
    if (*(char *)(param_2 + 8) == '\x1a') {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = puVar3;
      auVar13 = auVar13 << 0x40;
    }
    else {
      auVar13 = _ZN8smol_str4Repr6as_str17ha71f0b13e811ba13E(param_2 + 8);
      lVar10 = param_1[6];
    }
    lVar12 = auVar13._8_8_;
    lVar9 = auVar13._0_8_;
    if (lVar9 == 0) {
      lVar12 = 0;
    }
    lVar11 = 1;
    if (lVar9 != 0) {
      lVar11 = lVar9;
    }
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_7display17hd691c8f83dd13719E
              (lVar10);
    if (*(long *)(lVar10 + 0x478) == 0) {
      lVar10 = param_1[0xe];
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
                (lVar10);
      if (*(char *)(lVar10 + 4) == '\0') {
        _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_18reset_search_delay17hb32f71b378a2c014E
                  (param_1);
        cVar6 = _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_20process_key_bindings17h19a8c305713b2048E
                          (param_1,param_2);
        if (cVar6 == '\0') {
          cVar6 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13search_active17hab11a215551a244eE
                            (param_1[0xd]);
          if (cVar6 == '\0') {
            if ((uVar1 & 0x10000) == 0) {
                    /* try { // try from 00556614 to 005566db has its CatchHandler @ 005567a1 */
              cVar6 = _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_12alt_send_esc17h03648dcc30b21fedE
                                (param_1[5],*(undefined4 *)param_2,
                                 *(undefined2 *)((long)param_2 + 2),lVar11,lVar12);
              uVar4 = uVar2 & 0x824;
              if (cVar6 != '\0') {
                uVar4 = uVar2;
              }
              cVar6 = _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_21should_build_sequence17h9a6073c4bf79275aE
                                (param_2,lVar12,uVar1);
              cVar7 = _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_15is_modifier_key17h5d445e3e081c3542E
                                (param_2);
              if (cVar6 == '\0') {
                local_b8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                                     (lVar12 + 1,1,1,&DAT_00982c00);
                local_a8 = 0;
                if ((uVar4 & 0x100) != 0) {
                    /* try { // try from 005566f9 to 00556721 has its CatchHandler @ 00556790 */
                  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd6373653790597aE
                            (local_b8,0x1b,&DAT_00982c18);
                }
                _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h219f3b3c50208c25E
                          (local_b8,lVar11,lVar12 + lVar11);
                local_c8 = local_a8;
                local_d8 = local_b8._0_4_;
                uStack_d4 = local_b8._4_4_;
                uStack_d0 = local_b8._8_4_;
                uStack_cc = local_b8._12_4_;
                bVar5 = true;
              }
              else {
                local_48 = param_2[0xe];
                uStack_40 = param_2[0xf];
                local_58 = param_2[0xc];
                uStack_50 = param_2[0xd];
                local_68 = param_2[10];
                uStack_60 = param_2[0xb];
                local_78 = param_2[8];
                uStack_70 = param_2[9];
                local_b8._0_8_ = *param_2;
                local_b8._8_8_ = param_2[1];
                local_a8 = param_2[2];
                uStack_a0 = *(undefined4 *)(param_2 + 3);
                uStack_9c = *(undefined4 *)((long)param_2 + 0x1c);
                local_98 = *(undefined4 *)(param_2 + 4);
                uStack_94 = *(undefined4 *)((long)param_2 + 0x24);
                uStack_90 = *(undefined4 *)(param_2 + 5);
                uStack_8c = *(undefined4 *)((long)param_2 + 0x2c);
                local_88 = *(undefined4 *)(param_2 + 6);
                uStack_84 = *(undefined4 *)((long)param_2 + 0x34);
                uStack_80 = *(undefined4 *)(param_2 + 7);
                uStack_7c = *(undefined4 *)((long)param_2 + 0x3c);
                _ZN9alacritty5input8keyboard14build_sequence17hb59ed84f2bd9b92aE
                          (&local_d8,local_b8,uVar4,uVar1);
                bVar5 = false;
              }
              if (local_c8 == 0) {
                _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hf03622863648a7aaE
                          (&local_d8);
              }
              else {
                if (cVar7 == '\0') {
                    /* try { // try from 00556748 to 0055674f has its CatchHandler @ 0055677f */
                  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_23on_terminal_input_start17h71ade688185997fdE
                            (param_1);
                }
                    /* try { // try from 00556753 to 0055675c has its CatchHandler @ 0055678e */
                _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12write_to_pty17h8c41aa14fceee80bE
                          (*param_1,&local_d8);
              }
              if (!bVar5) {
                return;
              }
              _ZN4core3ptr43drop_in_place_LT_winit__event__KeyEvent_GT_17hd16fceb331fb972bE(param_2)
              ;
              return;
            }
          }
          else {
            local_b8._8_8_ = lVar12 + lVar11;
            local_b8._0_8_ = lVar11;
            while( true ) {
              auVar13 = _ZN4core3str11validations15next_code_point17h6519aaf344192553E(local_b8);
              if (((auVar13 & (undefined  [16])0x1) == (undefined  [16])0x0) ||
                 (auVar13._8_4_ == 0x110000)) break;
                    /* try { // try from 005565f4 to 005565fd has its CatchHandler @ 0055679f */
              _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12search_input17h2d6c399f09bd0ffbE
                        (param_1,auVar13._8_8_ & 0xffffffff);
            }
          }
        }
      }
      else {
                    /* try { // try from 00556575 to 0055659a has its CatchHandler @ 005567a1 */
        _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_input17h3f544336f84edff8E
                  (param_1,lVar11,lVar12);
      }
    }
    else {
      local_b8._8_8_ = lVar12 + lVar11;
      local_b8._0_8_ = lVar11;
      while( true ) {
        auVar13 = _ZN4core3str11validations15next_code_point17h6519aaf344192553E(local_b8);
        if (((auVar13 & (undefined  [16])0x1) == (undefined  [16])0x0) ||
           (auVar13._8_4_ == 0x110000)) break;
                    /* try { // try from 00556554 to 0055655d has its CatchHandler @ 005567ab */
        _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_10hint_input17h969e00627e2fd961E
                  (param_1,auVar13._8_8_ & 0xffffffff);
      }
    }
  }
  _ZN4core3ptr43drop_in_place_LT_winit__event__KeyEvent_GT_17hd16fceb331fb972bE(param_2);
  return;
}