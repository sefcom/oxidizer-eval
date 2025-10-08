
  fn rg::flags::doc::help::generate_long_flag::h24845516d3a04078(arg1: i64, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut rax: i8;
    let mut rdx: i8;
    rax = (*arg2.byte_offset(0x28))();
    let mut var_248: u32;
    let mut var_228: *mut *mut [i8; 0xc8];
    let mut var_210_1: i128;
    let mut var_1a0: *mut u32;
    let mut var_f8: i64;
    let mut rsi_4: *mut *mut [i8; 0xf3];
    let mut r13: i64;
    
    if (rax & 1) == 0
    {
        var_228 = &data_7ea450;
        let var_220_3: i64 = 1;
        let var_218_3: i64 = 8;
        var_210_1 = {0};
        rsi_4 = &data_7ea4c8;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_228));
        r13 = *arg2.byte_offset(0x48);
    }
    else
    {
        var_248 = rdx;
        var_1a0 = &var_248;
        let var_198_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        var_228 = &data_7ea430;
        let var_220: i64 = 1;
        let mut var_210: i128;
        *var_210[8] = 0;
        let var_218: *mut *mut u32 = &var_1a0;
        var_210 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_228));
        r13 = *arg2.byte_offset(0x48);
        let mut rax_2: i64;
        let mut rdx_1: i64;
        rax_2 = r13(arg1, &data_7ea480);
        
        if rax_2 != 0
        {
            var_f8 = rax_2;
            let var_f0_1: i64 = rdx_1;
            var_1a0 = &var_f8;
            let var_198_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
            var_228 = &data_7ea440;
            let var_220_1: i64 = 1;
            *var_210[8] = 0;
            let var_218_1: *mut *mut u32 = &var_1a0;
            var_210 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_228));
        }
        
        var_228 = &data_7ea2b0;
        let var_220_2: i64 = 1;
        let var_218_2: i64 = 8;
        var_210_1 = {0};
        rsi_4 = &data_7ea4b0;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_228));
    }
    
    let mut rax_6: i64;
    let mut rdx_2: i64;
    rax_6 = (*arg2.byte_offset(0x30))(arg1, rsi_4);
    let mut var_78: i64 = rax_6;
    let var_70: i64 = rdx_2;
    var_1a0 = &var_78;
    let var_198_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    var_228 = &data_7e5ee8;
    let var_220_4: i64 = 1;
    *var_210_1[8] = 0;
    let var_218_4: *mut *mut u32 = &var_1a0;
    var_210_1 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_228));
    let mut rax_8: i64;
    let mut rdx_3: i64;
    rax_8 = r13(arg1, &data_7ea4e0);
    
    if rax_8 != 0
    {
        var_f8 = rax_8;
        let var_f0_2: i64 = rdx_3;
        var_1a0 = &var_f8;
        let var_198_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
        var_228 = &data_7ea2c0;
        let var_220_5: i64 = 1;
        *var_210_1[8] = 0;
        let var_218_5: *mut *mut u32 = &var_1a0;
        var_210_1 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_228));
    }
    
    var_228 = &data_7ea358;
    let var_220_6: i64 = 1;
    let mut var_218_6: *mut *mut u32 = 8;
    let mut var_210_2: i128 = {0};
    core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_228));
    let mut rax_11: i64;
    let mut rdx_4: i64;
    rax_11 = (*arg2.byte_offset(0x60))(arg1, &data_7ea510);
    let mut rax_12: *mut i8;
    let mut rdx_5: *mut c_void;
    rax_12 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hd0360e9e77a44e0f(rax_11, rdx_4);
    let mut var_a8: ();
    rg::flags::doc::render_custom_markup::h79890d222312deab(&var_a8, rax_12, rdx_5);
    let var_a0: *mut i8;
    let var_98: *mut c_void;
    let mut var_90: ();
    rg::flags::doc::render_custom_markup::h51bf0a9065369f97(&var_90, var_a0, var_98);
    let mut var_110: ();
    let var_88: i64;
    let var_80: i64;
    rg::flags::doc::help::remove_roff::h5826915916572aef(&var_110, var_88, var_80);
    let mut rax_13: i64;
    let mut rdx_8: i64;
    rax_13 = (*arg2.byte_offset(0x40))(arg1);
    
    if rax_13 != 0
    {
        var_f8 = rax_13;
        let var_f0_3: i64 = rdx_8;
        
        if (*arg2.byte_offset(0x20))(arg1) != 0
        {
            var_1a0 = &var_f8;
            let var_198_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
            var_228 = &data_7ea460;
            let var_220_7: i64 = 2;
            *var_210_2[8] = 0;
            var_218_6 = &var_1a0;
            var_210_2 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_110, &var_228));
        }
    }
    
    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h6004d655c3feac73(&var_228, 
        " \n        !FLAG!)\n          CO…", 8);
    let var_128: *mut *mut u32 = var_218_6;
    let mut var_138: i128 = var_228;
    let var_c8: i64 = 0x47;
    let var_b0: i16 = 0x101;
    let var_e8: i64 = 1;
    let var_e0: i64 = 0;
    let var_d8: i64 = 1;
    let var_d0: i64 = 0;
    var_f8 = 0;
    let var_c0: i128 = {0};
    let var_108: i64;
    let var_100: i64;
    core::str::pattern::StrSearcher::new::h3b91c04870bd602f(&var_1a0, var_108, var_100, 
        "\n\nripgrep !!VERSION!!\nAndrew …", 2);
    let var_140: i64;
    let var_1c8: i64 = var_140;
    let var_150: i128;
    let var_1d8: i128 = var_150;
    let mut var_160: i128;
    let var_1e8: i128 = var_160;
    let var_170: i128;
    let var_1f8: i128 = var_170;
    let mut var_180: i128;
    var_210_2 = var_180;
    let mut var_190: i128;
    var_218_6 = var_190;
    var_228 = var_1a0;
    let var_1c0: i64 = 0;
    let var_1b8: i64 = var_100;
    let var_1b0: i16 = 1;
    let var_1a8: i64 = 0;
    let rax_18: i64 = *var_138[8];
    
    loop
    {
        let mut var_48: i64;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8acc930f85d733e6(&var_48, &var_228);
        let var_40: i64;
        
        if var_40 == 0
        {
            break;
        }
        
        if var_48 != 0
        {
            var_1a0 = &data_7ea408;
            let var_198_6: i64 = 1;
            var_190 = 8;
            var_190 = {0};
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_1a0));
        }
        
        let var_38: u64;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1a0, var_40, var_38);
        let rax_21: i64 = var_190;
        var_248 = var_1a0;
        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
            &var_190, 0xa, var_40, var_38);
        var_1a0 = nullptr;
        let var_198_7: u64 = var_38;
        var_160 = 0;
        let var_240: i64;
        
        if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5d5341ae62813a69(core::iter::traits::iterator::Iterator::try_fold::h3b7b13531c8d8e08(&var_1a0), 0) == 0
        {
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_1a0, var_240, 
                rax_21, "\n/home/34r7hm4n/dev/oxidizer/ox…", 1, 
                " \n        !FLAG!)\n          CO…", 1);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_248);
            let rdx_14: i64 = var_190;
            let var_238_2: i64 = rdx_14;
            var_248 = var_1a0;
            textwrap::refill::refill::hb2758928dcec7e81(&var_1a0, var_240, rdx_14, &var_f8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_248);
            let rdx_15: i64 = var_190;
            let var_238_3: i64 = rdx_15;
            var_248 = var_1a0;
            textwrap::indentation::indent::h02856ab39ce05aa9(&var_1a0, var_240, rdx_15, 
                *var_138[8], var_128);
        }
        else
        {
            textwrap::indentation::indent::h02856ab39ce05aa9(&var_1a0, var_240, rax_21, rax_18, 
                var_128);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_248);
        var_248 = var_1a0;
        let mut rax_25: i64;
        let mut rdx_16: i64;
        rax_25 =
            core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h6abe8100f4b9b9b1(var_240, var_190);
        let mut var_58: i64 = rax_25;
        let var_50_1: i64 = rdx_16;
        let mut var_68: *mut i64 = &var_58;
        let var_60_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
        var_1a0 = &data_462330;
        let var_198_8: i64 = 1;
        var_180 = 0;
        var_190 = &var_68;
        *var_190[8] = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_1a0));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_248);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_138);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_110);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_90);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_a8)
}
