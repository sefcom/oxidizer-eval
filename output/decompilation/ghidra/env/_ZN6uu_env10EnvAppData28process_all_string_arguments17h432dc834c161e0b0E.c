undefined8 *
_ZN6uu_env10EnvAppData28process_all_string_arguments17h432dc834c161e0b0E
          (undefined8 *param_1,undefined2 *param_2,long param_3)

{
  code *pcVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 extraout_RDX;
  undefined8 uVar11;
  long lVar12;
  undefined auVar13 [16];
  undefined local_168 [16];
  undefined8 **local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined2 *local_130;
  undefined local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 *local_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_110 = 0;
  uStack_108 = 8;
  local_100 = 0;
  local_a8 = &DAT_0011eb5c;
  local_a0 = 5;
  local_98 = &DAT_0011e9ab;
  local_90 = 5;
  local_88 = "fileTSTP";
  local_80 = 4;
  local_78 = &DAT_0011ebde;
  local_70 = 0xd;
  local_68 = &DAT_0011ea92;
  local_60 = 5;
  local_58 = _DAT_0011c3a0;
  uStack_54 = _UNK_0011c3a4;
  uStack_50 = _UNK_0011c3a8;
  uStack_4c = _UNK_0011c3ac;
  local_d8 = *(long *)(param_3 + 8);
  local_d0 = local_d8 + *(long *)(param_3 + 0x10) * 0x18;
  local_c8 = 0;
  local_130 = param_2;
  local_e0 = param_1;
  local_c0 = param_3;
  auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he7ef2d91b577ff9aE
                      (&local_d8);
  if (auVar13._8_8_ != 0) {
    uVar8 = 0;
    do {
      lVar12 = auVar13._8_8_;
                    /* try { // try from 00173ef8 to 00173f00 has its CatchHandler @ 001744e2 */
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_002195a0)
                (local_f8,*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10));
      if (auVar13._0_8_ != 0 && (uVar8 & 1) == 0) {
        cVar6 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17h1ffd8f17dc4fb6beE
                          (*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10),&DAT_0011ec91,
                           2);
        uVar4 = local_e8;
        uVar10 = local_f0;
        if (cVar6 != '\0') {
LAB_0017423d:
                    /* try { // try from 00174245 to 00174278 has its CatchHandler @ 001744da */
          _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hc2eed86ca3e5fc9dE
                    (local_168,*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10));
          local_118 = local_158;
          local_128 = local_168;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hb3d6cf7e4aee7804E
                    (&local_110,local_128,&PTR_DAT_00210a70);
          _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h948bda3da34fcb33E
                    (local_f8);
          auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he7ef2d91b577ff9aE
                              (&local_d8);
          if (auVar13._8_8_ != 0) {
            do {
              lVar12 = auVar13._8_8_;
                    /* try { // try from 001742ba to 001742c2 has its CatchHandler @ 001744de */
              (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_002195a0)
                        (local_f8,*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10));
              if (auVar13._0_8_ != 0 && (uVar8 & 1) == 0) {
                cVar6 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17h1ffd8f17dc4fb6beE
                                  (*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10),
                                   &DAT_0011ec91,2);
                uVar4 = local_e8;
                uVar10 = local_f0;
                if (cVar6 == '\0') {
                  local_168._0_8_ = local_168._0_8_ & 0xffffffff00000000;
                  auVar13 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E
                                      (0x2d,local_168);
                    /* try { // try from 00174317 to 0017437b has its CatchHandler @ 001744f7 */
                  cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hdd8e30ed8444b89cE
                                    (uVar10,uVar4,auVar13._0_8_,auVar13._8_8_);
                  if (cVar6 == '\0') {
                    _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                              (uVar10,uVar4);
                  }
                }
              }
              _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hc2eed86ca3e5fc9dE
                        (local_168,*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10));
              local_118 = local_158;
              local_128 = local_168;
              _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hb3d6cf7e4aee7804E
                        (&local_110,local_128,&PTR_DAT_00210a70);
              _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h948bda3da34fcb33E
                        (local_f8);
              auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he7ef2d91b577ff9aE
                                  (&local_d8);
            } while (auVar13._8_8_ != 0);
          }
          break;
        }
        local_168._0_8_ = local_168._0_8_ & 0xffffffff00000000;
        auVar13 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2d,local_168);
                    /* try { // try from 00173f57 to 00173f73 has its CatchHandler @ 001744e0 */
        cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hdd8e30ed8444b89cE
                          (uVar10,uVar4,auVar13._0_8_,auVar13._8_8_);
        if (cVar6 == '\0') {
          cVar6 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                            (uVar10,uVar4);
          if (cVar6 == '\0') goto LAB_0017423d;
        }
      }
                    /* try { // try from 00173f84 to 00174237 has its CatchHandler @ 001744f9 */
      _ZN6uu_env28check_and_handle_string_args17h6c65360a0996fb8bE
                (local_168,*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10),&DAT_0011ecb6,
                 0xe,&local_110,0);
      auVar13 = local_168;
      if (local_168._0_8_ != 0) goto LAB_00174474;
      if ((local_168 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        _ZN6uu_env28check_and_handle_string_args17h6c65360a0996fb8bE
                  (local_168,*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10),
                   &DAT_0011ecc4,2,&local_110,0);
        auVar13 = local_168;
        if (local_168._0_8_ != 0) goto LAB_00174474;
        if ((local_168 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00174000;
        _ZN6uu_env28check_and_handle_string_args17h6c65360a0996fb8bE
                  (local_168,*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10),
                   &DAT_0011ecc6,3,&local_110,0);
        auVar13 = local_168;
        if (local_168._0_8_ != 0) goto LAB_00174474;
        if ((local_168 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          *local_130 = 0x101;
          goto LAB_00174009;
        }
        _ZN6uu_env28check_and_handle_string_args17h6c65360a0996fb8bE
                  (local_168,*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10),"-vvS",4,
                   &local_110,local_c0);
        uVar4 = local_e8;
        uVar10 = local_f0;
        auVar13 = local_168;
        if (local_168._0_8_ != 0) goto LAB_00174474;
        if ((local_168 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          *local_130 = 0x101;
          *(undefined *)(local_130 + 1) = 0;
          goto LAB_00174009;
        }
        auVar13 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                            (&DAT_0011ec91,2,local_f0,local_e8);
        if (auVar13._0_8_ == 0) {
          auVar13 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                              (&DAT_0011e8a6,1,uVar10,uVar4);
          lVar9 = auVar13._0_8_;
          if (lVar9 != 0) {
            local_168._8_8_ = auVar13._8_8_ + lVar9;
            local_168._0_8_ = lVar9;
            bVar7 = _ZN4core3str11validations15next_code_point17h82739559a2cd589dE(local_168);
            uVar11 = extraout_RDX;
            if (((int)extraout_RDX != 0x110000 & bVar7) == 1) {
              do {
                local_128._0_4_ = (int)uVar11;
                uVar8 = _ZN56__LT_char_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h2af8667b79ce998cE
                                  (local_128,&local_58,4);
                auVar13 = _ZN4core3str11validations15next_code_point17h82739559a2cd589dE(local_168);
                auVar3._8_8_ = local_128._8_8_;
                auVar3._0_8_ = local_128._0_8_;
                auVar2._8_8_ = local_168._8_8_;
                auVar2._0_8_ = local_168._0_8_;
                uVar11 = auVar13._8_8_;
                if ((auVar13 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
                local_168 = auVar2;
                local_128 = auVar3;
              } while (auVar13._8_4_ != 0x110000);
              goto LAB_001741b5;
            }
          }
          uVar8 = 0;
        }
        else {
          local_168 = auVar13;
          uVar8 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h61d67ad19dc8ea59E
                            (local_168,&local_a8);
        }
LAB_001741b5:
        cVar6 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                          (uVar10,uVar4);
        if (cVar6 != '\0') {
          cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hdd8e30ed8444b89cE
                            (uVar10,uVar4,&DAT_0011ec93,2);
          if (cVar6 != '\0') {
            cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hdd8e30ed8444b89cE
                              (uVar10,uVar4,&DAT_0011ec91,2);
            if (cVar6 == '\0') {
              auVar13 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                                  (uVar10,uVar4);
              if (auVar13._0_8_ == 0) {
                (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_002195a8)
                          (uVar10,uVar4,2,uVar4,&PTR_DAT_00210a88);
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              local_b8 = (undefined8 *)local_128;
              local_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0c2ec06aa0838e92E;
              local_168._0_8_ = &PTR_DAT_00210a50;
              local_168._8_8_ = 2;
              local_148 = 0;
              local_158 = &local_b8;
              local_150 = 1;
                    /* try { // try from 0017442f to 001744d7 has its CatchHandler @ 001744dc */
              local_128 = auVar13;
              _ZN4core6option15Option_LT_T_GT_11map_or_else17h96013652e67eecbeE(&local_48,local_168)
              ;
              local_150 = CONCAT44(local_150._4_4_,0x7d);
              local_168._4_4_ = uStack_44;
              local_168._0_4_ = local_48;
              local_168._12_4_ = uStack_3c;
              local_168._8_4_ = uStack_40;
              local_158 = (undefined8 **)local_38;
              uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0cd361b0827381d8E(local_168);
              auVar13._8_8_ =
                   &
                   PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h60677b330daa6f59E_002108a8
              ;
              auVar13._0_8_ = uVar10;
LAB_00174474:
              puVar5 = local_e0;
              *(undefined (*) [16])(local_e0 + 1) = auVar13;
              *local_e0 = 0x8000000000000000;
              _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h948bda3da34fcb33E
                        (local_f8);
              _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17heb5c5b33ec176de2E
                        (&local_110);
              return puVar5;
            }
          }
        }
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hc2eed86ca3e5fc9dE
                  (local_168,*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10));
        local_118 = local_158;
        local_128 = local_168;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hb3d6cf7e4aee7804E
                  (&local_110,local_128,&PTR_DAT_00210aa0);
      }
      else {
LAB_00174000:
        *(undefined *)((long)local_130 + 1) = 1;
LAB_00174009:
        uVar8 = 0;
      }
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h948bda3da34fcb33E(local_f8)
      ;
      auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he7ef2d91b577ff9aE
                          (&local_d8);
    } while (auVar13._8_8_ != 0);
  }
  local_e0[2] = local_100;
  *local_e0 = local_110;
  local_e0[1] = uStack_108;
  return local_e0;
}