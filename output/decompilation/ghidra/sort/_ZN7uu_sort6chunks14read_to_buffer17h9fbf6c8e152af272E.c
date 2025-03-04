void _ZN7uu_sort6chunks14read_to_buffer17h9fbf6c8e152af272E
               (undefined8 *param_1,int *param_2,long param_3,long param_4,ulong param_5,
               ulong param_6,char param_7)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  undefined auVar8 [16];
  ulong local_90;
  long local_88;
  long lStack_80;
  long local_78;
  undefined4 local_70 [4];
  ulong local_60;
  long local_58;
  ulong local_50;
  undefined local_48 [16];
  undefined8 local_38;
  
  uVar6 = *(ulong *)(param_3 + 0x10) - param_6;
  local_58 = param_4;
  if (param_6 <= *(ulong *)(param_3 + 0x10)) {
    param_6 = param_6 + *(long *)(param_3 + 8);
    local_50 = param_5 >> 1;
    local_60 = uVar6;
LAB_0025df00:
    while( true ) {
      auVar8 = _ZN59__LT_std__process__ChildStderr_u20_as_u20_std__io__Read_GT_4read17h32246dfc537b2638E
                         (param_2,param_6,uVar6);
      uVar5 = auVar8._8_8_;
      if (auVar8._0_8_ == 0) break;
LAB_0025df17:
      cVar2 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(uVar5);
      if (cVar2 != '#') {
                    /* try { // try from 0025e0fb to 0025e12f has its CatchHandler @ 0025e22b */
        local_90 = uVar5;
        _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17ha0e369c0360be1c1E
                  (local_48,&local_90);
        local_70[0] = 2;
        local_78 = local_38;
        uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7a4ce38e59829aecE(&local_88);
        param_1[1] = uVar4;
        param_1[2] = &
                     PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h3e6d1588bec1bdf9E_00301a40
        ;
        *param_1 = 1;
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h0ea81dc276204afdE(local_90);
        return;
      }
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h0ea81dc276204afdE(uVar5);
    }
    if (local_58 == 1) {
      do {
        if (uVar5 != 0) goto LAB_0025dfb7;
        if (uVar6 != 0) goto LAB_0025e060;
        param_6 = *(ulong *)(param_3 + 0x10);
        if (param_5 <= param_6) goto LAB_0025dfd8;
        uVar6 = param_6 * 2;
        if (local_50 <= param_6) {
          uVar6 = param_5;
        }
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_6resize17h8264c119ba4725aeE(param_3,uVar6,0);
        uVar1 = *(ulong *)(param_3 + 0x10);
        uVar6 = uVar1 - param_6;
        if (uVar1 < param_6) {
          _ZN4core5slice5index26slice_start_index_len_fail17hff2ebd3969f5a2ecE
                    (param_6,uVar1,&PTR_s_src_uu_sort_src_chunks_rs_00301960);
          goto LAB_0025e1c1;
        }
        param_6 = param_6 + *(long *)(param_3 + 8);
        auVar8 = _ZN59__LT_std__process__ChildStderr_u20_as_u20_std__io__Read_GT_4read17h32246dfc537b2638E
                           (param_2,param_6,uVar6);
        uVar5 = auVar8._8_8_;
      } while (auVar8._0_8_ == 0);
      goto LAB_0025df17;
    }
    if (uVar5 == 0) {
      if (uVar6 != 0) {
LAB_0025e060:
        uVar5 = local_60;
        if (local_60 != uVar6) {
          uVar5 = *(ulong *)(param_3 + 0x10);
          lVar3 = uVar5 - uVar6;
          if (uVar5 <= lVar3 - 1U) goto LAB_0025e1f1;
          if (*(char *)(*(long *)(param_3 + 8) + (lVar3 - 1U)) != param_7) {
            if (uVar5 < uVar6) goto LAB_0025e20e;
            *(char *)(*(long *)(param_3 + 8) + lVar3) = param_7;
            uVar6 = uVar6 - 1;
            uVar5 = *(ulong *)(param_3 + 0x10);
            lVar3 = uVar5 - uVar6;
          }
          if (uVar5 < uVar6) {
            _ZN4core5slice5index26slice_start_index_len_fail17hff2ebd3969f5a2ecE
                      (lVar3,uVar5,&PTR_s_src_uu_sort_src_chunks_rs_003019d8);
LAB_0025e20e:
                    /* WARNING: Subroutine does not return */
            _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(lVar3);
          }
          param_6 = lVar3 + *(long *)(param_3 + 8);
          uVar5 = uVar6;
        }
        uVar6 = uVar5;
        _ZN101__LT_core__iter__sources__empty__Empty_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd44e082068a075a0E
                  (&local_88);
        lVar3 = local_78;
        if (local_88 == 0) {
          param_1[1] = *(long *)(param_3 + 0x10) - uVar6;
          *(undefined *)(param_1 + 2) = 0;
          uVar4 = 0;
        }
        else {
          if (lStack_80 == 0) {
            _ZN4core3ptr46drop_in_place_LT_std__process__ChildStdout_GT_17h1576bcb3cdfb83b9E
                      (*param_2);
            *param_2 = (int)lVar3;
            local_60 = uVar6;
            goto LAB_0025df00;
          }
          param_1[1] = lStack_80;
          param_1[2] = local_78;
          uVar4 = 1;
        }
        *param_1 = uVar4;
        return;
      }
      param_6 = *(ulong *)(param_3 + 0x10);
LAB_0025dfd8:
      local_88 = *(long *)(param_3 + 8);
      local_78 = param_6 + local_88;
      local_70[0] = CONCAT31(local_70[0]._1_3_,param_7);
      lStack_80 = local_88;
      auVar8 = _ZN6memchr4arch7generic6memchr4Iter9next_back17ha68dd67eda4e11adE(&local_88,local_70)
      ;
      lVar3 = _ZN6memchr4arch7generic6memchr4Iter9next_back17ha68dd67eda4e11adE(&local_88,local_70);
      if (lVar3 == 1) {
        if (auVar8._0_8_ != 0) {
          param_1[1] = auVar8._8_8_ + 1;
          *(undefined *)(param_1 + 2) = 1;
          *param_1 = 0;
          return;
        }
        uVar4 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                          (&PTR_s_src_uu_sort_src_chunks_rs_00301978);
                    /* catch() { ... } // from try @ 0025e0fb with catch @ 0025e22b */
                    /* try { // try from 0025e233 to 0025e237 has its CatchHandler @ 0025e240 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h0ea81dc276204afdE(local_90);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar4);
      }
      param_6 = *(ulong *)(param_3 + 0x10);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6resize17h8264c119ba4725aeE(param_3,param_6 + 0x2800,0);
      uVar6 = *(ulong *)(param_3 + 0x10) - param_6;
      if (*(ulong *)(param_3 + 0x10) < param_6) goto LAB_0025e1d1;
      param_6 = param_6 + *(long *)(param_3 + 8);
      goto LAB_0025df00;
    }
LAB_0025dfb7:
    bVar7 = uVar5 <= uVar6;
    uVar6 = uVar6 - uVar5;
    if (bVar7) {
      param_6 = param_6 + uVar5;
      goto LAB_0025df00;
    }
LAB_0025e1c1:
    _ZN4core5slice5index26slice_start_index_len_fail17hff2ebd3969f5a2ecE(uVar5);
LAB_0025e1d1:
    _ZN4core5slice5index26slice_start_index_len_fail17hff2ebd3969f5a2ecE(param_6);
  }
  _ZN4core5slice5index26slice_start_index_len_fail17hff2ebd3969f5a2ecE(param_6);
LAB_0025e1f1:
                    /* WARNING: Subroutine does not return */
  _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E();
}