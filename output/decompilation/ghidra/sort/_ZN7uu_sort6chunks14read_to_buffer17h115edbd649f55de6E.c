void _ZN7uu_sort6chunks14read_to_buffer17h115edbd649f55de6E
               (undefined8 *param_1,ulong *param_2,long param_3,ulong param_4,char param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined auVar3 [16];
  char cVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined auVar12 [16];
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  undefined4 local_70 [2];
  ulong local_68;
  undefined **local_60;
  undefined local_58 [16];
  undefined local_48 [16];
  undefined8 local_38;
  
  uVar9 = *(ulong *)(param_3 + 0x10);
  uVar11 = uVar9 - param_4;
  if (param_4 <= uVar9) {
    lVar7 = param_4 + *(long *)(param_3 + 8);
    local_60 = &PTR_s_src_uu_sort_src_chunks_rs_0028c600;
    uVar9 = uVar11;
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            auVar12 = _ZN3std2io5impls70__LT_impl_u20_std__io__Read_u20_for_u20_alloc__boxed__Box_LT_R_GT__GT_4read17h7f9eb14cd913115dE
                                (*param_2,param_2[1],lVar7,uVar11);
            local_58._8_8_ = auVar12._8_8_;
            if ((auVar12 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
            cVar4 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_58._8_8_);
            local_58 = auVar12;
            if (cVar4 != '#') {
              local_68 = local_58._8_8_;
                    /* try { // try from 001c2899 to 001c28cd has its CatchHandler @ 001c29ca */
              _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hfed7642166309176E
                        (local_48,&local_68);
              local_70[0] = 2;
              local_78 = local_38;
              uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h36d410590b50ab7fE(&local_88);
              param_1[1] = uVar5;
              param_1[2] = &
                           PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hd52ffe37ac412be9E_0028c680
              ;
              *param_1 = 1;
                    /* try { // try from 001c28e9 to 001c2974 has its CatchHandler @ 001c29eb */
              _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2e4f5e96971ff0c8E
                        (&local_68);
              return;
            }
            local_88 = local_58._8_8_;
                    /* try { // try from 001c2730 to 001c27c7 has its CatchHandler @ 001c29e9 */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2e4f5e96971ff0c8E(&local_88);
          }
          local_58 = auVar12;
          if (local_58._8_8_ == 0) break;
          if (uVar11 < (ulong)local_58._8_8_) {
            ppuVar6 = &PTR_s_src_uu_sort_src_chunks_rs_0028c648;
            auVar3 = auVar12;
            goto LAB_001c2969;
          }
          lVar7 = lVar7 + local_58._8_8_;
          uVar11 = uVar11 - local_58._8_8_;
        }
        if (uVar11 == 0) break;
        if (uVar9 != uVar11) {
          uVar1 = *(ulong *)(param_3 + 0x10);
          uVar8 = uVar1 - uVar11;
          uVar10 = uVar8 - 1;
          if (uVar1 <= uVar10) {
LAB_001c29bd:
            (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00296cb8)
                      (uVar10,uVar1,local_60);
            goto LAB_001c29c8;
          }
          uVar9 = uVar11;
          if (*(char *)(*(long *)(param_3 + 8) + uVar10) != param_5) {
            if (uVar1 < uVar11) {
              local_60 = &PTR_s_src_uu_sort_src_chunks_rs_0028c618;
              uVar10 = uVar8;
              goto LAB_001c29bd;
            }
            *(char *)(*(long *)(param_3 + 8) + uVar8) = param_5;
            uVar9 = uVar11 - 1;
            uVar8 = *(ulong *)(param_3 + 0x10) - uVar9;
            uVar1 = *(ulong *)(param_3 + 0x10);
          }
          uVar11 = uVar1;
          auVar3._8_8_ = uVar8;
          auVar3._0_8_ = auVar12._0_8_;
          if (uVar11 < uVar9) {
            ppuVar6 = (undefined **)&DAT_0028c630;
            goto LAB_001c2969;
          }
          lVar7 = uVar8 + *(long *)(param_3 + 8);
        }
        uVar11 = uVar9;
        _ZN101__LT_core__iter__sources__empty__Empty_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h161b7b8bfd4e684cE
                  (&local_88);
        uVar10 = local_78;
        uVar9 = uStack_80;
        if (local_88 == 2) {
          _ZN4core3ptr209drop_in_place_LT_core__option__Option_LT_core__result__Result_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_u2b_core__marker__Send_GT__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_17h1157f0d3cb3c2437E
                    (&local_88);
          param_1[1] = *(long *)(param_3 + 0x10) - uVar11;
          *(undefined *)(param_1 + 2) = 0;
          *param_1 = 0;
          return;
        }
        if ((local_88 & 1) != 0) {
          param_1[1] = uStack_80;
          param_1[2] = local_78;
          *param_1 = 1;
          return;
        }
                    /* try { // try from 001c287d to 001c2881 has its CatchHandler @ 001c29d9 */
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hcc69def0910ab351E
                  (*param_2,param_2[1]);
        *param_2 = uVar9;
        param_2[1] = uVar10;
        uVar9 = uVar11;
      }
      local_88 = *(ulong *)(param_3 + 8);
      local_78 = *(long *)(param_3 + 0x10) + local_88;
      local_70[0] = CONCAT31(local_70[0]._1_3_,param_5);
      uStack_80 = local_88;
      auVar12 = _ZN6memchr4arch7generic6memchr4Iter9next_back17ha685b7d06b3ac29dE
                          (&local_88,local_70);
      lVar7 = _ZN6memchr4arch7generic6memchr4Iter9next_back17ha685b7d06b3ac29dE(&local_88,local_70);
      if (lVar7 == 1) {
        if ((auVar12 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          param_1[1] = auVar12._8_8_ + 1;
          *(undefined *)(param_1 + 2) = 1;
          *param_1 = 0;
          return;
        }
        goto LAB_001c299f;
      }
      uVar10 = *(ulong *)(param_3 + 0x10);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6resize17hd0b7699f012edafbE(param_3,uVar10 + 0x2800);
      auVar3._8_8_ = uVar10;
      auVar3._0_8_ = local_58._0_8_;
      uVar11 = *(ulong *)(param_3 + 0x10);
      if (uVar11 < uVar10) goto LAB_001c2977;
      lVar7 = uVar10 + *(long *)(param_3 + 8);
      uVar11 = uVar11 - uVar10;
    } while( true );
  }
  (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_00296ca0)
            (param_4,uVar9,&PTR_s_src_uu_sort_src_chunks_rs_0028c6e8);
LAB_001c299f:
                    /* try { // try from 001c299f to 001c29c7 has its CatchHandler @ 001c29eb */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)
            (&PTR_s_src_uu_sort_src_chunks_rs_0028c5d0);
LAB_001c29c8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
LAB_001c2977:
  ppuVar6 = (undefined **)&DAT_0028c5e8;
LAB_001c2969:
  local_58._0_8_ = auVar3._0_8_;
  (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_00296ca0)
            (auVar3._8_8_,uVar11,ppuVar6);
  goto LAB_001c29c8;
}