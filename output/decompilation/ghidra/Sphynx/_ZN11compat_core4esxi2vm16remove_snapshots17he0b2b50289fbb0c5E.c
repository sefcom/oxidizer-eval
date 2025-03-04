undefined8 * _ZN11compat_core4esxi2vm16remove_snapshots17he0b2b50289fbb0c5E(undefined8 *param_1)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long local_1c0;
  long local_1b8;
  long lStack_1b0;
  long local_1a8;
  long local_1a0;
  long *local_198;
  undefined *local_190;
  long local_188;
  undefined8 local_180;
  long local_178;
  undefined8 *local_170;
  int local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined8 *local_100;
  long local_f8;
  long local_f0;
  undefined **local_e8;
  ulong local_e0;
  undefined8 local_d8;
  ulong uStack_d0;
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
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined2 local_70;
  
  _ZN11compat_core4esxi5utils28esxi_run_command_with_output17hc22d95a2d7f3a90bE
            (&local_e8,&DAT_0029b2e9,0x17);
  if (local_e8 == (undefined **)0x1) {
    *param_1 = local_e0;
    param_1[1] = local_d8;
  }
  else {
    local_1a8 = local_d8;
    local_180 = local_e0;
    local_170 = param_1;
    (*(code *)PTR__ZN4core3str7pattern11StrSearcher3new17hfaa540e9eb8429e4E_004f3af8)
              (&local_168,local_e0,uStack_d0,&DAT_0029b300,1);
    local_e8 = (undefined **)0x0;
    local_e0 = uStack_d0;
    local_d8 = CONCAT44(uStack_164,local_168);
    local_c8 = (long **)CONCAT44(uStack_154,local_158);
    uStack_c0 = CONCAT44(uStack_14c,uStack_150);
    local_b8 = local_148;
    uStack_b4 = uStack_144;
    uStack_b0 = uStack_140;
    uStack_ac = uStack_13c;
    local_a8 = local_138;
    uStack_a4 = uStack_134;
    uStack_a0 = uStack_130;
    uStack_9c = uStack_12c;
    local_98 = local_128;
    uStack_90 = uStack_120;
    local_78 = local_108;
    local_70 = 1;
    _ZN80__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__SpecExtend_LT_T_C_I_GT__GT_9from_iter17h4c5e599c19187c66E
              (&local_100,&local_e8);
    local_1c0 = 8;
    local_1b8 = 0;
    lStack_1b0 = 0;
    if (local_f0 != 0) {
      puVar11 = local_100;
      do {
        piVar1 = (int *)*puVar11;
        if (piVar1 == (int *)0x0) break;
        uVar2 = puVar11[1];
        if ((uVar2 < 4) || ((piVar1 != (int *)&DAT_0029b301 && (*piVar1 != 0x64696d56)))) {
          (*(code *)PTR__ZN4core3str7pattern11StrSearcher3new17hfaa540e9eb8429e4E_004f3af8)
                    (&local_168,piVar1,uVar2,&DAT_0029b305,1);
          local_e8 = (undefined **)0x0;
          local_78 = local_108;
          local_98 = local_128;
          uStack_90 = uStack_120;
          local_a8 = local_138;
          uStack_a4 = uStack_134;
          uStack_a0 = uStack_130;
          uStack_9c = uStack_12c;
          local_b8 = local_148;
          uStack_b4 = uStack_144;
          uStack_b0 = uStack_140;
          uStack_ac = uStack_13c;
          local_c8 = (long **)CONCAT44(uStack_154,local_158);
          uStack_c0 = CONCAT44(uStack_14c,uStack_150);
          local_d8 = CONCAT44(uStack_164,local_168);
          local_70 = 1;
          local_e0 = uVar2;
          _ZN80__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__SpecExtend_LT_T_C_I_GT__GT_9from_iter17hd2dd7d44d02578eeE
                    (&local_198,&local_e8);
          plVar9 = local_198;
          if (local_188 != 0) {
            (*(code *)
              PTR__ZN4core3num52__LT_impl_u20_core__str__FromStr_u20_for_u20_u64_GT_8from_str17hea298b94ee5f940eE_004f3e68
            )(&local_e8,*local_198,local_198[1]);
            uVar2 = local_e0;
            if ((char)local_e8 == '\0') {
              if (lStack_1b0 == local_1b8) {
                _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17h5dadd915f9326507E
                          (&local_1c0,lStack_1b0,1);
              }
              *(ulong *)(local_1c0 + lStack_1b0 * 8) = uVar2;
              lStack_1b0 = lStack_1b0 + 1;
            }
          }
          if ((local_190 != (undefined *)0x0) && ((long)local_190 << 4 != 0)) {
            (*(code *)PTR___rust_dealloc_004f3b10)(plVar9,(long)local_190 << 4,8);
          }
        }
        puVar11 = puVar11 + 2;
      } while (puVar11 != local_100 + local_f0 * 2);
    }
    if ((local_f8 != 0) && (local_f8 << 4 != 0)) {
      (*(code *)PTR___rust_dealloc_004f3b10)(local_100,local_f8 << 4,8);
    }
    lVar8 = lStack_1b0;
    local_1a0 = local_1c0;
    local_178 = local_1b8;
    if (local_1a8 != 0) {
      (*(code *)PTR___rust_dealloc_004f3b10)(local_180,local_1a8,1);
    }
    puVar6 = PTR___rust_dealloc_004f3b10;
    if (lVar8 != 0) {
      lVar12 = 0;
      do {
        local_1c0 = *(long *)(local_1a0 + lVar12);
        local_198 = &local_1c0;
        local_190 = 
        PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17h3cf215fb85128eedE_004f3910
        ;
        local_e8 = &PTR_DAT_004e6360;
        local_e0 = 1;
        local_d8 = 0;
        local_c8 = &local_198;
        uStack_c0 = 1;
        (*(code *)PTR__ZN5alloc3fmt6format17h3807df668a4e013cE_004f48e0)(&local_168,&local_e8);
        uVar4 = CONCAT44(uStack_164,local_168);
        local_1a8 = CONCAT44(uStack_15c,uStack_160);
        uVar5 = CONCAT44(uStack_154,local_158);
        (*(code *)
          PTR__ZN3std3sys4unix7process14process_common7Command3new17h488fe90a515bc251E_004f4848)
                  (&local_e8,"/bin/sh",7);
        uVar10 = (*(code *)PTR__ZN3std7process5Stdio4null17hcc4fcc7cfeff8ee8E_004f33c0)();
        (*(code *)
          PTR__ZN3std3sys4unix7process14process_common7Command6stdout17he63fdf42343b92c4E_004f4020)
                  (&local_e8,uVar10);
        puVar7 = 
        PTR__ZN3std3sys4unix7process14process_common7Command3arg17h767f7fe18acf49f1E_004f4b18;
        (*(code *)
          PTR__ZN3std3sys4unix7process14process_common7Command3arg17h767f7fe18acf49f1E_004f4b18)
                  (&local_e8,"-c",2);
        (*(code *)puVar7)(&local_e8,uVar4,uVar5);
        (*(code *)PTR__ZN3std7process7Command6status17hf3a4699ef731b957E_004f3468)
                  (&local_168,&local_e8);
        _ZN4core3ptr13drop_in_place17hfd4d0c5a6abcb205E(&local_e8);
        if ((local_168 != 0) && (1 < (byte)uStack_160)) {
          puVar11 = (undefined8 *)CONCAT44(uStack_154,local_158);
          (**(code **)puVar11[1])(*puVar11);
          lVar3 = *(long *)(puVar11[1] + 8);
          if (lVar3 != 0) {
            (*(code *)puVar6)(*puVar11,lVar3,*(undefined8 *)(puVar11[1] + 0x10));
          }
          (*(code *)puVar6)(puVar11,0x18,8);
        }
        if (local_1a8 != 0) {
          (*(code *)puVar6)(uVar4,local_1a8,1);
        }
        lVar12 = lVar12 + 8;
      } while (lVar8 << 3 != lVar12);
    }
    if ((local_178 != 0) && (local_178 << 3 != 0)) {
      (*(code *)PTR___rust_dealloc_004f3b10)(local_1a0,local_178 << 3,8);
    }
    *(undefined *)local_170 = 3;
    param_1 = local_170;
  }
  return param_1;
}