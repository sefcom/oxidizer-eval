undefined  [16]
_ZN5uu_ls12display_grid17h7f8f7fd1cab815f6E
          (undefined8 *param_1,ushort param_2,undefined param_3,undefined *param_4,char param_5,
          long param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined ***pppuVar3;
  code *pcVar4;
  undefined auVar5 [16];
  undefined ***local_130;
  code *local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined ****local_108;
  ulong uStack_100;
  undefined8 local_f8;
  undefined *local_e8;
  undefined local_e0 [24];
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined local_48 [24];
  
  if (param_2 == 0) {
    local_118 = (undefined *)*param_1;
    uStack_110 = param_1[1];
    local_108 = (undefined ****)param_1[2];
    uStack_100 = param_1[3];
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6af91d0ef576531dE
              (&local_130,&local_118);
    pcVar4 = local_128;
    pppuVar3 = local_130;
    if (local_130 == (undefined ***)0x8000000000000000) {
      _ZN4core3ptr86drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT_17h90736cdc3f1660b8E
                (&local_118);
    }
    else {
                    /* try { // try from 0029d119 to 0029d123 has its CatchHandler @ 0029d29c */
      lVar2 = _ZN5uu_ls12write_os_str17hde566466aa27da95E(param_4,local_128,local_120);
      if (lVar2 != 0) {
LAB_0029d129:
                    /* try { // try from 0029d129 to 0029d131 has its CatchHandler @ 0029d29a */
        auVar5 = (*(code *)
                   PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                 )(lVar2);
LAB_0029d132:
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
                  (pppuVar3,pcVar4);
        _ZN4core3ptr86drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT_17h90736cdc3f1660b8E
                  (&local_118);
        return auVar5;
      }
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
                (pppuVar3,pcVar4);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6af91d0ef576531dE
                (&local_130,&local_118);
      if (local_130 != (undefined ***)0x8000000000000000) {
        do {
          uVar1 = local_120;
          pcVar4 = local_128;
          pppuVar3 = local_130;
          local_c8 = &PTR_DAT_00386698;
          local_c0 = 1;
          local_b8 = 8;
          local_b0 = 0;
          uStack_a8 = 0;
                    /* try { // try from 0029d1d9 to 0029d1fa has its CatchHandler @ 0029d29e */
          lVar2 = _ZN3std2io5Write9write_fmt17h700c3576e0a1d616E(param_4,&local_c8);
          if (lVar2 != 0) {
                    /* try { // try from 0029d28c to 0029d294 has its CatchHandler @ 0029d29a */
            auVar5 = (*(code *)
                       PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                     )(lVar2);
            goto LAB_0029d132;
          }
          lVar2 = _ZN5uu_ls12write_os_str17hde566466aa27da95E(param_4,pcVar4,uVar1);
          if (lVar2 != 0) goto LAB_0029d129;
          _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
                    (pppuVar3,pcVar4);
          _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6af91d0ef576531dE
                    (&local_130,&local_118);
        } while (local_130 != (undefined ***)0x8000000000000000);
      }
      _ZN4core3ptr86drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT_17h90736cdc3f1660b8E
                (&local_118);
      local_c8 = &PTR_s_OutOfRangeImpossibleNotEnoughInv_003866e0;
      local_c0 = 1;
      local_b8 = 8;
      local_b0 = 0;
      uStack_a8 = 0;
      lVar2 = _ZN3std2io5Write9write_fmt17h700c3576e0a1d616E(param_4,&local_c8);
      if (lVar2 != 0) {
        auVar5 = (*(code *)
                   PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                 )(lVar2);
        return auVar5;
      }
    }
  }
  else {
    local_e8 = param_4;
    if (param_5 == '\0') {
      _ZN4core4iter6traits8iterator8Iterator7collect17h25bf8c2b361b0ae3E(local_e0);
    }
    else {
      _ZN4core4iter6traits8iterator8Iterator3map17h06c8f62d7e05632eE(&local_c8);
      _ZN4core4iter6traits8iterator8Iterator7collect17h26fa17b7cc3c2454E(local_e0,&local_c8);
    }
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hc04104682af7dc00E
              (&local_c8,local_e0);
    param_4 = local_48;
    _ZN4core4iter6traits8iterator8Iterator7collect17h0e094a3d1b0e3da7E(param_4,&local_c8);
    local_118 = (undefined *)0x8000000000000002;
    if (param_6 == 0) {
      local_118 = (undefined *)0x8000000000000000;
    }
    uStack_100 = (ulong)param_2;
    local_f8 = CONCAT71(local_f8._1_7_,param_3);
    uStack_110 = 2;
    local_108 = (undefined ****)param_6;
    _ZN9term_grid13Grid_LT_T_GT_3new17h96a222bf8d776eaaE(&local_c8,param_4,&local_118);
    local_128 = 
    _ZN63__LT_term_grid__Grid_LT_T_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h69999ff4efcaea26E;
    local_118 = &DAT_001cf290;
    uStack_110 = 1;
    local_f8 = 0;
    local_108 = &local_130;
    uStack_100 = 1;
                    /* try { // try from 0029d0cf to 0029d0eb has its CatchHandler @ 0029d2be */
    local_130 = &local_c8;
    lVar2 = _ZN3std2io5Write9write_fmt17h700c3576e0a1d616E(local_e8,&local_118);
    if (lVar2 != 0) {
      auVar5 = (*(code *)
                 PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
               )(lVar2);
      _ZN4core3ptr65drop_in_place_LT_term_grid__Grid_LT_alloc__string__String_GT__GT_17h2db0fbf46949346dE
                (&local_c8);
      return auVar5;
    }
    _ZN4core3ptr65drop_in_place_LT_term_grid__Grid_LT_alloc__string__String_GT__GT_17h2db0fbf46949346dE
              (&local_c8);
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_4;
  return auVar5 << 0x40;
}