undefined  [16]
_ZN7uu_sort5check5check17h11c4cef265093291E(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  code *pcVar2;
  char cVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  char cVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar10;
  long lVar11;
  undefined auVar12 [16];
  undefined **local_298;
  long local_290;
  undefined8 local_288;
  ulong local_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  ulong local_268;
  undefined **local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined **local_238;
  undefined8 local_230;
  undefined **local_228;
  undefined **local_220;
  undefined **local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  ulong local_208;
  ulong local_200;
  undefined8 local_1f8;
  undefined **local_1f0;
  undefined8 local_1e8;
  undefined **local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined **local_1c8;
  undefined *local_1c0;
  undefined *puStack_1b8;
  ulong local_1b0;
  long local_1a8;
  undefined local_1a0;
  undefined8 local_118;
  undefined **local_110;
  undefined **local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined8 local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  ulong local_c0;
  undefined local_a8;
  undefined8 *puVar9;
  
  cVar1 = *(char *)(param_3 + 0x84);
  cVar3 = -cVar1;
  local_290 = param_3;
  _ZN7uu_sort4open17h6e0cf77724ac2e35E(&local_1d8,param_1,param_2);
  if (((ulong)local_1d8 & 1) == 0) {
    local_240 = uStack_1d0;
    local_238 = local_1c8;
                    /* try { // try from 001c0944 to 001c0950 has its CatchHandler @ 001c0f36 */
    _ZN3std4sync4mpmc12sync_channel17h330c9ba5da901eb6E(&local_1d8);
    puVar5 = local_1c0;
    ppuVar4 = local_1c8;
    local_280 = (ulong)local_1d8;
    local_200 = (ulong)local_1d8;
    local_288 = uStack_1d0;
    local_1f8 = uStack_1d0;
    local_100 = local_1c8;
    local_f8 = local_1c0;
                    /* try { // try from 001c09a5 to 001c09b6 has its CatchHandler @ 001c0f23 */
    local_250 = param_1;
    local_248 = param_2;
    _ZN3std4sync4mpmc12sync_channel17hb189ed79e26d1c27E(&local_1d8,2);
    uVar8 = uStack_1d0;
    uVar10 = (ulong)local_1d8;
    local_f0 = (ulong)local_1d8;
    local_e8 = uStack_1d0;
    local_228 = local_1c8;
    local_e0 = local_1c8;
    local_230 = local_1c0;
    local_d8 = local_1c0;
                    /* try { // try from 001c0a04 to 001c0a15 has its CatchHandler @ 001c0f55 */
    _ZN62__LT_uu_sort__GlobalSettings_u20_as_u20_core__clone__Clone_GT_5clone17h43265696f2462bc6E
              (&local_d0,local_290);
    local_118 = local_240;
    local_110 = local_238;
    local_1d8 = ppuVar4;
    uStack_1d0 = puVar5;
    local_1c8 = (undefined **)uVar10;
    local_1c0 = (undefined *)uVar8;
    (*(code *)PTR_memcpy_00296e48)(&puStack_1b8,&local_d0,0xa0);
    local_c0 = 0x8000000000000000;
    local_d0 = (undefined *)0x0;
    local_a8 = 0;
                    /* try { // try from 001c0a94 to 001c0ad2 has its CatchHandler @ 001c0f55 */
    _ZN3std6thread7Builder15spawn_unchecked17h4b12415a4cf75a6bE(&local_278,&local_d0,&local_1d8);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h12022375ebf47b21E(&local_d0,&local_278);
    _ZN4core3ptr151drop_in_place_LT_std__thread__JoinHandle_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_17hf4d447ad143c1ed5E
              (&local_d0);
    uVar10 = 0x19000;
    if (*(ulong *)(local_290 + 0x68) < 0x19000) {
      uVar10 = *(ulong *)(local_290 + 0x68);
    }
                    /* try { // try from 001c0aeb to 001c0b55 has its CatchHandler @ 001c0f4d */
    _ZN7uu_sort6chunks13RecycledChunk3new17hb2d00041a3f0fa31E(&local_1d8,uVar10);
    _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17he79bf60cd8708165E
              (&local_d0,local_280,local_288,&local_1d8);
    _ZN4core3ptr124drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__sync__mpsc__SendError_LT_uu_sort__chunks__RecycledChunk_GT__GT__GT_17hd2fc59df8b1d9cabE
              (&local_d0);
    _ZN7uu_sort6chunks13RecycledChunk3new17hb2d00041a3f0fa31E(&local_1d8,uVar10);
    _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17he79bf60cd8708165E
              (&local_d0,local_280,local_288,&local_1d8);
    _ZN4core3ptr124drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__sync__mpsc__SendError_LT_uu_sort__chunks__RecycledChunk_GT__GT__GT_17hd2fc59df8b1d9cabE
              (&local_d0);
    local_298 = (undefined **)0x0;
    local_1f0 = local_228;
    local_1e8 = local_230;
    local_258 = &PTR_s_src_uu_sort_src_check_rs_0028c3f8;
    lVar11 = 0;
    while( true ) {
      ppuVar4 = local_298;
                    /* try { // try from 001c0b99 to 001c0b9d has its CatchHandler @ 001c0f31 */
      ppuVar7 = (undefined **)
                _ZN93__LT_std__sync__mpsc__IntoIter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h814ad6d3745a9547E
                          (local_228,local_230);
      if (ppuVar7 == (undefined **)0x0) break;
      lVar11 = lVar11 + 1;
      local_298 = (undefined **)0x0;
      local_220 = ppuVar7;
      local_1e0 = ppuVar4;
      if (ppuVar4 == (undefined **)0x0) {
                    /* try { // try from 001c0c60 to 001c0c6c has its CatchHandler @ 001c0ef4 */
        _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_sort__chunks__Chunk_C_std__sync__mpsc__RecvError_GT__GT_17h7ff86e8d0d3ee6b2E
                  (&local_1e0);
      }
      else {
        local_218 = ppuVar4;
        if ((ppuVar4[5] == (undefined *)0x0) ||
           (ppuVar4[4] + (long)ppuVar4[5] * 0x18 + -0x18 == (undefined *)0x0)) {
LAB_001c0ed8:
                    /* try { // try from 001c0ed8 to 001c0ee2 has its CatchHandler @ 001c0f3b */
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)(local_258);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (ppuVar7[5] == (undefined *)0x0) {
          local_258 = &PTR_s_src_uu_sort_src_check_rs_0028c410;
          goto LAB_001c0ed8;
        }
        puVar9 = (undefined8 *)ppuVar7[4];
                    /* try { // try from 001c0c0d to 001c0c19 has its CatchHandler @ 001c0f2d */
        cVar6 = _ZN7uu_sort10compare_by17h7242c39af3d6a804E
                          (ppuVar4[4] + (long)ppuVar4[5] * 0x18 + -0x18,puVar9,local_290,ppuVar4 + 6
                           ,ppuVar7 + 6);
        if (cVar6 != cVar3 && SBORROW1(cVar6,cVar3) == (char)(cVar6 + cVar1) < '\0') {
                    /* try { // try from 001c0e0f to 001c0e25 has its CatchHandler @ 001c0f3b */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1bb0423170e7fa7cE
                    (&local_1d8,local_250,local_248);
          local_268 = (ulong)local_1c8;
          local_278 = (undefined4)local_1d8;
          uStack_274 = local_1d8._4_4_;
          uStack_270 = (undefined4)uStack_1d0;
          uStack_26c = uStack_1d0._4_4_;
                    /* try { // try from 001c0e48 to 001c0e54 has its CatchHandler @ 001c0ee5 */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1bb0423170e7fa7cE
                    (&local_d0,*puVar9,puVar9[1]);
          local_1b0 = local_c0;
          local_1c0 = local_d0;
          puStack_1b8 = puStack_c8;
          local_1a0 = *(undefined *)(local_290 + 0x86);
          local_1c8 = (undefined **)local_268;
          local_1d8 = (undefined **)CONCAT44(uStack_274,local_278);
          uStack_1d0 = CONCAT44(uStack_26c,uStack_270);
                    /* try { // try from 001c0eaa to 001c0eb6 has its CatchHandler @ 001c0f3b */
          local_1a8 = lVar11;
          uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4da5af3d8a2f6642E(&local_1d8);
                    /* try { // try from 001c0eb7 to 001c0ec6 has its CatchHandler @ 001c0f2f */
          _ZN4core3ptr43drop_in_place_LT_uu_sort__chunks__Chunk_GT_17h49f783d79a42b220E(&local_218);
LAB_001c0d9b:
                    /* try { // try from 001c0d9b to 001c0da4 has its CatchHandler @ 001c0f14 */
          _ZN4core3ptr43drop_in_place_LT_uu_sort__chunks__Chunk_GT_17h49f783d79a42b220E(&local_220);
                    /* try { // try from 001c0da5 to 001c0db1 has its CatchHandler @ 001c0f1e */
          _ZN4core3ptr76drop_in_place_LT_std__sync__mpsc__IntoIter_LT_uu_sort__chunks__Chunk_GT__GT_17h61517e68e954f560E
                    (&local_1f0);
                    /* try { // try from 001c0db2 to 001c0db9 has its CatchHandler @ 001c0f16 */
          _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_sort__chunks__Chunk_C_std__sync__mpsc__RecvError_GT__GT_17h7ff86e8d0d3ee6b2E
                    (&local_298);
                    /* try { // try from 001c0dbd to 001c0dc9 has its CatchHandler @ 001c0f36 */
          _ZN4core3ptr86drop_in_place_LT_std__sync__mpsc__SyncSender_LT_uu_sort__chunks__RecycledChunk_GT__GT_17h810b5076d75bca91E
                    (&local_200);
          uStack_1d0 = uVar8;
          goto LAB_001c0dca;
        }
        _ZN7uu_sort6chunks5Chunk7recycle17h028cbe8b563e97c5E(&local_1d8,ppuVar4);
                    /* try { // try from 001c0c36 to 001c0c4a has its CatchHandler @ 001c0f2b */
        _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17he79bf60cd8708165E
                  (&local_d0,local_280,local_288,&local_1d8);
        _ZN4core3ptr124drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__sync__mpsc__SendError_LT_uu_sort__chunks__RecycledChunk_GT__GT__GT_17hd2fc59df8b1d9cabE
                  (&local_d0);
      }
      local_d0 = ppuVar7[4];
      puStack_c8 = local_d0 + (long)ppuVar7[5] * 0x18;
      local_c0 = 0;
      while( true ) {
        auVar12 = _ZN107__LT_itertools__tuple_impl__TupleWindows_LT_I_C_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1cd9f19e923758b9E
                            (&local_d0);
        puVar9 = auVar12._8_8_;
        if (auVar12._0_8_ == 0) break;
                    /* try { // try from 001c0cad to 001c0cc5 has its CatchHandler @ 001c0f86 */
        cVar6 = _ZN7uu_sort10compare_by17h7242c39af3d6a804E
                          (auVar12._0_8_,puVar9,local_290,ppuVar7 + 6,ppuVar7 + 6);
        lVar11 = lVar11 + 1;
        if (cVar6 != cVar3 && SBORROW1(cVar6,cVar3) == (char)(cVar6 + cVar1) < '\0') {
                    /* try { // try from 001c0cee to 001c0d04 has its CatchHandler @ 001c0f2f */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1bb0423170e7fa7cE
                    (&local_1d8,local_250,local_248);
          local_208 = (ulong)local_1c8;
          local_218 = local_1d8;
          uStack_210 = (undefined4)uStack_1d0;
          uStack_20c = uStack_1d0._4_4_;
                    /* try { // try from 001c0d2c to 001c0d35 has its CatchHandler @ 001c0ef9 */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1bb0423170e7fa7cE
                    (&local_278,*puVar9,puVar9[1]);
          local_1b0 = local_268;
          local_1c0 = (undefined *)CONCAT44(uStack_274,local_278);
          puStack_1b8 = (undefined *)CONCAT44(uStack_26c,uStack_270);
          local_1a0 = *(undefined *)(local_290 + 0x86);
          local_1c8 = (undefined **)local_208;
          local_1d8 = local_218;
          uStack_1d0 = CONCAT44(uStack_20c,uStack_210);
                    /* try { // try from 001c0d8b to 001c0d97 has its CatchHandler @ 001c0f2f */
          local_1a8 = lVar11;
          uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4da5af3d8a2f6642E(&local_1d8);
          goto LAB_001c0d9b;
        }
      }
                    /* try { // try from 001c0cd0 to 001c0cd7 has its CatchHandler @ 001c0f0b */
      _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_sort__chunks__Chunk_C_std__sync__mpsc__RecvError_GT__GT_17h7ff86e8d0d3ee6b2E
                (&local_298);
      local_298 = ppuVar7;
    }
                    /* try { // try from 001c0de6 to 001c0df2 has its CatchHandler @ 001c0f1e */
    _ZN4core3ptr76drop_in_place_LT_std__sync__mpsc__IntoIter_LT_uu_sort__chunks__Chunk_GT__GT_17h61517e68e954f560E
              (&local_1f0);
                    /* try { // try from 001c0df3 to 001c0dfa has its CatchHandler @ 001c0f16 */
    _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_sort__chunks__Chunk_C_std__sync__mpsc__RecvError_GT__GT_17h7ff86e8d0d3ee6b2E
              (&local_298);
                    /* try { // try from 001c0dfe to 001c0e0a has its CatchHandler @ 001c0f36 */
    _ZN4core3ptr86drop_in_place_LT_std__sync__mpsc__SyncSender_LT_uu_sort__chunks__RecycledChunk_GT__GT_17h810b5076d75bca91E
              (&local_200);
    uStack_1d0 = 0;
LAB_001c0dca:
    local_1c8 = &
                PTR__ZN4core3ptr39drop_in_place_LT_uu_sort__SortError_GT_17h960567f9640cae93E_0028c448
    ;
  }
  auVar12._8_8_ = local_1c8;
  auVar12._0_8_ = uStack_1d0;
  return auVar12;
}