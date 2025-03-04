void _ZN15linux_encryptor4main17h4012ebd29c92ad43E(void)

{
  code *pcVar1;
  char cVar2;
  undefined *****pppppuVar3;
  undefined ****ppppuVar4;
  undefined *****pppppuVar5;
  ulong uVar6;
  long lVar7;
  undefined *****pppppuVar8;
  long lVar9;
  undefined *****pppppuVar10;
  ulong uVar11;
  ulong uVar12;
  undefined ****local_c8;
  undefined ****ppppuStack_c0;
  undefined ****local_b8;
  undefined8 uStack_b0;
  undefined ****local_a8;
  code *local_a0;
  undefined ****local_90;
  undefined ****ppppuStack_88;
  undefined ****local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined *local_70;
  undefined8 local_68;
  long local_60;
  ulong local_58;
  undefined ****local_50;
  undefined ****local_48;
  long local_40;
  ulong local_38;
  
  (*(code *)PTR_args_00177c90)(&local_90);
  local_b8 = local_80;
  uStack_b0 = (code *)CONCAT44(uStack_74,uStack_78);
  local_c8 = local_90;
  ppppuStack_c0 = ppppuStack_88;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h29f4c2317536a009E
            (&local_48,&local_c8);
  pppppuVar8 = (undefined *****)local_48;
  if (local_38 != 0) {
    local_60 = local_38 * 8;
    lVar9 = local_38 * 0x18;
    local_50 = local_48;
    local_58 = local_38;
    uVar6 = local_38;
    uVar11 = 0;
    pppppuVar5 = (undefined *****)local_48;
    do {
      pppppuVar10 = pppppuVar5 + 3;
      uVar12 = uVar11 + 1;
      ppppuVar4 = pppppuVar5[2];
      if (ppppuVar4 == (undefined ****)0x5) {
        ppppuVar4 = *pppppuVar5;
        if (*(char *)((long)ppppuVar4 + 4) == 'p' && *(int *)ppppuVar4 == 0x6c65682d) {
          local_c8 = (undefined ****)&PTR_s_How_to_use___file__home_user_Des_00174418;
          ppppuStack_c0 = (undefined ****)0x1;
          local_b8 = (undefined ****)0x0;
          local_a8 = (undefined ****)0x1537d0;
          local_a0 = (code *)0x0;
          (*(code *)PTR__print_00177f40)(&local_c8);
          ppppuStack_88 =
               (undefined ****)
               _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hc6b81e82dc44d718E
          ;
          local_c8 = (undefined ****)&PTR_s_How_to_use___file__home_user_Des_00174428;
          ppppuStack_c0 = (undefined ****)0x2;
          local_b8 = (undefined ****)0x0;
          local_a0 = (code *)0x1;
          local_a8 = (undefined ****)&local_90;
          local_90 = (undefined ****)pppppuVar8;
          (*(code *)PTR__print_00177f40)(&local_c8);
          ppppuStack_88 =
               (undefined ****)
               _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hc6b81e82dc44d718E
          ;
          local_c8 = (undefined ****)&PTR_s_How_to_use___file__home_user_Des_00174448;
          ppppuStack_c0 = (undefined ****)0x2;
          local_b8 = (undefined ****)0x0;
          local_a0 = (code *)0x1;
          local_a8 = (undefined ****)&local_90;
          local_90 = (undefined ****)pppppuVar8;
          (*(code *)PTR__print_00177f40)(&local_c8);
          goto LAB_0010e211;
        }
        if (*(char *)((long)ppppuVar4 + 4) == 'e' && *(int *)ppppuVar4 == 0x6c69662d) {
          if (uVar6 <= uVar12) {
            (*(code *)PTR_panic_bounds_check_00177e00)
                      (uVar11 + 1,uVar6,&PTR_s_src_main_rs__dir__home_user_Desk_00174468);
            goto LAB_0010e3ed;
          }
                    /* try { // try from 0010dd87 to 0010de91 has its CatchHandler @ 0010e400 */
          cVar2 = (*(code *)PTR_is_file_00177b70)(*pppppuVar10,pppppuVar5[5]);
          if (cVar2 == '\0') {
            if (uVar6 <= uVar12) {
              (*(code *)PTR_panic_bounds_check_00177e00)
                        (uVar11 + 1,uVar6,&PTR_s_src_main_rs__dir__home_user_Desk_00174528);
              goto LAB_0010e3ed;
            }
            ppppuStack_88 =
                 (undefined ****)
                 _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hc6b81e82dc44d718E
            ;
            local_c8 = (undefined ****)&PTR_s_Error_isn_t_file__isn_t_director_00174508;
            ppppuStack_c0 = (undefined ****)0x2;
            local_b8 = (undefined ****)0x0;
            local_a8 = (undefined ****)&local_90;
            local_a0 = (code *)0x1;
            local_90 = (undefined ****)pppppuVar10;
            (*(code *)PTR__print_00177f40)(&local_c8);
          }
          else {
            if (uVar6 <= uVar11) {
              (*(code *)PTR_panic_bounds_check_00177e00)
                        (uVar11,uVar6,&PTR_s_src_main_rs__dir__home_user_Desk_001744c0);
              goto LAB_0010e3ed;
            }
            if (uVar6 <= uVar12) {
              (*(code *)PTR_panic_bounds_check_00177e00)
                        (uVar11 + 1,uVar6,&PTR_s_src_main_rs__dir__home_user_Desk_001744d8);
              goto LAB_0010e3ed;
            }
            ppppuStack_c0 =
                 (undefined ****)
                 _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hc6b81e82dc44d718E
            ;
            uStack_b0 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hc6b81e82dc44d718E
            ;
            local_a0 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hc6b81e82dc44d718E
            ;
            local_90 = (undefined ****)&PTR_s_How_to_use___file__home_user_Des_00174480;
            ppppuStack_88 = (undefined ****)0x4;
            local_80 = (undefined ****)0x0;
            local_68 = 3;
            local_c8 = (undefined ****)pppppuVar8;
            local_b8 = (undefined ****)pppppuVar5;
            local_a8 = (undefined ****)pppppuVar10;
            local_70 = (undefined *)&local_c8;
            (*(code *)PTR__print_00177f40)(&local_90);
            if (uVar6 <= uVar12) {
              (*(code *)PTR_panic_bounds_check_00177e00)
                        (uVar11 + 1,uVar6,&PTR_s_src_main_rs__dir__home_user_Desk_001744f0);
              goto LAB_0010e3ed;
            }
            ppppuVar4 = *pppppuVar10;
            pppppuVar8 = (undefined *****)pppppuVar5[5];
            if (pppppuVar8 == (undefined *****)0x0) {
              pppppuVar3 = (undefined *****)&DAT_00000001;
            }
            else {
              pppppuVar3 = (undefined *****)(*(code *)PTR___rust_alloc_00177c88)(pppppuVar8,1);
              if (pppppuVar3 == (undefined *****)0x0) {
                (*(code *)PTR_handle_alloc_error_00177ae0)(pppppuVar8,1);
                goto LAB_0010e3ed;
              }
            }
            (*(code *)PTR_memcpy_00177fa8)(pppppuVar3,ppppuVar4,pppppuVar8);
            local_c8 = (undefined ****)pppppuVar3;
            ppppuStack_c0 = (undefined ****)pppppuVar8;
            local_b8 = (undefined ****)pppppuVar8;
                    /* try { // try from 0010deb4 to 0010debb has its CatchHandler @ 0010e3ef */
            _ZN15linux_encryptor5files8add_file17h9f8ecb31ebca83c0E(&local_c8);
            pppppuVar8 = (undefined *****)local_50;
            uVar6 = local_58;
            if ((undefined *****)ppppuStack_c0 != (undefined *****)0x0) {
              (*(code *)PTR___rust_dealloc_001779a0)(local_c8,ppppuStack_c0,1);
            }
          }
        }
        ppppuVar4 = pppppuVar5[2];
      }
      if ((ppppuVar4 == (undefined ****)0x4) && (*(int *)*pppppuVar5 == 0x7269642d)) {
        if (uVar6 <= uVar12) {
                    /* try { // try from 0010e2d2 to 0010e3cc has its CatchHandler @ 0010e402 */
          (*(code *)PTR_panic_bounds_check_00177e00)
                    (uVar11 + 1,uVar6,&PTR_s_src_main_rs__dir__home_user_Desk_00174540);
          goto LAB_0010e3ed;
        }
                    /* try { // try from 0010df0e to 0010e012 has its CatchHandler @ 0010e400 */
        cVar2 = (*(code *)PTR_is_dir_00177b08)(*pppppuVar10,pppppuVar5[5]);
        if (cVar2 == '\0') {
          if (uVar6 <= uVar12) {
            (*(code *)PTR_panic_bounds_check_00177e00)
                      (uVar11 + 1,uVar6,&PTR_s_src_main_rs__dir__home_user_Desk_001745c0);
            goto LAB_0010e3ed;
          }
          ppppuStack_88 =
               (undefined ****)
               _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hc6b81e82dc44d718E
          ;
          local_c8 = (undefined ****)&PTR_s_Error_isn_t_file__isn_t_director_001745a0;
          ppppuStack_c0 = (undefined ****)0x2;
          local_b8 = (undefined ****)0x0;
          local_a8 = (undefined ****)&local_90;
          local_a0 = (code *)0x1;
          local_90 = (undefined ****)pppppuVar10;
          (*(code *)PTR__print_00177f40)(&local_c8);
        }
        else {
          if (uVar6 <= uVar11) {
            (*(code *)PTR_panic_bounds_check_00177e00)
                      (uVar11,uVar6,&PTR_s_src_main_rs__dir__home_user_Desk_00174558);
LAB_0010e3ed:
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar6 <= uVar12) {
            (*(code *)PTR_panic_bounds_check_00177e00)
                      (uVar11 + 1,uVar6,&PTR_s_src_main_rs__dir__home_user_Desk_00174570);
            goto LAB_0010e3ed;
          }
          ppppuStack_c0 =
               (undefined ****)
               _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hc6b81e82dc44d718E
          ;
          uStack_b0 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hc6b81e82dc44d718E;
          local_a0 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hc6b81e82dc44d718E;
          local_90 = (undefined ****)&PTR_s_How_to_use___file__home_user_Des_00174480;
          ppppuStack_88 = (undefined ****)0x4;
          local_80 = (undefined ****)0x0;
          local_68 = 3;
          local_c8 = (undefined ****)pppppuVar8;
          local_b8 = (undefined ****)pppppuVar5;
          local_a8 = (undefined ****)pppppuVar10;
          local_70 = (undefined *)&local_c8;
          (*(code *)PTR__print_00177f40)(&local_90);
          if (uVar6 <= uVar12) {
            (*(code *)PTR_panic_bounds_check_00177e00)
                      (uVar11 + 1,uVar6,&PTR_s_src_main_rs__dir__home_user_Desk_00174588);
            goto LAB_0010e3ed;
          }
          ppppuVar4 = *pppppuVar10;
          pppppuVar8 = (undefined *****)pppppuVar5[5];
          if (pppppuVar8 == (undefined *****)0x0) {
            pppppuVar5 = (undefined *****)&DAT_00000001;
          }
          else {
            pppppuVar5 = (undefined *****)(*(code *)PTR___rust_alloc_00177c88)(pppppuVar8,1);
            if (pppppuVar5 == (undefined *****)0x0) {
                    /* try { // try from 0010e3cf to 0010e3ec has its CatchHandler @ 0010e3fe */
              (*(code *)PTR_handle_alloc_error_00177ae0)(pppppuVar8,1);
              goto LAB_0010e3ed;
            }
          }
          (*(code *)PTR_memcpy_00177fa8)(pppppuVar5,ppppuVar4,pppppuVar8);
          local_c8 = (undefined ****)pppppuVar5;
          ppppuStack_c0 = (undefined ****)pppppuVar8;
          local_b8 = (undefined ****)pppppuVar8;
                    /* try { // try from 0010e03a to 0010e041 has its CatchHandler @ 0010e3f1 */
          _ZN15linux_encryptor5files8walk_dir17h3bbd2a8a81e3b38eE(&local_c8);
          pppppuVar8 = (undefined *****)local_50;
          uVar6 = local_58;
          if ((undefined *****)ppppuStack_c0 != (undefined *****)0x0) {
            (*(code *)PTR___rust_dealloc_001779a0)(local_c8,ppppuStack_c0,1);
          }
        }
      }
      lVar9 = lVar9 + -0x18;
      uVar11 = uVar12;
      pppppuVar5 = pppppuVar10;
    } while (lVar9 != 0);
    if (uVar6 == 1) {
      local_c8 = (undefined ****)&PTR_s_How_to_use___file__home_user_Des_00174418;
      ppppuStack_c0 = (undefined ****)0x1;
      local_b8 = (undefined ****)0x0;
      local_a8 = (undefined ****)0x1537d0;
      local_a0 = (code *)0x0;
                    /* try { // try from 0010e0aa to 0010e210 has its CatchHandler @ 0010e402 */
      (*(code *)PTR__print_00177f40)(&local_c8);
      ppppuStack_88 =
           (undefined ****)
           _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hc6b81e82dc44d718E
      ;
      local_c8 = (undefined ****)&PTR_s_How_to_use___file__home_user_Des_00174428;
      ppppuStack_c0 = (undefined ****)0x2;
      local_b8 = (undefined ****)0x0;
      local_a0 = (code *)0x1;
      local_a8 = (undefined ****)&local_90;
      local_90 = (undefined ****)pppppuVar8;
      (*(code *)PTR__print_00177f40)(&local_c8);
      ppppuStack_88 =
           (undefined ****)
           _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hc6b81e82dc44d718E
      ;
      local_c8 = (undefined ****)&PTR_s_How_to_use___file__home_user_Des_00174448;
      ppppuStack_c0 = (undefined ****)0x2;
      local_b8 = (undefined ****)0x0;
      local_a0 = (code *)0x1;
      local_a8 = (undefined ****)&local_90;
      local_90 = (undefined ****)pppppuVar8;
      (*(code *)PTR__print_00177f40)(&local_c8);
LAB_0010e211:
      if (uVar6 != 0) {
        lVar9 = local_60 * 3;
        lVar7 = 0;
        do {
          if (*(long *)((long)pppppuVar8 + lVar7 + 8) != 0) {
            std::alloc::__default_lib_allocator::__rust_dealloc
                      (*(void **)((long)pppppuVar8 + lVar7));
          }
          lVar7 = lVar7 + 0x18;
        } while (lVar9 != lVar7);
      }
    }
    else if (uVar6 != 0) {
      lVar9 = local_60 * 3;
      lVar7 = 0;
      do {
        if (*(long *)((long)pppppuVar8 + lVar7 + 8) != 0) {
          std::alloc::__default_lib_allocator::__rust_dealloc(*(void **)((long)pppppuVar8 + lVar7));
        }
        lVar7 = lVar7 + 0x18;
      } while (lVar9 != lVar7);
    }
  }
  if ((local_40 != 0) && (local_40 * 0x18 != 0)) {
    (*(code *)PTR___rust_dealloc_001779a0)(pppppuVar8,local_40 * 0x18,8);
  }
  return;
}