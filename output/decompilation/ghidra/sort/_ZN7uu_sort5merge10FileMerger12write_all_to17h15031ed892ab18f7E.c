undefined  [16]
_ZN7uu_sort5merge10FileMerger12write_all_to17h15031ed892ab18f7E
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  long local_48;
  char local_40;
  undefined7 uStack_3f;
  
  do {
                    /* try { // try from 001cd750 to 001cd76b has its CatchHandler @ 001cd813 */
    _ZN7uu_sort5merge10FileMerger10write_next17h518a8e2b8ce07954E(&local_68,param_1,param_2,param_3)
    ;
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h1c6299f5896d249cE
              (&local_48,&local_68);
    if (local_48 != 0) {
      auVar1._9_7_ = uStack_3f;
      auVar1[8] = local_40;
      auVar1._0_8_ = local_48;
      _ZN4core3ptr47drop_in_place_LT_uu_sort__merge__FileMerger_GT_17hca51d1930952c542E(param_1);
      return auVar1;
    }
  } while (local_40 != '\0');
  local_68 = *param_1;
  uStack_64 = param_1[1];
  uStack_60 = param_1[2];
  uStack_5c = param_1[3];
                    /* try { // try from 001cd787 to 001cd7ba has its CatchHandler @ 001cd80b */
  _ZN4core3ptr98drop_in_place_LT_std__sync__mpsc__Sender_LT__LP_usize_C_uu_sort__chunks__RecycledChunk_RP__GT__GT_17hc042c6d348025020E
            (&local_68);
  local_58 = *(undefined8 *)(param_1 + 0x10);
  local_68 = param_1[0xc];
  uStack_64 = param_1[0xd];
  uStack_60 = param_1[0xe];
  uStack_5c = param_1[0xf];
  _ZN3std6thread18JoinInner_LT_T_GT_4join17hb9eba1a0bcb320b0E(&local_48,&local_68);
  auVar1 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h38d955150ee3e803E(&local_48);
                    /* try { // try from 001cd7c5 to 001cd7c9 has its CatchHandler @ 001cd7fa */
  _ZN4core3ptr132drop_in_place_LT_binary_heap_plus__binary_heap__BinaryHeap_LT_uu_sort__merge__MergeableFile_C_uu_sort__merge__FileComparator_GT__GT_17h98adace6ce6b086aE
            (param_1 + 4);
  _ZN4core3ptr77drop_in_place_LT_core__option__Option_LT_uu_sort__merge__PreviousLine_GT__GT_17h58bd2c79d674c36dE
            (param_1 + 0x12);
  return auVar1;
}