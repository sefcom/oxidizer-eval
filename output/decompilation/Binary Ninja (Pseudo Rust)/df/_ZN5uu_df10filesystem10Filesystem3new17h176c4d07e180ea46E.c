
  fn uu_df::filesystem::Filesystem::new::h176c4d07e180ea46(arg1: *mut i64, arg2: *mut i64, arg3: *mut i128) -> i64

{
    let mut rsi: *mut c_void = &arg2[0xc];
    
    if arg2[0xe] == 0
    {
        rsi = &arg2[3];
    }
    
    let mut var_1a8: ();
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
        &var_1a8, rsi);
    let mut var_190: i8;
    uucore::features::fsext::statfs::h383ebb62e1d8f19a(&var_190, &var_1a8);
    
    if (var_190 & 1) != 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$libc..unix..linux_like..linux..gnu..b64..x86_64..statfs$C$alloc..string..String$GT$$GT$::h4dda94d0d41dac03(&var_190);
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hac58f874263dbc4e(arg3);
        /* tailcall */
        return
            core::ptr::drop_in_place$LT$uucore..features..fsext..MountInfo$GT$::h0026f4350179d2b5(
            arg2);
    }
    
    let var_118: i64;
    let var_38: i64 = var_118;
    let var_128: i128;
    let var_48: i128 = var_128;
    let var_138: i128;
    let var_58: i128 = var_138;
    let var_148: i128;
    let var_68: i128 = var_148;
    let var_158: i128;
    let var_78: i128 = var_158;
    let var_168: i128;
    let var_88: i128 = var_168;
    let var_178: i128;
    let var_98: i128 = var_178;
    let var_188: i128;
    let mut var_a8: i128 = var_188;
    let mut var_1e0: i128;
    uucore::features::fsext::FsUsage::new::hb771c82a6e6cf300(&var_1e0, &var_a8);
    memcpy(&var_190, arg2, 0x98);
    let var_f8: i128 = *arg3;
    let var_e8: i64 = arg3[1];
    let var_e0: i128 = var_1e0;
    let var_1d0: i128;
    let var_d0: i128 = var_1d0;
    let var_1c0: i128;
    let var_c0: i128 = var_1c0;
    let var_1b0: i64;
    let var_b0: i64 = var_1b0;
    memcpy(arg1, &var_190, 0xe8)
}
