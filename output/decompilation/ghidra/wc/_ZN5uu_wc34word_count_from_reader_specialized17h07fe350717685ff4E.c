void _ZN5uu_wc34word_count_from_reader_specialized17h07fe350717685ff4E(undefined4 *param_1)

{
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  ulong local_80;
  long local_78;
  long local_70;
  undefined local_68 [48];
  undefined8 local_38;
  undefined4 local_30;
  undefined local_2c;
  
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0;
  (*(code *)
    PTR__ZN65__LT_std__fs__File_u20_as_u20_uu_wc__countable__WordCountable_GT_8buffered17h156913b3d4e5571dE_001ffa80
  )(local_68);
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_88 = 0;
LAB_0016742b:
  do {
    _ZN5uu_wc4utf84read23BufReadDecoder_LT_B_GT_11next_strict17h5ded0a3c9701df78E
              (&local_80,local_68);
    if (local_80 == 2) {
                    /* try { // try from 00167468 to 00167471 has its CatchHandler @ 001674cd */
      _ZN4core3ptr125drop_in_place_LT_core__option__Option_LT_core__result__Result_LT__RF_str_C_uu_wc__utf8__read__BufReadDecoderError_GT__GT__GT_17h357e32c7c7fdd2c1E
                (&local_80);
      *(undefined8 *)(param_1 + 8) = local_98;
      param_1[4] = (undefined4)local_a8;
      param_1[5] = local_a8._4_4_;
      param_1[6] = (undefined4)uStack_a0;
      param_1[7] = uStack_a0._4_4_;
      *param_1 = (undefined4)local_b8;
      param_1[1] = local_b8._4_4_;
      param_1[2] = (undefined4)uStack_b0;
      param_1[3] = uStack_b0._4_4_;
      *(undefined8 *)(param_1 + 10) = 0;
LAB_00167493:
      _ZN4core3ptr122drop_in_place_LT_uu_wc__utf8__read__BufReadDecoder_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__GT_17h3c7461e138f950beE
                (local_68);
      return;
    }
    if ((local_80 & 1) != 0) {
      if (local_78 == 0) {
        if (local_70 != 0) {
          *(undefined8 *)(param_1 + 8) = local_98;
          param_1[4] = (undefined4)local_a8;
          param_1[5] = local_a8._4_4_;
          param_1[6] = (undefined4)uStack_a0;
          param_1[7] = uStack_a0._4_4_;
          *param_1 = (undefined4)local_b8;
          param_1[1] = local_b8._4_4_;
          param_1[2] = (undefined4)uStack_b0;
          param_1[3] = uStack_b0._4_4_;
          *(long *)(param_1 + 10) = local_70;
          goto LAB_00167493;
        }
      }
      else {
        local_b8 = local_b8 + local_70;
      }
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17hc0c7b6ba243748cbE
                (0);
      goto LAB_0016742b;
    }
                    /* try { // try from 00167420 to 00167465 has its CatchHandler @ 001674cf */
    _ZN5uu_wc13process_chunk17h2070651cf626c54eE(&local_b8,local_78,local_70,&local_88);
  } while( true );
}