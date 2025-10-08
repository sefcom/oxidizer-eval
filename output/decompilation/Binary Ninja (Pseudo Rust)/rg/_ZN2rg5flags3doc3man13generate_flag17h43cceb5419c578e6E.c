
  fn rg::flags::doc::man::generate_flag::h43cceb5419c578e6(arg1: i64, arg2: i64, arg3: i64) -> i64

{
    let mut rax: i8;
    let mut rdx: i8;
    rax = (*(arg2 + 0x28))();
    let mut var_c0: *mut *mut [i8; 0xb0];
    let mut var_90: *mut u32;
    let mut var_78: i64;
    let mut var_70: *mut i8;
    let mut var_40: u32;
    
    if (rax & 1) != 0
    {
        var_40 = rdx;
        var_90 = &var_40;
        let var_88_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        var_c0 = &data_7ea770;
        let var_b8_1: i64 = 2;
        let var_a0_1: i64 = 0;
        let var_b0_1: *mut *mut u32 = &var_90;
        let mut var_a8_1: i64 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_c0));
        let mut rax_3: i64;
        let mut rdx_1: *mut i8;
        rax_3 = (*(arg2 + 0x48))(arg1, &data_7ea850);
        
        if rax_3 != 0
        {
            var_78 = rax_3;
            var_70 = rdx_1;
            var_90 = &var_78;
            let var_88_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
            var_c0 = &data_7ea790;
            let var_b8_2: i64 = 2;
            let var_a0_2: i64 = 0;
            let var_b0_2: *mut *mut u32 = &var_90;
            var_a8_1 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_c0));
        }
        
        var_c0 = &data_7ea2b0;
        let var_b8_3: i64 = 1;
        let var_b0_3: i64 = 8;
        var_a8_1 = {0};
        core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_c0));
    }
    
    let mut rax_6: i64;
    let mut rdx_2: i64;
    rax_6 = (*(arg2 + 0x30))(arg1);
    alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_40, rax_6, rdx_2, 
        "-\n_rg() {\n  local i cur prev o…", 1, &data_483d67[0x21], 2);
    var_90 = &var_40;
    let var_88_3: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_c0 = &data_7ea7b0;
    let var_b8_4: i64 = 2;
    let var_a0_3: i64 = 0;
    let var_b0_4: *mut *mut u32 = &var_90;
    let mut var_a8_2: i64 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_c0));
    let mut rax_8: i64;
    let mut rdx_3: *mut i8;
    rax_8 = (*(arg2 + 0x48))(arg1, &data_7ea898);
    
    if rax_8 != 0
    {
        var_78 = rax_8;
        var_70 = rdx_3;
        var_90 = &var_78;
        let var_88_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
        var_c0 = &data_7ea7d0;
        let var_b8_5: i64 = 2;
        let var_a0_4: i64 = 0;
        let var_b0_5: *mut *mut u32 = &var_90;
        var_a8_2 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_c0));
    }
    
    var_c0 = &data_7ea358;
    let var_b8_6: i64 = 1;
    let var_b0_6: i64 = 8;
    var_a8_2 = {0};
    core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_c0));
    var_c0 = &data_7ea7f0;
    let var_b8_7: i64 = 1;
    let var_b0_7: i64 = 8;
    var_a8_2 = {0};
    core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_c0));
    let mut rax_12: i64;
    let mut rdx_4: i64;
    rax_12 = (*(arg2 + 0x60))(arg1, &data_7ea8e0);
    let mut rax_13: *mut i8;
    let mut rdx_5: *mut c_void;
    rax_13 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hd0360e9e77a44e0f(rax_12, rdx_4);
    rg::flags::doc::render_custom_markup::hf5cd9dfecc68095e(&var_78, rax_13, rdx_5);
    let var_68: *mut c_void;
    rg::flags::doc::render_custom_markup::h0fb1cb8c658149ec(&var_90, var_70, var_68);
    let mut var_60: *mut *mut u32 = &var_90;
    let var_58: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_c0 = &data_7ea800;
    let var_b8_8: i64 = 2;
    let var_a0_5: i64 = 0;
    let var_b0_8: *mut *mut *mut u32 = &var_60;
    let mut var_a8_3: i64 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_c0));
    let mut rax_15: *mut u32;
    let mut rdx_7: i64;
    rax_15 = (*(arg2 + 0x40))(arg1, &data_7ea8f8);
    
    if rax_15 != 0
    {
        let mut var_50: *mut u32 = rax_15;
        let var_48_1: i64 = rdx_7;
        
        if (*(arg2 + 0x20))(arg1) != 0
        {
            var_c0 = &data_7ea748;
            let var_b8_9: i64 = 1;
            let var_b0_9: i64 = 8;
            var_a8_3 = {0};
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_c0));
            var_60 = &var_50;
            let var_58_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
            var_c0 = &data_7ea820;
            let var_b8_10: i64 = 2;
            let var_a0_6: i64 = 0;
            let var_b0_10: *mut *mut *mut u32 = &var_60;
            var_a8_3 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_c0));
        }
    }
    
    var_c0 = &data_7ea840;
    let var_b8_11: i64 = 1;
    let var_b0_11: i64 = 8;
    var_a8_3 = {0};
    core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(arg3, &var_c0));
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_90);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_78);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_40)
}
