
  fn rg::flags::doc::help::format_short_columns::hb1e7c29dbb65ba0c(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64) -> i64

{
    let mut var_b0: i64 = arg3;
    let mut var_a8: i64 = arg5;
    let mut var_70: *mut *mut [i8; 0xd2];
    
    if arg3 != arg5
    {
        var_70 = &data_7ea348;
        let var_68: i64 = 1;
        let var_60: i64 = 8;
        let var_58: i128 = {0};
        core::panicking::assert_failed::h449f2a7fe5426575(0, &var_b0, &var_a8, &var_70);
        /* no return */
    }
    
    let mut var_d0: i64 = 0;
    let var_c8: i64 = 1;
    let result: i64 = 0;
    core::iter::traits::iterator::Iterator::zip::h0d560c715792bf7d(&var_70, arg2, 
        arg2 + arg3 * 0x18, arg4);
    let var_38: i64 = 0;
    let mut var_a0: i64;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdad994c612ce0c4a(&var_a0, &var_70);
    let i_2: *mut c_void;
    let mut i: *mut c_void = i_2;
    
    if i != 0
    {
        let var_f8_1: i64 = arg6 + 2;
        
        do
        {
            let mut i_1: *mut c_void = i;
            let cond:0_1: bool = var_a0 == 0;
            let var_90: *mut c_void;
            let mut var_88: *mut c_void = var_90;
            let mut var_128: *mut *mut c_void;
            
            if !cond:0_1
            {
                var_128 = &data_7ea358;
                let var_120_1: i64 = 1;
                let var_118_1: i64 = 8;
                let var_110_1: i128 = {0};
                core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_d0, &var_128));
                i = i_1;
            }
            
            let rbx_2: u64 = var_f8_1 - *i.byte_offset(0x10);
            var_128 = &data_7ea368;
            let var_120_2: i64 = 1;
            let var_118_2: i64 = 8;
            let mut var_110_2: i128 = {0};
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_d0, &var_128));
            let mut var_e8: *mut *mut c_void = &i_1;
            let var_e0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6c34d9aa7433ce;
            var_128 = &data_462330;
            let var_120_3: i64 = 1;
            *var_110_2[8] = 0;
            let var_118_3: *mut *mut *mut c_void = &var_e8;
            var_110_2 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_d0, &var_128));
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h6004d655c3feac73(&var_128, 
                " \n        !FLAG!)\n          CO…", rbx_2);
            let var_d8_1: *mut *mut *mut c_void = var_118_3;
            var_e8 = var_128;
            let mut var_80: *mut *mut *mut c_void = &var_e8;
            let var_78_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_128 = &data_462330;
            let var_120_4: i64 = 1;
            *var_110_2[8] = 0;
            let var_118_4: *mut *mut *mut *mut c_void = &var_80;
            var_110_2 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_d0, &var_128));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_e8);
            var_e8 = &var_88;
            let var_e0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6c34d9aa7433ce;
            var_128 = &data_462330;
            let var_120_5: i64 = 1;
            *var_110_2[8] = 0;
            let var_118_5: *mut *mut *mut c_void = &var_e8;
            var_110_2 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_d0, &var_128));
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdad994c612ce0c4a(&var_a0, &var_70);
            i = i_2;
        } while i != 0;
    }
    
    arg1[1] = result;
    *arg1 = var_d0;
    result
}
