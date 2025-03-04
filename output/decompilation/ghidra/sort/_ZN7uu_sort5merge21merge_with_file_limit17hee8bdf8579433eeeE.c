undefined8 *
_ZN7uu_sort5merge21merge_with_file_limit17hee8bdf8579433eeeE
          (undefined8 *param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined auVar8 [16];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  long local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  
                    /* try { // try from 0022bf9f to 0022bfbb has its CatchHandler @ 0022c49d */
  uVar4 = _ZN113__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__exact_size__ExactSizeIterator_GT_3len17hacb85b199b0cad2aE
                    (param_2);
  uVar1 = *(ulong *)(param_3 + 0x70);
  if (uVar1 < uVar4) {
    uVar4 = _ZN113__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__exact_size__ExactSizeIterator_GT_3len17hacb85b199b0cad2aE
                      (param_2);
    local_268 = *param_2;
    uStack_264 = param_2[1];
    uStack_260 = param_2[2];
    uStack_25c = param_2[3];
    local_258 = param_2[4];
    uStack_254 = param_2[5];
    uStack_250 = param_2[6];
    uStack_24c = param_2[7];
    _ZN9itertools9Itertools6chunks17hc1d2676d26c759d9E(&local_e8,&local_268,uVar1);
    local_208 = 0;
    local_200 = 8;
    local_1f8 = 0;
    if (uVar4 != 0) {
      local_188 = -0x7ffffffffffffffe;
      do {
        uVar7 = uVar4 - uVar1;
        if (uVar4 < uVar1) {
          uVar7 = 0;
        }
                    /* try { // try from 0022c05c to 0022c0cd has its CatchHandler @ 0022c4d2 */
        _ZN98__LT_itertools__groupbylazy__Chunks_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hebe185d9380178adE
                  (&local_1f0,&local_e8);
        if (local_1f0 == local_188) {
                    /* try { // try from 0022c440 to 0022c471 has its CatchHandler @ 0022c4bc */
          uVar5 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_003002e0);
                    /* catch() { ... } // from try @ 0022c404 with catch @ 0022c472 */
                    /* catch() { ... } // from try @ 0022c05c with catch @ 0022c4d2 */
          _ZN4core3ptr78drop_in_place_LT_alloc__vec__Vec_LT_uu_sort__merge__ClosedPlainTmpFile_GT__GT_17h67b23147265995e1E
                    (&local_208);
          _ZN4core3ptr447drop_in_place_LT_itertools__groupbylazy__IntoChunks_LT_core__iter__adapters__map__Map_LT_alloc__vec__into_iter__IntoIter_LT_uu_sort__merge__ClosedPlainTmpFile_GT__C_uu_sort__ext_sort__reader_writer_LT__RF_mut_u20_core__iter__adapters__map__Map_LT_core__slice__iter__Iter_LT_std__ffi__os_str__OsString_GT__C_uu_sort__open_LT__RF_std__ffi__os_str__OsString_GT__GT__C_uu_sort__merge__WriteablePlainTmpFile_GT____u7b__u7b_closure_u7d__u7d__GT__GT__GT_17h6522b167a9a220a1E
                    (&local_e8);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume(uVar5);
        }
        local_198 = (undefined4)local_1d0;
        uStack_194 = local_1d0._4_4_;
        uStack_190 = (undefined4)uStack_1c8;
        uStack_18c = uStack_1c8._4_4_;
        local_1a8 = (undefined4)local_1e0;
        uStack_1a4 = local_1e0._4_4_;
        uStack_1a0 = (undefined4)uStack_1d8;
        uStack_19c = uStack_1d8._4_4_;
        local_1b8 = (undefined4)local_1f0;
        uStack_1b4 = local_1f0._4_4_;
        uStack_1b0 = (undefined4)uStack_1e8;
        uStack_1ac = uStack_1e8._4_4_;
        _ZN7uu_sort5merge19merge_without_limit17h2875c70cfc96a2e1E(&local_268,&local_1b8,param_3);
        uVar5 = CONCAT44(uStack_25c,uStack_260);
        uVar6 = CONCAT44(uStack_254,local_258);
        if (CONCAT44(uStack_264,local_268) == 3) {
LAB_0022c3a4:
          param_1[1] = uVar5;
          param_1[2] = uVar6;
          *param_1 = 3;
LAB_0022c411:
                    /* try { // try from 0022c411 to 0022c41d has its CatchHandler @ 0022c498 */
          _ZN4core3ptr78drop_in_place_LT_alloc__vec__Vec_LT_uu_sort__merge__ClosedPlainTmpFile_GT__GT_17h67b23147265995e1E
                    (&local_208);
          goto LAB_0022c41e;
        }
        local_128 = local_210;
        local_138 = (undefined4)local_220;
        uStack_134 = local_220._4_4_;
        uStack_130 = (undefined4)uStack_218;
        uStack_12c = uStack_218._4_4_;
        local_148 = local_230;
        uStack_144 = uStack_22c;
        uStack_140 = (undefined4)uStack_228;
        uStack_13c = uStack_228._4_4_;
        uStack_158 = (undefined4)local_240;
        uStack_154 = local_240._4_4_;
        uStack_150 = (undefined4)uStack_238;
        uStack_14c = uStack_238._4_4_;
        uStack_168 = uStack_250;
        uStack_164 = uStack_24c;
        uStack_160 = (undefined4)local_248;
        uStack_15c = local_248._4_4_;
                    /* try { // try from 0022c126 to 0022c182 has its CatchHandler @ 0022c4c0 */
        local_180 = CONCAT44(uStack_264,local_268);
        uStack_178 = uVar5;
        local_170 = uVar6;
        _ZN7uu_sort7tmp_dir13TmpDirWrapper9next_file17h05b3ad075068705fE(&local_1b8,param_4);
        if (CONCAT44(uStack_1ac,uStack_1b0) == -0x8000000000000000) {
          *(undefined4 *)(param_1 + 1) = local_1a8;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_1a4;
          *(undefined4 *)(param_1 + 2) = uStack_1a0;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_19c;
LAB_0022c3da:
          *param_1 = 3;
                    /* try { // try from 0022c3e1 to 0022c3ed has its CatchHandler @ 0022c4bc */
          _ZN4core3ptr47drop_in_place_LT_uu_sort__merge__FileMerger_GT_17hc0f545c2cd5ee31cE
                    (&local_180);
          goto LAB_0022c411;
        }
        local_108 = CONCAT44(uStack_1b4,local_1b8);
        local_f8 = local_1a8;
        uStack_f4 = uStack_1a4;
        uStack_f0 = uStack_1a0;
        uStack_ec = uStack_19c;
        local_100 = CONCAT44(uStack_1ac,uStack_1b0);
        _ZN90__LT_uu_sort__merge__WriteablePlainTmpFile_u20_as_u20_uu_sort__merge__WriteableTmpFile_GT_6create17hf387bcea2432cd24E
                  (&local_268,&local_108);
        lVar3 = CONCAT44(uStack_264,local_268);
        uVar5 = CONCAT44(uStack_25c,uStack_260);
        uVar6 = CONCAT44(uStack_254,local_258);
        if (lVar3 == -0x8000000000000000) {
          param_1[1] = uVar5;
          param_1[2] = uVar6;
          goto LAB_0022c3da;
        }
        uStack_1d8 = CONCAT44(uStack_24c,uStack_250);
        uStack_1c8 = local_240;
        local_1c0 = uStack_238;
        local_1d0 = local_248;
        uStack_218 = CONCAT44(uStack_12c,uStack_130);
        local_210 = local_128;
        uStack_228 = CONCAT44(uStack_13c,uStack_140);
        local_220 = CONCAT44(uStack_134,local_138);
        uStack_238 = CONCAT44(uStack_14c,uStack_150);
        local_230 = local_148;
        uStack_22c = uStack_144;
        local_248 = CONCAT44(uStack_15c,uStack_160);
        local_240 = (undefined *)CONCAT44(uStack_154,uStack_158);
        local_258 = (undefined4)local_170;
        uStack_254 = local_170._4_4_;
        uStack_250 = uStack_168;
        uStack_24c = uStack_164;
        local_268 = (undefined4)local_180;
        uStack_264 = local_180._4_4_;
        uStack_260 = (undefined4)uStack_178;
        uStack_25c = uStack_178._4_4_;
        local_1f0 = lVar3;
        uStack_1e8 = uVar5;
        local_1e0 = uVar6;
        uVar5 = _ZN90__LT_uu_sort__merge__WriteablePlainTmpFile_u20_as_u20_uu_sort__merge__WriteableTmpFile_GT_8as_write17hd7022d2bef20dad2E
                          (&local_1f0);
                    /* try { // try from 0022c225 to 0022c236 has its CatchHandler @ 0022c4aa */
        auVar8 = _ZN7uu_sort5merge10FileMerger12write_all_to17h1c9339354b7849ecE
                           (&local_268,param_3,uVar5);
        if (auVar8._0_8_ != 0) {
          *(undefined (*) [16])(param_1 + 1) = auVar8;
          *param_1 = 3;
                    /* try { // try from 0022c404 to 0022c410 has its CatchHandler @ 0022c472 */
          _ZN4core3ptr58drop_in_place_LT_uu_sort__merge__WriteablePlainTmpFile_GT_17h96330bd0f939a872E
                    (&local_1f0);
          goto LAB_0022c411;
        }
        uStack_238 = local_1c0;
        local_248 = local_1d0;
        local_240 = uStack_1c8;
        local_258 = (undefined4)local_1e0;
        uStack_254 = local_1e0._4_4_;
        uStack_250 = (undefined4)uStack_1d8;
        uStack_24c = uStack_1d8._4_4_;
        local_268 = (undefined4)local_1f0;
        uStack_264 = local_1f0._4_4_;
        uStack_260 = (undefined4)uStack_1e8;
        uStack_25c = uStack_1e8._4_4_;
                    /* try { // try from 0022c274 to 0022c2d3 has its CatchHandler @ 0022c4be */
        _ZN90__LT_uu_sort__merge__WriteablePlainTmpFile_u20_as_u20_uu_sort__merge__WriteableTmpFile_GT_16finished_writing17h5f1c720516718632E
                  (&local_1b8,&local_268);
        uVar5 = CONCAT44(uStack_1ac,uStack_1b0);
        uVar6 = CONCAT44(uStack_1a4,local_1a8);
        if (CONCAT44(uStack_1b4,local_1b8) == -0x8000000000000000) goto LAB_0022c3a4;
        local_120 = CONCAT44(uStack_1b4,local_1b8);
        local_118 = uVar5;
        local_110 = uVar6;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3f59369679f0d1cbE(&local_208,&local_120);
        bVar2 = uVar1 < uVar4;
        uVar4 = uVar7;
      } while (bVar2);
    }
                    /* try { // try from 0022c2e0 to 0022c314 has its CatchHandler @ 0022c4bc */
    _ZN98__LT_itertools__groupbylazy__Chunks_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hebe185d9380178adE
              (&local_268,&local_e8);
    if (CONCAT44(uStack_264,local_268) != -0x7ffffffffffffffe) {
      _ZN4core3ptr470drop_in_place_LT_core__option__Option_LT_itertools__groupbylazy__Chunk_LT_core__iter__adapters__map__Map_LT_alloc__vec__into_iter__IntoIter_LT_uu_sort__merge__ClosedPlainTmpFile_GT__C_uu_sort__ext_sort__reader_writer_LT__RF_mut_u20_core__iter__adapters__map__Map_LT_core__slice__iter__Iter_LT_std__ffi__os_str__OsString_GT__C_uu_sort__open_LT__RF_std__ffi__os_str__OsString_GT__GT__C_uu_sort__merge__WriteablePlainTmpFile_GT____u7b__u7b_closure_u7d__u7d__GT__GT__GT__GT_17h0b384b4f21d54495E
                (&local_268);
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking5panic17h8c3a660c3523e4a4E(&DAT_0012fbf6,0x2a,&PTR_DAT_003002a0);
    }
    _ZN4core3ptr470drop_in_place_LT_core__option__Option_LT_itertools__groupbylazy__Chunk_LT_core__iter__adapters__map__Map_LT_alloc__vec__into_iter__IntoIter_LT_uu_sort__merge__ClosedPlainTmpFile_GT__C_uu_sort__ext_sort__reader_writer_LT__RF_mut_u20_core__iter__adapters__map__Map_LT_core__slice__iter__Iter_LT_std__ffi__os_str__OsString_GT__C_uu_sort__open_LT__RF_std__ffi__os_str__OsString_GT__GT__C_uu_sort__merge__WriteablePlainTmpFile_GT____u7b__u7b_closure_u7d__u7d__GT__GT__GT__GT_17h0b384b4f21d54495E
              (&local_268);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hfe0833828f6f3053E
              (&local_180,&local_208);
                    /* try { // try from 0022c32a to 0022c32e has its CatchHandler @ 0022c486 */
    local_248 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8cfa0d4394d8defcE();
    local_258 = (undefined4)local_170;
    uStack_254 = local_170._4_4_;
    uStack_250 = uStack_168;
    uStack_24c = uStack_164;
    local_268 = (undefined4)local_180;
    uStack_264 = local_180._4_4_;
    uStack_260 = (undefined4)uStack_178;
    uStack_25c = uStack_178._4_4_;
    local_240 = &DAT_00300398;
                    /* try { // try from 0022c35a to 0022c36e has its CatchHandler @ 0022c474 */
    _ZN7uu_sort5merge21merge_with_file_limit17hc0e6e7450cc5dee9E(param_1,&local_268,param_3,param_4)
    ;
LAB_0022c41e:
    _ZN4core3ptr447drop_in_place_LT_itertools__groupbylazy__IntoChunks_LT_core__iter__adapters__map__Map_LT_alloc__vec__into_iter__IntoIter_LT_uu_sort__merge__ClosedPlainTmpFile_GT__C_uu_sort__ext_sort__reader_writer_LT__RF_mut_u20_core__iter__adapters__map__Map_LT_core__slice__iter__Iter_LT_std__ffi__os_str__OsString_GT__C_uu_sort__open_LT__RF_std__ffi__os_str__OsString_GT__GT__C_uu_sort__merge__WriteablePlainTmpFile_GT____u7b__u7b_closure_u7d__u7d__GT__GT__GT_17h6522b167a9a220a1E
              (&local_e8);
  }
  else {
    local_e8 = *param_2;
    uStack_e4 = param_2[1];
    uStack_e0 = param_2[2];
    uStack_dc = param_2[3];
    local_d8 = param_2[4];
    uStack_d4 = param_2[5];
    uStack_d0 = param_2[6];
    uStack_cc = param_2[7];
    _ZN7uu_sort5merge19merge_without_limit17h9b5b2c5845db30dfE(param_1,&local_e8,param_3);
  }
  return param_1;
}