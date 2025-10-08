
  fn uu_chcon::errors::report_full_error::h7e0a29c75407e3d3(arg1: *mut i128, arg2: i64, arg3: i64) -> *mut i128

{
    let mut var_a0: i64 = arg2;
    let mut var_98: i64 = arg3;
    let mut rax: i64;
    let mut rdx: i64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h4ae8628ff8eec263(0x100, 1, 1);
    let mut var_90: i64 = rax;
    let var_88: i64 = rdx;
    let var_80: i64 = 0;
    let mut var_78: *mut i64 = &var_a0;
    let var_70: fn(arg1: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbaf2d3403f2b68ee;
    let mut var_60: *mut c_void = &data_419d80;
    let var_58: i64 = 1;
    let var_40: i64 = 0;
    let var_50: *mut *mut i64 = &var_78;
    let var_48: i64 = 1;
    let mut rsi_1: *mut *mut c_void = &data_4f0328;
    core::result::Result$LT$T$C$E$GT$::unwrap::h074f43735208e33d(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h2c24365a0703be39(&var_90, &var_60));
    
    loop
    {
        let mut rax_3: i64;
        let mut rdx_1: i64;
        rax_3 = (*(var_98 + 0x30))(var_a0, rsi_1);
        
        if rax_3 == 0
        {
            break;
        }
        
        var_a0 = rax_3;
        var_98 = rdx_1;
        var_78 = &var_a0;
        let var_70_1: fn(arg1: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbaf2d3403f2b68ee;
        var_60 = &data_4f0300;
        let var_58_1: i64 = 1;
        let var_40_1: i64 = 0;
        let var_50_1: *mut *mut i64 = &var_78;
        let var_48_1: i64 = 1;
        rsi_1 = &data_4f0340;
        core::result::Result$LT$T$C$E$GT$::unwrap::h074f43735208e33d(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h2c24365a0703be39(&var_90, &var_60));
    }
    
    arg1[1] = var_80;
    *arg1 = var_90;
    arg1
}
