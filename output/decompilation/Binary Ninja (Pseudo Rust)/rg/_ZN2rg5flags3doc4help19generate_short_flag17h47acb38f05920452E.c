
  fn rg::flags::doc::help::generate_short_flag::h47acb38f05920452(arg1: *mut i128, arg2: i64, arg3: i64) -> i64

{
    let mut var_80: i64 = 0;
    let var_78: i64 = 1;
    let var_70: i64 = 0;
    let mut var_48: i64 = 0;
    let var_40: i64 = 1;
    let var_38: i64 = 0;
    let mut rax: i64;
    let mut rdx: u64;
    rax = (*(arg3 + 0x48))(arg2);
    let mut var_d0: i128;
    let mut var_68: *mut i64;
    
    if rax == 0
    {
        var_68 = -0x8000000000000000;
    }
    else
    {
        rg::flags::doc::help::generate_short_flag::_$u7b$$u7b$closure$u7d$$u7d$::h653961bfeeb0d968(
            &var_d0, rax, rdx);
        let var_c0: i64;
        let var_58_1: i64 = var_c0;
        var_68 = var_d0;
    }
    
    let mut rax_2: i8;
    let mut rdx_1: i8;
    rax_2 = (*(arg3 + 0x28))(arg2);
    let mut var_a0: *mut *mut i64;
    let mut var_90: *mut i64;
    
    if (rax_2 & 1) != 0
    {
        var_a0 = rdx_1;
        var_90 = &var_a0;
        let var_88_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        var_d0 = &data_7e5ef8;
        *var_d0[8] = 1;
        let var_b0_1: i64 = 0;
        let var_c0_1: *mut *mut i64 = &var_90;
        let mut var_b8_1: i64 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_80, &var_d0));
        var_d0 = &data_7ea2b0;
        *var_d0[8] = 1;
        let var_c0_2: i64 = 8;
        var_b8_1 = {0};
        core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_80, &var_d0));
    }
    
    let mut rax_6: *mut i64;
    let mut rdx_2: i64;
    rax_6 = (*(arg3 + 0x30))(arg2);
    var_90 = rax_6;
    let var_88_2: i64 = rdx_2;
    var_a0 = &var_90;
    let var_98: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    var_d0 = &data_7e5ee8;
    *var_d0[8] = 1;
    let var_b0_2: i64 = 0;
    let var_c0_3: *mut *mut *mut i64 = &var_a0;
    let var_b8_2: i64 = 1;
    let mut rsi_5: *mut *mut [i8; 0xf3] = &data_7ea300;
    core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_80, &var_d0));
    
    if var_68 != -0x8000000000000000
    {
        var_a0 = &var_68;
        var_90 = &var_a0;
        let var_88_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6c34d9aa7433ce;
        var_d0 = &data_7ea2c0;
        *var_d0[8] = 1;
        let var_b0_3: i64 = 0;
        let var_c0_4: *mut *mut i64 = &var_90;
        let var_b8_3: i64 = 1;
        rsi_5 = &data_7ea318;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_80, &var_d0));
    }
    
    let mut rax_9: *mut i64;
    let mut rdx_3: i64;
    rax_9 = (*(arg3 + 0x58))(arg2, rsi_5);
    var_90 = rax_9;
    let var_88_4: i64 = rdx_3;
    var_a0 = &var_90;
    let var_98_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    var_d0 = &data_462330;
    *var_d0[8] = 1;
    let var_b0_4: i64 = 0;
    let var_c0_5: *mut *mut *mut i64 = &var_a0;
    let var_b8_4: i64 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_48, &var_d0));
    arg1[1] = var_70;
    *arg1 = var_80;
    *arg1.byte_offset(0x18) = var_48;
    *arg1.byte_offset(0x28) = var_38;
    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h21c1035d1def9f19(&var_68)
}
