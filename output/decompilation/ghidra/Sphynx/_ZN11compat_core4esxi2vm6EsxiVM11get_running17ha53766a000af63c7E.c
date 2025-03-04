undefined8 * _ZN11compat_core4esxi2vm6EsxiVM11get_running17ha53766a000af63c7E(undefined8 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 local_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  long local_168;
  long local_160;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulong uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 *local_60;
  long local_58;
  long local_50;
  undefined8 *local_48;
  long local_40;
  ulong local_38;
  
  _ZN11compat_core4esxi5utils28esxi_run_command_with_output17hc22d95a2d7f3a90bE
            (&local_148,&DAT_0029b329,0x53);
  if (local_148 == 1) {
    param_1[1] = uStack_140;
    param_1[2] = local_138;
    *param_1 = 1;
  }
  else {
    local_160 = local_138;
    local_170 = uStack_140;
    local_158 = param_1;
    (*(code *)PTR__ZN4core3str7pattern11StrSearcher3new17hfaa540e9eb8429e4E_004f3af8)
              (&local_c8,uStack_140,uStack_130,&DAT_0029b300,1);
    local_148 = 0;
    uStack_140 = uStack_130;
    local_138 = CONCAT44(uStack_c4,local_c8);
    local_128 = local_b8;
    uStack_124 = uStack_b4;
    uStack_120 = uStack_b0;
    uStack_11c = uStack_ac;
    local_118 = local_a8;
    uStack_114 = uStack_a4;
    uStack_110 = uStack_a0;
    uStack_10c = uStack_9c;
    local_108 = local_98;
    uStack_104 = uStack_94;
    uStack_100 = uStack_90;
    uStack_fc = uStack_8c;
    local_f8 = local_88;
    uStack_f0 = uStack_80;
    local_d8 = local_68;
    local_d0 = 1;
    _ZN80__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__SpecExtend_LT_T_C_I_GT__GT_9from_iter17h4c5e599c19187c66E
              (&local_60,&local_148);
    local_198 = 8;
    uStack_190 = 0;
    lStack_188 = 0;
    local_180 = local_60;
    local_168 = local_58;
    if (local_50 != 0) {
      puVar10 = local_60 + local_50 * 2;
      puVar9 = local_60;
      local_178 = puVar10;
      do {
        piVar2 = (int *)*puVar9;
        if (piVar2 == (int *)0x0) break;
        uVar3 = puVar9[1];
        if ((uVar3 < 7) ||
           ((piVar2 != (int *)&DAT_0029b37c &&
            (*(int *)((long)piVar2 + 3) != 0x6449646c || *piVar2 != 0x6c726f57)))) {
          (*(code *)PTR__ZN4core3str7pattern11StrSearcher3new17hfaa540e9eb8429e4E_004f3af8)
                    (&local_c8,piVar2,uVar3,&DAT_0029b383,1);
          local_148 = 0;
          local_d8 = local_68;
          local_f8 = local_88;
          uStack_f0 = uStack_80;
          local_108 = local_98;
          uStack_104 = uStack_94;
          uStack_100 = uStack_90;
          uStack_fc = uStack_8c;
          local_118 = local_a8;
          uStack_114 = uStack_a4;
          uStack_110 = uStack_a0;
          uStack_10c = uStack_9c;
          local_128 = local_b8;
          uStack_124 = uStack_b4;
          uStack_120 = uStack_b0;
          uStack_11c = uStack_ac;
          local_138 = CONCAT44(uStack_c4,local_c8);
          local_d0 = 1;
          uStack_140 = uVar3;
          _ZN80__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__SpecExtend_LT_T_C_I_GT__GT_9from_iter17h4c5e599c19187c66E
                    (&local_48,&local_148);
          uVar3 = local_38;
          puVar6 = local_48;
          if (local_38 == 0) {
            (*(code *)PTR__ZN4core9panicking18panic_bounds_check17he8c5b8156efddd25E_004f4958)
                      (0,0,&PTR_DAT_004e6370);
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          (*(code *)
            PTR__ZN4core3num52__LT_impl_u20_core__str__FromStr_u20_for_u20_u64_GT_8from_str17hea298b94ee5f940eE_004f3e68
          )(&local_c8,*local_48,local_48[1]);
          if ((char)local_c8 == '\0') {
            if (uVar3 < 2) {
              (*(code *)PTR__ZN4core9panicking18panic_bounds_check17he8c5b8156efddd25E_004f4958)
                        (1,uVar3,&PTR_DAT_004e6388);
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            local_150 = CONCAT44(uStack_bc,uStack_c0);
            uVar4 = puVar6[2];
            uVar3 = puVar6[3];
            if (uVar3 == 0) {
              lVar7 = 1;
              uVar8 = 0;
            }
            else {
              lVar7 = (*(code *)PTR___rust_alloc_004f43c0)(uVar3,1);
              uVar8 = uVar3;
              if (lVar7 == 0) {
                _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_11allocate_in28__u7b__u7b_closure_u7d__u7d_17h9f289d254163e8c5E_llvm_3765406455587417959
                          (uVar3,1);
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
            }
            local_138 = 0;
            local_148 = lVar7;
            uStack_140 = uVar8;
            _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17ha6434863460e3dbeE(&local_148,0,uVar3);
            lVar7 = local_138;
            _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h5bd23e75d5fc6e32E
                      (local_148 + local_138,uVar3,uVar4,uVar3);
            local_138 = lVar7 + uVar3;
            if (lStack_188 == uStack_190) {
              _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17h68438e0eeab99c5fE
                        (&local_198,lStack_188,1);
            }
            lVar7 = lStack_188 * 0x20;
            *(undefined8 *)(local_198 + lVar7) = local_150;
            puVar1 = (undefined4 *)(local_198 + 8 + lVar7);
            *puVar1 = (undefined4)local_148;
            puVar1[1] = local_148._4_4_;
            puVar1[2] = (undefined4)uStack_140;
            puVar1[3] = uStack_140._4_4_;
            *(long *)(local_198 + 0x18 + lVar7) = local_138;
            lStack_188 = lStack_188 + 1;
            puVar10 = local_178;
          }
          if ((local_40 != 0) && (local_40 << 4 != 0)) {
            (*(code *)PTR___rust_dealloc_004f3b10)(puVar6,local_40 << 4,8);
          }
        }
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar10);
    }
    if ((local_168 != 0) && (local_168 << 4 != 0)) {
      (*(code *)PTR___rust_dealloc_004f3b10)(local_180,local_168 << 4,8);
    }
    param_1 = local_158;
    local_158[3] = lStack_188;
    *(undefined4 *)(local_158 + 1) = (undefined4)local_198;
    *(undefined4 *)((long)local_158 + 0xc) = local_198._4_4_;
    *(undefined4 *)(local_158 + 2) = (undefined4)uStack_190;
    *(undefined4 *)((long)local_158 + 0x14) = uStack_190._4_4_;
    *local_158 = 0;
    if (local_160 != 0) {
      (*(code *)PTR___rust_dealloc_004f3b10)(local_170,local_160,1);
    }
  }
  return param_1;
}