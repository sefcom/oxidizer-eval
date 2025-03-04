undefined8 *
_ZN11compat_core4esxi5utils28esxi_run_command_with_output17hc22d95a2d7f3a90bE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int local_198;
  int iStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined8 local_168;
  undefined8 local_160;
  long local_158;
  long local_150;
  undefined4 local_128;
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  
  (*(code *)PTR__ZN3std3sys4unix7process14process_common7Command3new17h488fe90a515bc251E_004f4848)
            (&local_e8,"sh",2);
  puVar2 = PTR__ZN3std3sys4unix7process14process_common7Command3arg17h767f7fe18acf49f1E_004f4b18;
  (*(code *)PTR__ZN3std3sys4unix7process14process_common7Command3arg17h767f7fe18acf49f1E_004f4b18)
            (&local_e8,"-c",2);
  uVar5 = (*(code *)PTR__ZN3std7process5Stdio5piped17hcaf9104e6e719eb6E_004f4bc8)();
  (*(code *)PTR__ZN3std3sys4unix7process14process_common7Command6stdout17he63fdf42343b92c4E_004f4020
  )(&local_e8,uVar5);
  (*(code *)puVar2)(&local_e8,param_2,param_3);
  (*(code *)PTR__ZN3std7process7Command5spawn17h03f21eadf8073d5dE_004f3420)(&local_198,&local_e8);
  local_128 = local_174;
  if (local_198 == 1) {
    *(undefined4 *)(param_1 + 1) = uStack_190;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_18c;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_188;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_188._4_4_;
    *param_1 = 1;
    _ZN4core3ptr13drop_in_place17hfd4d0c5a6abcb205E(&local_e8);
  }
  else {
    local_f8 = local_174;
    local_108 = uStack_188._4_4_;
    uStack_104 = uStack_180;
    uStack_100 = uStack_17c;
    uStack_fc = uStack_178;
    local_118 = iStack_194;
    uStack_114 = uStack_190;
    uStack_110 = uStack_18c;
    uStack_10c = (undefined4)uStack_188;
    _ZN4core3ptr13drop_in_place17hfd4d0c5a6abcb205E(&local_e8);
    uStack_178 = local_f8;
    uStack_188._0_4_ = local_108;
    uStack_188._4_4_ = uStack_104;
    uStack_180 = uStack_100;
    uStack_17c = uStack_fc;
    local_198 = local_118;
    iStack_194 = uStack_114;
    uStack_190 = uStack_110;
    uStack_18c = uStack_10c;
    (*(code *)PTR__ZN3std7process5Child16wait_with_output17h7882778dfaebb1b2E_004f3578)
              (&local_e8,&local_198);
    lVar4 = local_d8;
    uVar3 = local_e0;
    if (local_e8 == 1) {
      param_1[1] = local_e0;
      param_1[2] = local_d8;
      *param_1 = 1;
    }
    else {
      local_160 = local_c8;
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h8e7377f697780647E_004f43e0)
                (&local_e8,local_e0,local_d0);
      local_168 = local_e0;
      local_158 = local_e8;
      lVar8 = local_d8;
      if (local_e8 == 1) {
        lVar8 = local_d0;
      }
      local_150 = local_c0;
      if (lVar8 == 0) {
        lVar6 = 1;
        lVar7 = 0;
      }
      else {
        lVar6 = (*(code *)PTR___rust_alloc_004f43c0)(lVar8,1);
        lVar7 = lVar8;
        if (lVar6 == 0) {
          _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_11allocate_in28__u7b__u7b_closure_u7d__u7d_17h9f289d254163e8c5E_llvm_3765406455587417959
                    (lVar8,1);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      local_198 = (int)lVar6;
      iStack_194 = (int)((ulong)lVar6 >> 0x20);
      uStack_190 = (undefined4)lVar7;
      uStack_18c = (undefined4)((ulong)lVar7 >> 0x20);
      uStack_188._0_4_ = 0;
      uStack_188._4_4_ = 0;
      _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17ha6434863460e3dbeE(&local_198,0,lVar8);
      lVar7 = CONCAT44(uStack_188._4_4_,(undefined4)uStack_188);
      _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h5bd23e75d5fc6e32E
                (CONCAT44(iStack_194,local_198) + lVar7,lVar8,local_168,lVar8);
      uStack_188 = lVar7 + lVar8;
      param_1[3] = uStack_188;
      *(int *)(param_1 + 1) = local_198;
      *(int *)((long)param_1 + 0xc) = iStack_194;
      *(undefined4 *)(param_1 + 2) = uStack_190;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_18c;
      *param_1 = 0;
      if (lVar4 != 0) {
        (*(code *)PTR___rust_dealloc_004f3b10)(uVar3,lVar4,1);
      }
      if (local_150 != 0) {
        (*(code *)PTR___rust_dealloc_004f3b10)(local_160,local_150,1);
      }
      if ((local_158 != 0) && (local_d8 != 0)) {
        (*(code *)PTR___rust_dealloc_004f3b10)(local_168,local_d8,1);
      }
    }
  }
  return param_1;
}