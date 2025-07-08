
  fn uu_df::filesystem::Filesystem::new::ha971403f9b8ef26c(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> *mut i64

{
    let mut rsi: *mut c_void = &arg2[0xc];
    
    if arg2[0xe] == 0
    {
        rsi = &arg2[3];
    }
    
    let mut var_1d0: i128;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
        &var_1d0, rsi);
    let var_1c0: i64;
    let var_1d8: i64 = var_1c0;
    let mut var_1e8: i128 = var_1d0;
    let mut var_180: i64;
    uucore::features::fsext::statfs::h7710e674e131f3de(&var_180, &var_1e8);
    
    if var_180 == 0
    {
        let var_108: i64;
        let var_28_1: i64 = var_108;
        let var_118: i128;
        let var_38_1: i128 = var_118;
        let var_128: i128;
        let var_48_1: i128 = var_128;
        let var_138: i128;
        let var_58_1: i128 = var_138;
        let var_148: i128;
        let var_68_1: i128 = var_148;
        let var_158: i128;
        let var_78_1: i128 = var_158;
        let var_168: i128;
        let var_88_1: i128 = var_168;
        let var_178: i128;
        let mut var_98: i128 = var_178;
        let mut var_1b8: i128;
        uucore::features::fsext::FsUsage::new::h19810370d0ac518d(&var_1b8, &var_98);
        let var_d8_1: i64 = arg3[2];
        let var_e8_1: i128 = *arg3;
        memcpy(&var_180, arg2, 0x98);
        let var_d0_1: i128 = var_1b8;
        let var_1a8: i128;
        let var_c0_1: i128 = var_1a8;
        let var_198: i128;
        let var_b0_1: i128 = var_198;
        let var_188: i64;
        let var_a0_1: i64 = var_188;
        memcpy(arg1, &var_180, 0xe8);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$libc..unix..linux_like..linux..gnu..b64..x86_64..statfs$C$alloc..string..String$GT$$GT$::hc9dd6679bfd799be(&var_180);
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h74894fec29a483d3(arg3);
        core::ptr::drop_in_place$LT$uucore..features..fsext..MountInfo$GT$::h9090e8568995f329(arg2);
    }
    
    arg1
}
