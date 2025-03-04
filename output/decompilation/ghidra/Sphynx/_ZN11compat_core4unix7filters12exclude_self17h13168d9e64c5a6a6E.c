undefined  [16] _ZN11compat_core4unix7filters12exclude_self17h13168d9e64c5a6a6E(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined auVar15 [16];
  long local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  long *local_80;
  ulong local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  (*(code *)PTR__ZN3std3env11current_dir17h902916e3182d6cd4E_004f3640)(&local_c8);
  uVar7 = (*(code *)PTR__ZN13compat_kernel3app8AppError4zero17hf9f02f666fe092caE_004f4810)();
  lVar2 = local_b0;
  if ((int)local_c8 == 1) {
    if (1 < (byte)local_c0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_b4,uStack_b8);
      (**(code **)puVar4[1])(*puVar4);
      lVar2 = *(long *)(puVar4[1] + 8);
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_004f3b10)(*puVar4,lVar2,*(undefined8 *)(puVar4[1] + 0x10));
      }
      (*(code *)PTR___rust_dealloc_004f3b10)(puVar4,0x18,8);
    }
    uVar10 = 1;
    local_78 = (ulong)uVar7;
  }
  else {
    uVar13 = CONCAT44(uStack_bc,local_c0);
    local_90 = CONCAT44(uStack_b4,uStack_b8);
    (*(code *)PTR__ZN3std3env7args_os17hdc9d63d633f8bf90E_004f3680)(&local_c8);
    (*(code *)
      PTR__ZN75__LT_std__env__ArgsOs_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h64c408517fee3bf3E_004f4e20
    )(&local_a8,&local_c8);
    if (local_a8 == 0) {
      uVar7 = (*(code *)PTR__ZN13compat_kernel3app8AppError4zero17hf9f02f666fe092caE_004f4810)();
      puVar5 = PTR___rust_dealloc_004f3b10;
      uVar14 = (ulong)uVar7;
      lVar2 = CONCAT44(uStack_b4,uStack_b8);
      if (local_b0 - lVar2 != 0) {
        lVar12 = 0;
        do {
          lVar8 = *(long *)(lVar2 + 8 + lVar12);
          if (lVar8 != 0) {
            (*(code *)puVar5)(*(undefined8 *)(lVar2 + lVar12),lVar8,1);
          }
          lVar12 = lVar12 + 0x18;
        } while ((local_b0 - lVar2 >> 3) * 8 != lVar12);
      }
      if ((CONCAT44(uStack_bc,local_c0) != 0) &&
         (lVar2 = CONCAT44(uStack_bc,local_c0) * 0x18, lVar2 != 0)) {
        (*(code *)PTR___rust_dealloc_004f3b10)(local_c8,lVar2,8);
      }
    }
    else {
      local_48 = (undefined4)uStack_a0;
      uStack_44 = uStack_a0._4_4_;
      uStack_40 = (undefined4)uStack_98;
      uStack_3c = uStack_98._4_4_;
      local_80 = param_1;
      local_78 = uVar13;
      (*(code *)PTR__ZN13compat_kernel3app8AppError4zero17hf9f02f666fe092caE_004f4810)();
      puVar5 = PTR___rust_dealloc_004f3b10;
      lVar12 = CONCAT44(uStack_b4,uStack_b8);
      lVar8 = local_b0 - lVar12;
      if (lVar8 != 0) {
        lVar11 = 0;
        do {
          lVar9 = *(long *)(lVar12 + 8 + lVar11);
          if (lVar9 != 0) {
            (*(code *)puVar5)(*(undefined8 *)(lVar12 + lVar11),lVar9,1);
          }
          lVar11 = lVar11 + 0x18;
        } while ((lVar8 >> 3) * 8 != lVar11);
      }
      if ((CONCAT44(uStack_bc,local_c0) != 0) &&
         (lVar12 = CONCAT44(uStack_bc,local_c0) * 0x18, lVar12 != 0)) {
        (*(code *)PTR___rust_dealloc_004f3b10)(local_c8,lVar12,8);
      }
      local_c8 = local_a8;
      local_c0 = local_48;
      uStack_bc = uStack_44;
      uStack_b8 = uStack_40;
      uStack_b4 = uStack_3c;
      auVar15 = (*(code *)
                  PTR__ZN243__LT_std__error___LT_impl_u20_core__convert__From_LT_alloc__string__String_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_std__error__Error_u2b_core__marker__Sync_u2b_core__marker__Send_GT__GT___from__StringError_u20_as_u20_std__error__Error_GT_11description17h6ee7d5ed722caa90E_004f4748
                )(&local_c8);
      uVar13 = local_78;
      (*(code *)PTR__ZN3std4path4Path5_join17hce1dc24dd14bb605E_004f4ab8)
                (&local_60,local_78,lVar2,auVar15._0_8_,auVar15._8_8_);
      if (CONCAT44(uStack_bc,local_c0) != 0) {
        (*(code *)PTR___rust_dealloc_004f3b10)(local_c8,CONCAT44(uStack_bc,local_c0),1);
      }
      (*(code *)PTR__ZN3std4path4Path12canonicalize17h0706c2571c010e74E_004f49a0)
                (&local_c8,local_60,local_50);
      uVar7 = (*(code *)PTR__ZN13compat_kernel3app8AppError4zero17hf9f02f666fe092caE_004f4810)();
      local_70 = local_b0;
      if ((int)local_c8 != 1) {
        local_88 = CONCAT44(uStack_bc,local_c0);
        local_68 = CONCAT44(uStack_b4,uStack_b8);
        (*(code *)PTR__ZN3std4path4Path15to_string_lossy17h8f993f88792b3f6eE_004f4f48)
                  (&local_c8,local_60,local_50);
        lVar12 = local_c8;
        uVar10 = CONCAT44(uStack_bc,local_c0);
        lVar2 = CONCAT44(uStack_b4,uStack_b8);
        lVar8 = lVar2;
        if (local_c8 == 1) {
          lVar8 = local_b0;
        }
        if (lVar8 == 0) {
          local_a8 = 1;
          uStack_a0 = 0;
        }
        else {
          local_a8 = (*(code *)PTR___rust_alloc_004f43c0)(lVar8,1);
          uStack_a0 = lVar8;
          if (local_a8 == 0) {
            _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_11allocate_in28__u7b__u7b_closure_u7d__u7d_17h9f289d254163e8c5E_llvm_3765406455587417959
                      (lVar8,1);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        uStack_98 = 0;
        _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17ha6434863460e3dbeE(&local_a8,0,lVar8);
        lVar11 = uStack_98;
        _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h5bd23e75d5fc6e32E
                  (local_a8 + uStack_98,lVar8,uVar10,lVar8);
        plVar6 = local_80;
        uStack_98 = lVar11 + lVar8;
        lVar8 = local_80[2];
        if (lVar8 == local_80[1]) {
          _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17h68438e0eeab99c5fE(local_80,lVar8,1);
          lVar8 = plVar6[2];
        }
        lVar11 = *plVar6;
        lVar8 = lVar8 * 0x20;
        *(undefined8 *)(lVar11 + lVar8) = 1;
        puVar1 = (undefined4 *)(lVar11 + 8 + lVar8);
        *puVar1 = (undefined4)local_a8;
        puVar1[1] = local_a8._4_4_;
        puVar1[2] = (undefined4)uStack_a0;
        puVar1[3] = uStack_a0._4_4_;
        *(long *)(lVar11 + 0x18 + lVar8) = uStack_98;
        plVar6[2] = plVar6[2] + 1;
        if ((lVar12 != 0) && (lVar2 != 0)) {
          (*(code *)PTR___rust_dealloc_004f3b10)(uVar10,lVar2,1);
        }
        (*(code *)PTR__ZN3std4path4Path15to_string_lossy17h8f993f88792b3f6eE_004f4f48)
                  (&local_c8,local_88,local_70);
        lVar12 = local_c8;
        uVar10 = CONCAT44(uStack_bc,local_c0);
        lVar2 = CONCAT44(uStack_b4,uStack_b8);
        lVar8 = lVar2;
        if (local_c8 == 1) {
          lVar8 = local_b0;
        }
        if (lVar8 == 0) {
          lVar9 = 1;
          lVar11 = 0;
        }
        else {
          lVar9 = (*(code *)PTR___rust_alloc_004f43c0)(lVar8,1);
          lVar11 = lVar8;
          if (lVar9 == 0) {
            _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_11allocate_in28__u7b__u7b_closure_u7d__u7d_17h9f289d254163e8c5E_llvm_3765406455587417959
                      (lVar8,1);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        uStack_98 = 0;
        local_a8 = lVar9;
        uStack_a0 = lVar11;
        _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17ha6434863460e3dbeE(&local_a8,0,lVar8);
        lVar11 = uStack_98;
        _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h5bd23e75d5fc6e32E
                  (local_a8 + uStack_98,lVar8,uVar10,lVar8);
        plVar6 = local_80;
        uStack_98 = lVar11 + lVar8;
        lVar8 = local_80[2];
        if (lVar8 == local_80[1]) {
          _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17h68438e0eeab99c5fE(local_80,lVar8,1);
          lVar8 = plVar6[2];
        }
        lVar11 = *plVar6;
        lVar8 = lVar8 * 0x20;
        *(undefined8 *)(lVar11 + lVar8) = 1;
        puVar1 = (undefined4 *)(lVar11 + 8 + lVar8);
        *puVar1 = (undefined4)local_a8;
        puVar1[1] = local_a8._4_4_;
        puVar1[2] = (undefined4)uStack_a0;
        puVar1[3] = uStack_a0._4_4_;
        *(long *)(lVar11 + 0x18 + lVar8) = uStack_98;
        plVar6[2] = plVar6[2] + 1;
        if ((lVar12 != 0) && (lVar2 != 0)) {
          (*(code *)PTR___rust_dealloc_004f3b10)(uVar10,lVar2,1);
        }
        if (local_68 != 0) {
          (*(code *)PTR___rust_dealloc_004f3b10)(local_88,local_68,1);
        }
        if (local_58 != 0) {
          (*(code *)PTR___rust_dealloc_004f3b10)(local_60,local_58,1);
        }
        uVar10 = 0;
        if (local_90 != 0) {
          (*(code *)PTR___rust_dealloc_004f3b10)(local_78,local_90,1);
        }
        goto LAB_0014a8fd;
      }
      uVar14 = (ulong)uVar7;
      if (1 < (byte)local_c0) {
        puVar4 = (undefined8 *)CONCAT44(uStack_b4,uStack_b8);
        (**(code **)puVar4[1])(*puVar4);
        lVar2 = *(long *)(puVar4[1] + 8);
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_004f3b10)(*puVar4,lVar2,*(undefined8 *)(puVar4[1] + 0x10));
        }
        (*(code *)PTR___rust_dealloc_004f3b10)(puVar4,0x18,8);
      }
      if (local_58 != 0) {
        (*(code *)PTR___rust_dealloc_004f3b10)(local_60,local_58,1);
      }
    }
    uVar10 = 1;
    local_78 = uVar14;
    if (local_90 != 0) {
      (*(code *)PTR___rust_dealloc_004f3b10)(uVar13,local_90,1);
    }
  }
LAB_0014a8fd:
  auVar15._8_8_ = local_78 & 0xffffffff;
  auVar15._0_8_ = uVar10;
  return auVar15;
}