
  fn rg::search::SearchWorkerBuilder::build::h2111ba1553679b5c(arg1: *mut c_void, arg2: *mut c_void, arg3: *mut i128, arg4: i64, arg5: i64) -> i64

{
    let mut var_b8: ();
    _$LT$rg..search..Config$u20$as$u20$core..clone..Clone$GT$::clone::hdb3acc2cc00aa5bb(&var_b8, 
        arg2);
    let rbp: i8 = *arg2.byte_offset(0xc8);
    let mut var_f0: i128;
    _$LT$grep_cli..decompress..DecompressionMatcher$u20$as$u20$core..clone..Clone$GT$::clone::h39ec143f99b801ab(&var_f0, arg2.byte_offset(0x88));
    let r13_1: i8 = *arg2.byte_offset(0xc0);
    let var_c0: i64;
    *arg1.byte_offset(0x2b0) = var_c0;
    let zmm0: i128 = var_f0;
    let var_d0: i128;
    *arg1.byte_offset(0x2a0) = var_d0;
    let var_e0: i128;
    *arg1.byte_offset(0x290) = var_e0;
    *arg1.byte_offset(0x280) = zmm0;
    memcpy(arg1.byte_offset(0x1f8), &var_b8, 0x88);
    let zmm1_1: i128 = arg3[1];
    let zmm2_1: i128 = arg3[2];
    let zmm3: i128 = arg3[3];
    *arg1.byte_offset(0x2c0) = *arg3;
    *arg1.byte_offset(0x2d0) = zmm1_1;
    *arg1.byte_offset(0x2e0) = zmm2_1;
    *arg1.byte_offset(0x2f0) = zmm3;
    *arg1.byte_offset(0x300) = arg3[4];
    *arg1.byte_offset(0x310) = arg3[5];
    *arg1.byte_offset(0x320) = arg3[6];
    memcpy(arg1.byte_offset(0x108), arg5, 0xf0);
    *arg1.byte_offset(0x328) = rbp;
    *arg1.byte_offset(0x2b8) = r13_1;
    /* tailcall */
    memcpy(arg1, arg4, 0x108)
}
