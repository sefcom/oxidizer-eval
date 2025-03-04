undefined8 _ZN11compat_core4esxi4main17heca10f0d4c991be3E(long param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined **ppuVar17;
  code *pcVar18;
  undefined local_129;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined **local_108;
  undefined8 *puStack_100;
  long local_f8;
  undefined ***local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long local_b8;
  undefined **local_b0;
  undefined8 *local_a8;
  uint local_a0;
  uint local_9c;
  undefined **local_98;
  undefined **local_90;
  code *local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_b8 = param_1;
  local_60 = param_2;
  (*(code *)PTR__ZN13compat_kernel4core5stats5Stats13render_thread17h0458801fd31d2801E_004f4c48)
            (param_2);
  puVar9 = PTR__ZN9wildmatch9WildMatch7matches17h1ed8d349706a5306E_004f4200;
  local_a0 = 1;
  pcVar18 = (code *)PTR___rust_dealloc_004f3b10;
  do {
    bVar3 = 1 < local_a0;
    uVar13 = local_a0 + (local_a0 < 2);
    local_9c = local_a0;
    if (2 < *(ulong *)PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE_004f39a0) {
      local_d8 = (undefined **)&local_9c;
      uStack_d0 = (code *)
                  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h78ed4d95ee7e652fE_004f4bf0
      ;
      local_108 = &PTR_s_Pass___004e5ea0;
      puStack_100 = (undefined8 *)0x1;
      local_f8 = 0;
      local_e8 = (undefined ***)&local_d8;
      local_e0 = 1;
      local_a0 = uVar13;
      (*(code *)PTR__ZN3log17__private_api_log17hc54142160760cc34E_004f43d0)
                (&local_108,3,&PTR_s_compat_core_esxibin_compat_core_004e5eb0,0);
      uVar13 = local_a0;
    }
    local_a0 = uVar13;
    _ZN11compat_core4esxi2vm16remove_snapshots17he0b2b50289fbb0c5E(&local_108);
    puVar12 = puStack_100;
    if (((byte)local_108 < 4) && ((byte)local_108 != 2)) {
      _ZN11compat_core4esxi2vm6EsxiVM11get_running17ha53766a000af63c7E(&local_80);
      if (local_80 == (undefined *)0x0) goto LAB_001434e3;
LAB_0014343d:
      if (1 < (byte)local_78) {
        ppuVar14 = (undefined **)CONCAT44(uStack_6c,uStack_70);
        (**(code **)ppuVar14[1])(*ppuVar14);
        lVar16 = *(long *)(ppuVar14[1] + 8);
        if (lVar16 != 0) {
          (*pcVar18)(*ppuVar14,lVar16,*(undefined8 *)(ppuVar14[1] + 0x10));
        }
        lVar16 = 0x18;
        goto LAB_001438ae;
      }
    }
    else {
      (**(code **)puStack_100[1])(*puStack_100);
      lVar16 = *(long *)(puVar12[1] + 8);
      if (lVar16 != 0) {
        (*pcVar18)(*puVar12,lVar16,*(undefined8 *)(puVar12[1] + 0x10));
      }
      (*pcVar18)(puVar12,0x18,8);
      _ZN11compat_core4esxi2vm6EsxiVM11get_running17ha53766a000af63c7E(&local_80);
      if (local_80 != (undefined *)0x0) goto LAB_0014343d;
LAB_001434e3:
      puStack_118 = (undefined8 *)local_68;
      local_128 = (undefined **)CONCAT44(uStack_74,local_78);
      uStack_120 = (undefined8 *)CONCAT44(uStack_6c,uStack_70);
      if (2 < *(ulong *)PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE_004f39a0) {
        uStack_d0 = 
        _ZN61__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_core__fmt__Debug_GT_3fmt17hba978591507845f6E;
        local_108 = &PTR_DAT_004e5f18;
        puStack_100 = (undefined8 *)0x1;
        local_f8 = 0;
        local_e8 = (undefined ***)&local_d8;
        local_e0 = 1;
        local_d8 = (undefined **)&local_128;
        (*(code *)PTR__ZN3log17__private_api_log17hc54142160760cc34E_004f43d0)
                  (&local_108,3,&PTR_s_compat_core_esxibin_compat_core_004e5f28,0);
      }
      local_a8 = uStack_120;
      local_98 = local_128;
      ppuVar14 = local_128;
      ppuVar17 = local_128 + (long)puStack_118 * 4;
      ppuVar15 = local_128;
      puVar12 = uStack_120;
      if (puStack_118 == (undefined8 *)0x0) {
joined_r0x0014385b:
        while (ppuVar14 = ppuVar15, ppuVar17 != ppuVar14) {
          ppuVar15 = ppuVar14 + 4;
          if (ppuVar14[2] != (undefined *)0x0) {
            (*pcVar18)(ppuVar14[1],ppuVar14[2],1);
            puVar12 = local_a8;
          }
        }
      }
      else {
        do {
          local_58 = ppuVar17;
          pcVar1 = (code *)ppuVar14[1];
          uVar4 = *(undefined4 *)(ppuVar14 + 2);
          uVar5 = *(undefined4 *)((long)ppuVar14 + 0x14);
          local_108 = (undefined **)ppuVar14[2];
          uVar6 = *(undefined4 *)(ppuVar14 + 3);
          uVar7 = *(undefined4 *)((long)ppuVar14 + 0x1c);
          puStack_100 = (undefined8 *)ppuVar14[3];
          ppuVar15 = ppuVar14 + 4;
          puVar12 = local_a8;
          ppuVar17 = local_58;
          if (pcVar1 == (code *)0x0) goto joined_r0x0014385b;
          local_d8 = (undefined **)*ppuVar14;
          uStack_d0 = pcVar1;
          local_c8 = uVar4;
          uStack_c4 = uVar5;
          uStack_c0 = uVar6;
          uStack_bc = uVar7;
          local_50 = ppuVar15;
          local_48 = uVar4;
          uStack_44 = uVar5;
          uStack_40 = uVar6;
          uStack_3c = uVar7;
          if (*(long *)(local_b8 + 0x28) != 0) {
            ppuVar17 = *(undefined ***)(local_b8 + 0x18);
            local_b0 = ppuVar17 + *(long *)(local_b8 + 0x28) * 3;
            do {
              (*(code *)PTR__ZN9wildmatch9WildMatch3new17hf95d199595a03d25E_004f3e18)
                        (&local_108,*ppuVar17,ppuVar17[2]);
              cVar10 = (*(code *)puVar9)(&local_108,uStack_d0,CONCAT44(uStack_bc,uStack_c0));
              if ((puStack_100 != (undefined8 *)0x0) && ((long)puStack_100 << 3 != 0)) {
                (*(code *)PTR___rust_dealloc_004f3b10)(local_108,(long)puStack_100 << 3,4);
              }
              ppuVar17 = ppuVar17 + 3;
              if (cVar10 != '\0') {
                puVar12 = *(undefined8 **)(local_b8 + 0x30);
                lVar16 = *(long *)(local_b8 + 0x40) * 0x18;
                do {
                  if (lVar16 == 0) {
                    _ZN11compat_core4esxi2vm6EsxiVM11kill_ensure17h6163535f591c92d5E
                              (&local_108,&local_d8);
                    puVar12 = puStack_100;
                    local_129 = (byte)local_108 == 3;
                    if (((byte)local_108 < 4) && ((byte)local_108 != 2)) {
                      uVar2 = *(ulong *)
                               PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE_004f39a0;
                    }
                    else {
                      (**(code **)puStack_100[1])(*puStack_100);
                      puVar8 = PTR___rust_dealloc_004f3b10;
                      lVar16 = *(long *)(puVar12[1] + 8);
                      if (lVar16 != 0) {
                        (*(code *)PTR___rust_dealloc_004f3b10)
                                  (*puVar12,lVar16,*(undefined8 *)(puVar12[1] + 0x10));
                      }
                      (*(code *)puVar8)(puVar12,0x18,8);
                      uVar2 = *(ulong *)
                               PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE_004f39a0;
                    }
                    if (2 < uVar2) {
                      local_90 = (undefined **)&local_129;
                      local_108 = &PTR_DAT_004e5f60;
                      puStack_100 = (undefined8 *)0x1;
                      local_f8 = 0;
                      local_e8 = &local_90;
                      local_e0 = 1;
                      local_88 = (code *)
                                 PTR__ZN43__LT_bool_u20_as_u20_core__fmt__Display_GT_3fmt17h011406b2b5888d4bE_004f4aa0
                      ;
                      (*(code *)PTR__ZN3log17__private_api_log17hc54142160760cc34E_004f43d0)
                                (&local_108,3,&PTR_s_compat_core_esxibin_compat_core_004e5f70,0);
                    }
                    break;
                  }
                  (*(code *)PTR__ZN9wildmatch9WildMatch3new17hf95d199595a03d25E_004f3e18)
                            (&local_108,*puVar12,puVar12[2]);
                  cVar10 = (*(code *)puVar9)(&local_108,uStack_d0,CONCAT44(uStack_bc,uStack_c0));
                  if ((puStack_100 != (undefined8 *)0x0) && ((long)puStack_100 << 3 != 0)) {
                    (*(code *)PTR___rust_dealloc_004f3b10)(local_108,(long)puStack_100 << 3,4);
                  }
                  puVar12 = puVar12 + 3;
                  lVar16 = lVar16 + -0x18;
                } while (cVar10 != '\0');
              }
            } while (ppuVar17 != local_b0);
          }
          pcVar18 = (code *)PTR___rust_dealloc_004f3b10;
          if (CONCAT44(uStack_c4,local_c8) != 0) {
            (*(code *)PTR___rust_dealloc_004f3b10)(uStack_d0,CONCAT44(uStack_c4,local_c8),1);
          }
          puVar12 = local_a8;
          ppuVar14 = local_50;
          ppuVar17 = local_58;
        } while (local_50 != local_58);
      }
      if ((puVar12 != (undefined8 *)0x0) &&
         (lVar16 = (long)puVar12 << 5, ppuVar14 = local_98, lVar16 != 0)) {
LAB_001438ae:
        (*pcVar18)(ppuVar14,lVar16,8);
      }
    }
    local_128 = (undefined **)&DAT_00000008;
    uStack_120 = (undefined8 *)0x0;
    puStack_118 = (undefined8 *)0x0;
    local_108 = &PTR_s___txt_004e5ee8;
    puStack_100 = (undefined8 *)0x1;
    local_f8 = 0;
    local_e8 = (undefined ***)&DAT_0029abc0;
    local_e0 = 0;
    (*(code *)PTR__ZN5alloc3fmt6format17h3807df668a4e013cE_004f48e0)(&local_d8,&local_108);
    _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17h68438e0eeab99c5fE(&local_128,puStack_118,1);
    local_128[(long)puStack_118 * 4] = (undefined *)0x2;
    ppuVar14 = local_128 + (long)puStack_118 * 4 + 1;
    *(undefined4 *)ppuVar14 = (undefined4)local_d8;
    *(undefined4 *)((long)ppuVar14 + 4) = local_d8._4_4_;
    *(undefined4 *)(ppuVar14 + 1) = (undefined4)uStack_d0;
    *(undefined4 *)((long)ppuVar14 + 0xc) = uStack_d0._4_4_;
    local_128[(long)puStack_118 * 4 + 3] = (undefined *)CONCAT44(uStack_c4,local_c8);
    puStack_118 = (undefined8 *)((long)puStack_118 + 1);
    _ZN11compat_core4esxi5utils17target_extensions17hfec7f96988750855E(&local_108);
    puVar12 = puStack_100;
    ppuVar14 = local_108 + local_f8 * 3;
    local_b0 = local_108;
    ppuVar17 = local_108;
    ppuVar15 = local_108;
    if (local_f8 == 0) {
joined_r0x00143ac3:
      while (ppuVar17 = ppuVar15, ppuVar14 != ppuVar17) {
        ppuVar15 = ppuVar17 + 3;
        if (ppuVar17[1] != (undefined *)0x0) {
          (*(code *)PTR___rust_dealloc_004f3b10)(*ppuVar17,ppuVar17[1],1);
        }
      }
    }
    else {
      do {
        ppuVar15 = ppuVar17 + 3;
        uVar4 = *(undefined4 *)(ppuVar17 + 1);
        local_108 = (undefined **)ppuVar17[1];
        uVar5 = *(undefined4 *)(ppuVar17 + 2);
        puStack_100 = (undefined8 *)ppuVar17[2];
        if (*ppuVar17 == (undefined *)0x0) goto joined_r0x00143ac3;
        local_90 = &local_80;
        local_88 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdba53b93b23cbc0cE;
        local_108 = &PTR_DAT_004e5ef8;
        puStack_100 = (undefined8 *)0x1;
        local_f8 = 0;
        local_e8 = &local_90;
        local_e0 = 1;
        local_80 = *ppuVar17;
        local_78 = uVar4;
        uStack_74 = *(undefined4 *)((long)ppuVar17 + 0xc);
        uStack_70 = uVar5;
        uStack_6c = *(undefined4 *)((long)ppuVar17 + 0x14);
        local_48 = uVar4;
        uStack_44 = *(undefined4 *)((long)ppuVar17 + 0xc);
        uStack_40 = uVar5;
        uStack_3c = *(undefined4 *)((long)ppuVar17 + 0x14);
        (*(code *)PTR__ZN5alloc3fmt6format17h3807df668a4e013cE_004f48e0)(&local_d8,&local_108);
        if (puStack_118 == uStack_120) {
          _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17h68438e0eeab99c5fE
                    (&local_128,puStack_118,1);
        }
        local_128[(long)puStack_118 * 4] = (undefined *)0x2;
        ppuVar17 = local_128 + (long)puStack_118 * 4 + 1;
        *(undefined4 *)ppuVar17 = (undefined4)local_d8;
        *(undefined4 *)((long)ppuVar17 + 4) = local_d8._4_4_;
        *(undefined4 *)(ppuVar17 + 1) = (undefined4)uStack_d0;
        *(undefined4 *)((long)ppuVar17 + 0xc) = uStack_d0._4_4_;
        local_128[(long)puStack_118 * 4 + 3] = (undefined *)CONCAT44(uStack_c4,local_c8);
        puStack_118 = (undefined8 *)((long)puStack_118 + 1);
        if (CONCAT44(uStack_74,local_78) != 0) {
          (*(code *)PTR___rust_dealloc_004f3b10)(local_80,CONCAT44(uStack_74,local_78),1);
        }
        ppuVar17 = ppuVar15;
      } while (ppuVar15 != ppuVar14);
    }
    pcVar18 = (code *)PTR___rust_dealloc_004f3b10;
    if ((puVar12 != (undefined8 *)0x0) && (lVar16 = (long)puVar12 * 0x18, lVar16 != 0)) {
      (*(code *)PTR___rust_dealloc_004f3b10)(local_b0,lVar16,8);
    }
    (*(code *)PTR__ZN13compat_kernel4core16platform_filters17he302441cd02098dfE_004f4a70)
              (&local_108);
    lVar16 = local_f8;
    ppuVar14 = local_108;
    _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17h68438e0eeab99c5fE
              (&local_128,puStack_118,local_f8);
    (*(code *)PTR_memcpy_004f43a8)(local_128 + (long)puStack_118 * 4,ppuVar14,lVar16 << 5);
    puStack_118 = (undefined8 *)((long)puStack_118 + lVar16);
    local_f8 = 0;
    _ZN4core3ptr13drop_in_place17h858b25f8e31a269eE(&local_108);
    local_108 = &PTR_DAT_004e5f08;
    puStack_100 = (undefined8 *)0x1;
    local_f8 = 0;
    local_e8 = (undefined ***)&DAT_0029abc0;
    local_e0 = 0;
    (*(code *)PTR__ZN5alloc3fmt6format17h3807df668a4e013cE_004f48e0)(&local_d8,&local_108);
    if (puStack_118 == uStack_120) {
      _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17h68438e0eeab99c5fE(&local_128,puStack_118,1);
    }
    local_128[(long)puStack_118 * 4] = (undefined *)0x3;
    local_128[(long)puStack_118 * 4 + 1] = (undefined *)local_d8;
    (local_128 + (long)puStack_118 * 4 + 1)[1] = uStack_d0;
    local_128[(long)puStack_118 * 4 + 3] = (undefined *)CONCAT44(uStack_c4,local_c8);
    puStack_118 = (undefined8 *)((long)puStack_118 + 1);
    local_108 = local_128;
    puStack_100 = uStack_120;
    local_f8 = (long)puStack_118;
    iVar11 = _ZN11compat_core5linux6search7default17hd80da9eb87aab2d8E
                       (local_b8,local_60,&DAT_0029abc3,5,&local_108);
    if (iVar11 != 0) {
      return 1;
    }
    if (2 < local_a0 || bVar3) {
      return 0;
    }
  } while( true );
}