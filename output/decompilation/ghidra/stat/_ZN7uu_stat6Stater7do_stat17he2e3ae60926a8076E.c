ulong _ZN7uu_stat6Stater7do_stat17he2e3ae60926a8076E
                (long param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined local_208 [16];
  undefined8 local_1f8;
  undefined local_1f0;
  undefined8 *local_1e8;
  code *local_1e0;
  undefined8 *local_1d8;
  code *local_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  code *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  int local_170;
  undefined local_f8 [8];
  code *local_f0;
  undefined8 local_e8;
  undefined local_e0 [16];
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_00222280)(local_f8);
  cVar1 = _ZN5alloc6string95__LT_impl_u20_core__cmp__PartialEq_LT__RF_str_GT__u20_for_u20_alloc__borrow__Cow_LT_str_GT__GT_2eq17hd1cc9c84389cf4adE
                    (local_f0,local_e8);
  if (cVar1 == '\0') {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1259f2eee6e0998aE
              (&local_1a8,param_2,param_3);
    local_228 = (int)local_1a8;
    uStack_224 = local_1a8._4_4_;
    uStack_220 = (undefined4)uStack_1a0;
    uStack_21c = uStack_1a0._4_4_;
    if ((*(byte *)(param_1 + 0x61) & 1) == 0) goto LAB_00177207;
                    /* try { // try from 00177057 to 00177063 has its CatchHandler @ 001774b2 */
    _ZN6uucore8features5fsext6statfs17h5579f27baf6b5c75E(&local_1a8,uStack_1a0,local_198);
    if ((int)local_1a8 != 1) {
      lVar5 = *(long *)(param_1 + 0x20);
      for (lVar2 = *(long *)(param_1 + 0x28) * 0x28; lVar2 != 0; lVar2 = lVar2 + -0x28) {
                    /* try { // try from 001773a1 to 001773ae has its CatchHandler @ 001774ce */
        _ZN7uu_stat24process_token_filesystem17h67597bda6d6ea400E
                  (lVar5,&uStack_1a0,local_f0,local_e8);
        lVar5 = lVar5 + 0x28;
      }
LAB_0017745d:
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hc59876b3a9eab6e0E
                (CONCAT44(uStack_224,local_228),CONCAT44(uStack_21c,uStack_220));
      uVar3 = 0;
      goto LAB_0017746d;
    }
    local_1b8 = local_190;
    local_1c8 = uStack_1a0;
    uStack_1c0 = (undefined4)local_198;
    uStack_1bc = local_198._4_4_;
                    /* try { // try from 0017708e to 00177189 has its CatchHandler @ 001774a3 */
    local_208 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00222020)();
    local_1e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
    local_e0._0_8_ = &DAT_00219c28;
    local_e0._8_8_ = 2;
    local_c0 = 0;
    local_c8 = 1;
    local_1e8 = (undefined8 *)local_208;
    local_d0 = &local_1e8;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00222028)(local_e0);
    local_208._0_8_ = (undefined *)0x0;
    local_208._8_8_ = local_f0;
    local_1f8 = local_e8;
    local_1f0 = 1;
    local_1e0 = (code *)
                PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00222260
    ;
    local_1d8 = &local_1c8;
    local_1d0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_e0._0_8_ = &PTR_s_cannot_read_file_system_informat_00219fe0;
    local_e0._8_8_ = 3;
    local_c0 = 0;
    local_c8 = 2;
    local_1e8 = (undefined8 *)local_208;
    local_d0 = &local_1e8;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00222028)(local_e0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(&local_1c8);
LAB_00177365:
    uVar3 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x61) != '\0') {
                    /* try { // try from 00176f4b to 00177024 has its CatchHandler @ 001774b4 */
      local_e0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00222020)();
      local_208._0_8_ = local_e0;
      local_208._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
      local_1a8 = (undefined **)&DAT_00219c28;
      uStack_1a0 = 2;
      uStack_188 = 0;
      local_198 = (undefined8 **)local_208;
      local_190 = 1;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00222028)(&local_1a8);
      local_1a8 = &PTR_s_using_____to_denote_standard_inp_00219fd0;
      uStack_1a0 = 1;
      local_198 = (undefined8 **)&DAT_00000008;
      local_190 = 0;
      uStack_188 = 0;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00222028)(&local_1a8);
      uVar3 = 1;
      goto LAB_0017746d;
    }
                    /* try { // try from 00177199 to 001771e3 has its CatchHandler @ 001774b4 */
    _ZN3std2fs12canonicalize17h666f0a788dd30df7E(&local_1a8,"/dev/stdin",10);
    local_228 = (int)local_1a8;
    uStack_224 = local_1a8._4_4_;
    uStack_220 = (undefined4)uStack_1a0;
    uStack_21c = uStack_1a0._4_4_;
LAB_00177207:
    if ((*(char *)(param_1 + 0x60) == '\0') &&
       ((param_4 == '\0' ||
        (cVar1 = _ZN5alloc6string95__LT_impl_u20_core__cmp__PartialEq_LT__RF_str_GT__u20_for_u20_alloc__borrow__Cow_LT_str_GT__GT_2eq17hd1cc9c84389cf4adE
                           (local_f0,local_e8), cVar1 == '\0')))) {
      _ZN3std2fs16symlink_metadata17h2513065fab3b6eaaE(local_e0,&local_228);
    }
    else {
                    /* try { // try from 0017720e to 00177243 has its CatchHandler @ 001774b2 */
      _ZN3std2fs8metadata17h072f4c1a892eb28cE(local_e0,&local_228);
    }
    if (local_e0._0_4_ == 2) {
      local_1c8 = local_e0._8_8_;
                    /* try { // try from 0017725f to 0017735a has its CatchHandler @ 0017748e */
      local_208 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00222020)();
      local_1e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
      local_1a8 = (undefined **)&DAT_00219c28;
      uStack_1a0 = 2;
      uStack_188 = 0;
      local_190 = 1;
      local_1e8 = (undefined8 *)local_208;
      local_198 = &local_1e8;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00222028)(&local_1a8);
      local_208._0_8_ = (undefined *)0x0;
      local_208._8_8_ = local_f0;
      local_1f8 = local_e8;
      local_1f0 = 1;
      local_1e0 = (code *)
                  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00222260
      ;
      local_1d8 = &local_1c8;
      local_1d0 = (code *)
                  PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_00222090
      ;
      local_1a8 = &PTR_s_cannot_stat_0021a010;
      uStack_1a0 = 3;
      uStack_188 = 0;
      local_190 = 2;
      local_1e8 = (undefined8 *)local_208;
      local_198 = &local_1e8;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00222028)(&local_1a8);
                    /* try { // try from 0017735b to 00177364 has its CatchHandler @ 001774b2 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h436c7c335a4a9568E(&local_1c8);
      goto LAB_00177365;
    }
    local_1b0 = local_f0;
    (*(code *)PTR_memcpy_00221f78)(&local_1a8,local_e0,0xb0);
    cVar1 = *(char *)(param_1 + 0x62);
    lVar2 = 0x30;
    if ((local_170 - 0x2000U & 0xb000) != 0) {
      lVar2 = 0x18;
    }
    if (cVar1 != '\0') {
      lVar2 = 0x18;
    }
    lVar5 = *(long *)(param_1 + 8 + lVar2);
    lVar2 = *(long *)(param_1 + 0x10 + lVar2);
    lVar4 = lVar5;
    do {
      if (lVar4 == lVar5 + lVar2 * 0x28) goto LAB_0017745d;
                    /* try { // try from 0017742d to 0017744e has its CatchHandler @ 001774cc */
      auVar6 = _ZN7uu_stat6Stater19process_token_files17hdd01ebca8999d86bE
                         (param_1,lVar4,&local_1a8,local_1b0,local_e8,&local_228,local_170,cVar1);
      lVar4 = lVar4 + 0x28;
    } while ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0);
    uVar3 = auVar6._8_8_ & 0xffffffff;
  }
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hc59876b3a9eab6e0E
            (CONCAT44(uStack_224,local_228),CONCAT44(uStack_21c,uStack_220));
LAB_0017746d:
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17ha7af664bba1b7bffE(local_f8);
  return uVar3;
}