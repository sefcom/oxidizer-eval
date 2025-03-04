undefined  [16] _ZN11compat_core7program4main17he3dfaeddb2641425E(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  ulong extraout_RDX;
  undefined8 *unaff_RBX;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined auVar14 [16];
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 *local_298;
  undefined *local_290;
  undefined **local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  char *local_268;
  undefined8 local_260;
  undefined **local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 **local_1a0;
  undefined8 local_198;
  
  puVar1 = (undefined8 *)(param_1 + 0xd0);
  if (*(int *)(param_1 + 200) == 1) {
    (*(code *)PTR__ZN10compat_log11use_console17ha5f18df36e707c54E_004f3fd8)();
    _ZN13compat_kernel3app16Context_LT_A_GT_9log_error17hc06c922c491ab8f4E(param_1,puVar1);
    if (*(long *)(param_1 + 0x10) != 0) {
      (*(code *)PTR___rust_dealloc_004f3b10)
                (*(undefined8 *)(param_1 + 8),*(long *)(param_1 + 0x10),1);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      (*(code *)PTR___rust_dealloc_004f3b10)
                (*(undefined8 *)(param_1 + 0x20),*(long *)(param_1 + 0x28),1);
    }
    _ZN4core3ptr13drop_in_place17h8a1f9bb5e8e55ad6E_llvm_4649098736335954857(param_1 + 0x38);
    if (*(long *)(param_1 + 0xa8) != 0) {
      (*(code *)PTR___rust_dealloc_004f3b10)
                (*(undefined8 *)(param_1 + 0xa0),*(long *)(param_1 + 0xa8),1);
    }
    lVar4 = *(long *)(param_1 + 200);
  }
  else {
    if (*(char *)(param_1 + 0x118) == '\0') {
      (*(code *)PTR__ZN11compat_fork13ignore_sighup17h0e5166a6fb2d2848E_004f3bc8)();
      cVar8 = (*(code *)PTR__ZN13compat_kernel4core4fork10fork_entry17h64712f88e2afd589E_004f3f50)()
      ;
      if (cVar8 == '\0') {
        (*(code *)PTR__ZN13compat_kernel4core4fork4fork17h3ef12e11ae319438E_004f4610)(&local_288);
        puVar11 = uStack_278;
        if ((int)local_288 != 1) {
          (*(code *)PTR__ZN3std7process4exit17h35800f5e3977f7a4E_004f3878)(0);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        local_2a8 = (undefined4)local_280;
        uVar7 = local_2a8;
        uStack_2a4 = local_280._4_4_;
        uStack_2a0 = (undefined4)uStack_278;
        uStack_29c = uStack_278._4_4_;
        if (*(long *)PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE_004f39a0 == 0) {
          local_2a8._0_1_ = (byte)local_280;
          bVar13 = 1 < (byte)local_2a8;
          local_2a8 = uVar7;
          if (bVar13) {
            (**(code **)uStack_278[1])(*uStack_278);
            lVar4 = *(long *)(puVar11[1] + 8);
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_004f3b10)
                        (*puVar11,lVar4,*(undefined8 *)(puVar11[1] + 0x10));
            }
            goto LAB_00141646;
          }
        }
        else {
          local_298 = &local_2a8;
          local_290 = 
          PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb2d05e37bbc417fdE_004f3af0
          ;
          local_1c0 = &PTR_s_Could_not_fork_process__>_004e5d78;
          local_1b8 = 1;
          local_1b0 = 0;
          local_1a0 = &local_298;
          local_198 = 1;
          (*(code *)PTR__ZN3log17__private_api_log17hc54142160760cc34E_004f43d0)
                    (&local_1c0,1,&PTR_s_compat_core_programbin_compat_c_004e5d88,0);
          bVar13 = 1 < (byte)local_2a8;
          if (bVar13) {
            unaff_RBX = (undefined8 *)CONCAT44(uStack_29c,uStack_2a0);
            (**(code **)unaff_RBX[1])(*unaff_RBX);
            lVar4 = *(long *)(unaff_RBX[1] + 8);
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_004f3b10)
                        (*unaff_RBX,lVar4,*(undefined8 *)(unaff_RBX[1] + 0x10));
            }
            puVar11 = (undefined8 *)CONCAT44(uStack_29c,uStack_2a0);
LAB_00141646:
            (*(code *)PTR___rust_dealloc_004f3b10)(puVar11,0x18,8);
          }
        }
      }
    }
    else {
      (*(code *)PTR__ZN10compat_log11use_console17ha5f18df36e707c54E_004f3fd8)();
    }
    (*(code *)PTR_memcpy_004f43a8)(&local_288,param_1,200);
    (*(code *)PTR__ZN13compat_kernel4core6server6Server5build17hdd036c3f11ac7902E_004f4c38)
              (&local_1c0,4,10,0x10,&local_288);
    puVar6 = PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE_004f39a0;
    if (2 < *(ulong *)PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE_004f39a0) {
      local_288 = &PTR_s_Compat__Auto_004e5ce8;
      local_280 = 1;
      uStack_278 = (undefined8 *)0x0;
      local_268 = "compat_core::programbin/compat-core/src/program.rs";
      local_260 = 0;
      (*(code *)PTR__ZN3log17__private_api_log17hc54142160760cc34E_004f43d0)
                (&local_288,3,&PTR_s_compat_core_programbin_compat_c_004e5cf8,0);
    }
    iVar9 = _ZN11compat_core4unix4main17h2a4898d383cf093eE(puVar1,&local_1c0);
    if (iVar9 != 0) {
      unaff_RBX = (undefined8 *)(extraout_RDX & 0xffffffff);
      _ZN4core3ptr13drop_in_place17h0f408680137d741fE(&local_1c0);
      if (*(long *)(param_1 + 200) == 0) {
        _ZN4core3ptr13drop_in_place17hdc8c04c51855010dE(puVar1);
        uVar12 = 1;
      }
      else {
        if (*(long *)(param_1 + 0xd8) != 0) {
          (*(code *)PTR___rust_dealloc_004f3b10)(*puVar1,*(long *)(param_1 + 0xd8),1);
        }
        puVar6 = PTR___rust_dealloc_004f3b10;
        lVar4 = *(long *)(param_1 + 0xe8);
        uVar12 = 1;
        if (lVar4 != 0) {
          lVar2 = *(long *)(param_1 + 0xf8);
          if (lVar2 != 0) {
            lVar10 = 0;
            do {
              lVar3 = *(long *)(lVar4 + 8 + lVar10);
              if (lVar3 != 0) {
                (*(code *)puVar6)(*(undefined8 *)(lVar4 + lVar10),lVar3,1);
              }
              lVar10 = lVar10 + 0x18;
            } while (lVar2 * 0x18 != lVar10);
          }
          if (*(long *)(param_1 + 0xf0) == 0) {
            unaff_RBX = (undefined8 *)(extraout_RDX & 0xffffffff);
          }
          else {
            lVar4 = *(long *)(param_1 + 0xf0) * 0x18;
            unaff_RBX = (undefined8 *)(extraout_RDX & 0xffffffff);
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_004f3b10)(*(undefined8 *)(param_1 + 0xe8),lVar4,8);
            }
          }
        }
      }
      goto LAB_0014186a;
    }
    (*(code *)PTR__ZN13compat_kernel4core5stats5Stats6render17h421b3e7740f2b90bE_004f32e0)
              (&local_1c0);
    if (2 < *(ulong *)puVar6) {
      local_288 = &PTR_s_Exiting_004e5d30;
      local_280 = 1;
      uStack_278 = (undefined8 *)0x0;
      local_268 = "compat_core::programbin/compat-core/src/program.rs";
      local_260 = 0;
      (*(code *)PTR__ZN3log17__private_api_log17hc54142160760cc34E_004f43d0)
                (&local_288,3,&PTR_s_compat_core_programbin_compat_c_004e5d40,0);
    }
    _ZN4core3ptr13drop_in_place17h0f408680137d741fE(&local_1c0);
    lVar4 = *(long *)(param_1 + 200);
  }
  if (lVar4 == 0) {
    _ZN4core3ptr13drop_in_place17hdc8c04c51855010dE(puVar1);
    uVar12 = 0;
  }
  else {
    if (*(long *)(param_1 + 0xd8) != 0) {
      (*(code *)PTR___rust_dealloc_004f3b10)(*puVar1,*(long *)(param_1 + 0xd8),1);
    }
    puVar6 = PTR___rust_dealloc_004f3b10;
    lVar4 = *(long *)(param_1 + 0xe8);
    uVar12 = 0;
    if (lVar4 != 0) {
      lVar2 = *(long *)(param_1 + 0xf8);
      if (lVar2 != 0) {
        unaff_RBX = (undefined8 *)0x0;
        do {
          lVar10 = *(long *)(lVar4 + 8 + (long)unaff_RBX);
          if (lVar10 != 0) {
            (*(code *)puVar6)(*(undefined8 *)(lVar4 + (long)unaff_RBX),lVar10,1);
          }
          unaff_RBX = unaff_RBX + 3;
        } while ((undefined8 *)(lVar2 * 0x18) != unaff_RBX);
      }
      if ((*(long *)(param_1 + 0xf0) != 0) && (lVar4 = *(long *)(param_1 + 0xf0) * 0x18, lVar4 != 0)
         ) {
        (*(code *)PTR___rust_dealloc_004f3b10)(*(undefined8 *)(param_1 + 0xe8),lVar4,8);
      }
    }
  }
LAB_0014186a:
  auVar14._8_8_ = (ulong)unaff_RBX & 0xffffffff;
  auVar14._0_8_ = uVar12;
  return auVar14;
}