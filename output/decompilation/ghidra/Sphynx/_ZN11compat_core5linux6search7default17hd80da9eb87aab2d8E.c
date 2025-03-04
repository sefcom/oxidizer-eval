/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined  [16]
_ZN11compat_core5linux6search7default17hd80da9eb87aab2d8E
          (long *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong extraout_RDX;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined auVar16 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  long *local_e8;
  long *local_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined local_48 [24];
  
  local_e0 = (long *)&DAT_00000008;
  lStack_d8 = 0;
  lStack_d0 = 0;
  iVar8 = _ZN11compat_core4unix7filters12exclude_self17h13168d9e64c5a6a6E(&local_e0);
  if (iVar8 == 0) {
    uVar13 = *param_5;
    lVar14 = param_5[2];
    local_a0 = param_2;
    _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17h68438e0eeab99c5fE(&local_e0,lStack_d0,lVar14);
    (*(code *)PTR_memcpy_004f43a8)(local_e0 + lStack_d0 * 4,uVar13,lVar14 << 5);
    local_108 = lStack_d0 + lVar14;
    param_5[2] = 0;
    local_118 = local_e0;
    uStack_110 = lStack_d8;
    lStack_d0 = local_108;
    plVar9 = (long *)(*(code *)PTR___rust_alloc_004f43c0)(0x28,8);
    if (plVar9 == (long *)0x0) {
      uVar13 = 0x28;
LAB_001425b6:
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h32f10317ed76b9c7E_004f4be8)(uVar13,8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar14 = CONCAT44(_UNK_0029a55c,_UNK_0029a558);
    *plVar9 = CONCAT44(_UNK_0029a554,_DAT_0029a550);
    plVar9[1] = lVar14;
    *(undefined4 *)(plVar9 + 2) = (undefined4)local_118;
    *(undefined4 *)((long)plVar9 + 0x14) = local_118._4_4_;
    *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_110;
    *(undefined4 *)((long)plVar9 + 0x1c) = uStack_110._4_4_;
    plVar9[4] = local_108;
    local_e8 = plVar9;
    local_a8 = param_5;
    if (*param_1 == 0) {
      puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_004f43c0)(0x18,8);
      if (puVar10 == (undefined8 *)0x0) {
        uVar13 = 0x18;
        goto LAB_001425b6;
      }
      lVar14 = 1;
      if (param_4 == 0) {
        plVar9 = (long *)0x1;
        lVar12 = 0;
      }
      else {
        plVar9 = (long *)(*(code *)PTR___rust_alloc_004f43c0)(param_4,1);
        lVar12 = param_4;
        if (plVar9 == (long *)0x0) {
          _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_11allocate_in28__u7b__u7b_closure_u7d__u7d_17h9f289d254163e8c5E_llvm_3765406455587417959
                    (param_4,1);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      local_108 = 0;
      local_118 = plVar9;
      uStack_110 = lVar12;
      _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17ha6434863460e3dbeE(&local_118,0,param_4);
      lVar12 = local_108;
      _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h5bd23e75d5fc6e32E
                ((undefined *)((long)local_118 + local_108),param_4,param_3,param_4);
      local_108 = lVar12 + param_4;
      puVar10[2] = local_108;
      *puVar10 = local_118;
      puVar10[1] = uStack_110;
      local_90 = _DAT_0029a550;
      uStack_8c = _UNK_0029a554;
      uStack_88 = _UNK_0029a558;
      uStack_84 = _UNK_0029a55c;
      local_c0 = 1;
      local_98 = puVar10;
    }
    else {
      _ZN63__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_core__clone__Clone_GT_5clone17heb84b3aeb379fa06E
                (&local_98,param_1);
      local_c0 = CONCAT44(uStack_8c,local_90);
      lVar14 = CONCAT44(uStack_84,uStack_88);
    }
    puVar10 = local_98;
    (*(code *)PTR__ZN13compat_kernel4core7request13RequestHandle3new17h70a9b30cf8e74595E_004f3710)
              (&local_118);
    plVar9 = local_118;
    puVar7 = PTR__ZN13compat_kernel4core6server6Server10send_query17hb0e1e005505623bcE_004f3478;
    local_b0 = uStack_110;
    local_b8 = local_108;
    puVar11 = puVar10;
    puVar6 = PTR___rust_dealloc_004f3b10;
    plVar2 = local_118;
    lVar12 = uStack_110;
    puVar15 = puVar10;
    if (lVar14 == 0) {
joined_r0x001424ff:
      while (uStack_110 = lVar12, local_118 = plVar2, puVar4 = puVar11,
            puVar7 = PTR___rust_dealloc_004f3b10, PTR___rust_dealloc_004f3b10 = puVar6,
            puVar10 + lVar14 * 3 != puVar4) {
        puVar11 = puVar4 + 3;
        plVar2 = local_118;
        lVar12 = uStack_110;
        PTR___rust_dealloc_004f3b10 = puVar7;
        if (puVar4[1] != 0) {
          PTR___rust_dealloc_004f3b10 = puVar6;
          (*(code *)puVar7)(*puVar4,puVar4[1],1);
          puVar6 = PTR___rust_dealloc_004f3b10;
          plVar2 = local_118;
          lVar12 = uStack_110;
          PTR___rust_dealloc_004f3b10 = puVar7;
        }
      }
    }
    else {
      puVar4 = puVar10;
      local_c8 = puVar10;
      do {
        local_118 = (long *)*puVar4;
        plVar1 = puVar4 + 1;
        uStack_110 = *plVar1;
        plVar5 = puVar4 + 2;
        puVar11 = puVar4 + 3;
        puVar6 = PTR___rust_dealloc_004f3b10;
        plVar2 = (long *)*plVar1;
        lVar12 = *plVar5;
        puVar15 = local_c8;
        if (local_118 == (long *)0x0) goto joined_r0x001424ff;
        local_108 = *plVar5;
        local_58 = *(undefined4 *)plVar1;
        uStack_54 = *(undefined4 *)((long)puVar4 + 0xc);
        uStack_50 = *(undefined4 *)plVar5;
        uStack_4c = *(undefined4 *)((long)puVar4 + 0x14);
        (*(code *)
          PTR__ZN87__LT_std__path__PathBuf_u20_as_u20_core__convert__From_LT_alloc__string__String_GT__GT_4from17hb2a0746043238cf6E_004f4ba0
        )(local_48,&local_118);
        LOCK();
        lVar12 = *local_e8;
        *local_e8 = *local_e8 + 1;
        UNLOCK();
        if (*local_e8 == 0 || SCARRY8(lVar12,1) != *local_e8 < 0) {
LAB_001425a6:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        (*(code *)PTR__ZN18compat_file_search5query10QueryInput3new17hd3c1ca8d4598b01dE_004f3f60)
                  (&local_80,local_48,1);
        local_f8 = local_60;
        local_108 = CONCAT44(uStack_6c,local_70);
        uStack_100 = uStack_68;
        uStack_fc = uStack_64;
        local_118 = (long *)CONCAT44(uStack_7c,local_80);
        uStack_110 = CONCAT44(uStack_74,uStack_78);
        LOCK();
        plVar2 = plVar9 + 2;
        lVar12 = *plVar2;
        *plVar2 = *plVar2 + 1;
        UNLOCK();
        if (*plVar2 == 0 || SCARRY8(lVar12,1) != *plVar2 < 0) goto LAB_001425a6;
        LOCK();
        lVar12 = *plVar9;
        *plVar9 = *plVar9 + 1;
        UNLOCK();
        if (*plVar9 == 0 || SCARRY8(lVar12,1) != *plVar9 < 0) goto LAB_001425a6;
        (*(code *)puVar7)(local_a0,&local_118,plVar9);
        puVar11 = puVar4 + 3;
        puVar15 = local_c8;
        puVar4 = puVar4 + 3;
      } while (puVar11 != puVar10 + lVar14 * 3);
    }
    if ((local_c0 != 0) && (local_c0 * 0x18 != 0)) {
      (*(code *)PTR___rust_dealloc_004f3b10)(puVar15,local_c0 * 0x18,8);
    }
    (*(code *)PTR__ZN13compat_kernel8frontend7console5start17h119e227426a8a75eE_004f4f38)
              (local_b0,local_b8,plVar9);
    param_5 = local_a8;
    LOCK();
    *local_e8 = *local_e8 + -1;
    UNLOCK();
    if (*local_e8 == 0) {
      _ZN5alloc4sync12Arc_LT_T_GT_9drop_slow17h07b4a1678f750befE(&local_e8);
    }
    uVar13 = 0;
  }
  else {
    plVar9 = (long *)(extraout_RDX & 0xffffffff);
    _ZN4core3ptr13drop_in_place17h858b25f8e31a269eE(&local_e0);
    uVar13 = 1;
  }
  _ZN4core3ptr13drop_in_place17h858b25f8e31a269eE(param_5);
  auVar16._8_8_ = (ulong)plVar9 & 0xffffffff;
  auVar16._0_8_ = uVar13;
  return auVar16;
}