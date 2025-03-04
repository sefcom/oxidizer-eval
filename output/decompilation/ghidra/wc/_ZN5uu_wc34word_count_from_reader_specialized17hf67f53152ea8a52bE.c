void _ZN5uu_wc34word_count_from_reader_specialized17hf67f53152ea8a52bE(undefined4 *param_1)

{
  undefined local_a9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined local_68 [48];
  undefined8 local_38;
  undefined4 local_30;
  undefined local_2c;
  
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  _ZN65__LT_std__fs__File_u20_as_u20_uu_wc__countable__WordCountable_GT_8buffered17h59317c57c6f57ac1E
            (local_68);
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_a9 = 0;
  do {
    while( true ) {
      while( true ) {
                    /* try { // try from 001bccdb to 001bcce5 has its CatchHandler @ 001bcd7e */
        _ZN5uu_wc4utf84read23BufReadDecoder_LT_B_GT_11next_strict17h89bdfec0735647a2E
                  (&local_80,local_68);
        if (local_80 == 2) {
                    /* try { // try from 001bcd35 to 001bcd3e has its CatchHandler @ 001bcd7c */
          _ZN4core3ptr125drop_in_place_LT_core__option__Option_LT_core__result__Result_LT__RF_str_C_uu_wc__utf8__read__BufReadDecoderError_GT__GT__GT_17h5c5930e1896f3564E
                    (&local_80);
          *(undefined8 *)(param_1 + 8) = local_88;
          param_1[4] = (undefined4)local_98;
          param_1[5] = local_98._4_4_;
          param_1[6] = (undefined4)uStack_90;
          param_1[7] = uStack_90._4_4_;
          *param_1 = (undefined4)local_a8;
          param_1[1] = local_a8._4_4_;
          param_1[2] = (undefined4)uStack_a0;
          param_1[3] = uStack_a0._4_4_;
          *(undefined8 *)(param_1 + 10) = 0;
          goto LAB_001bcd61;
        }
        if (local_80 != 0) break;
        _ZN5uu_wc13process_chunk17heb617a55811ee3f2E(&local_a8,local_78,local_70,&local_a9);
      }
      if (local_78 == 0) break;
      local_a8 = local_a8 + local_70;
    }
  } while (local_70 == 0);
  *(undefined8 *)(param_1 + 8) = local_88;
  param_1[4] = (undefined4)local_98;
  param_1[5] = local_98._4_4_;
  param_1[6] = (undefined4)uStack_90;
  param_1[7] = uStack_90._4_4_;
  *param_1 = (undefined4)local_a8;
  param_1[1] = local_a8._4_4_;
  param_1[2] = (undefined4)uStack_a0;
  param_1[3] = uStack_a0._4_4_;
  *(long *)(param_1 + 10) = local_70;
LAB_001bcd61:
  _ZN4core3ptr122drop_in_place_LT_uu_wc__utf8__read__BufReadDecoder_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__GT_17hcb0d0ffcfcbb6cb6E
            (local_68);
  return;
}