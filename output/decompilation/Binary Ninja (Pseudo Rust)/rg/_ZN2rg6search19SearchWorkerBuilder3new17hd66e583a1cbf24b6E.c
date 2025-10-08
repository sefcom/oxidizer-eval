
  fn rg::search::SearchWorkerBuilder::new::hd66e583a1cbf24b6(arg1: *mut c_void) -> i64

{
    let mut var_d0: i128;
    grep_cli::decompress::DecompressionReaderBuilder::new::h6380b147629468c0(&var_d0);
    let var_98: i8 = 1;
    let mut var_90: ();
    _$LT$rg..search..Config$u20$as$u20$core..default..Default$GT$::default::h3a3ab2ba64f10d63(
        &var_90);
    let zmm0: i128 = var_d0;
    let var_a0: i128;
    *arg1.byte_offset(0xb8) = var_a0;
    let var_b0: i128;
    *arg1.byte_offset(0xa8) = var_b0;
    let var_c0: i128;
    *arg1.byte_offset(0x98) = var_c0;
    *arg1.byte_offset(0x88) = zmm0;
    let result: i64 = memcpy(arg1, &var_90, 0x88);
    *arg1.byte_offset(0xc8) = 1;
    result
}
