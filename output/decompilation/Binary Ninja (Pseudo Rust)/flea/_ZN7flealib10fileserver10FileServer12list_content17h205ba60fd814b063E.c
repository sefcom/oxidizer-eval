
  fn flealib::fileserver::FileServer::list_content::h205ba60fd814b063(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut result: *mut i64 = arg1;
    let mut var_148: i64 = 0;
    let var_140: i64 = 8;
    let var_138: i64 = 0;
    let mut var_178: *mut c_void;
    let rdx: i64 = std::fs::read_dir::h30d54cbcfb526b2b(&var_178, arg2);
    let mut var_170: i8;
    let mut var_1a8: i128;
    let var_198: i64;
    let mut var_a8: *mut c_void;
    
    if var_170 != 2
    {
        let r14_1: *mut c_void = var_178;
        let var_b8_1: *mut c_void = r14_1;
        let var_b0_1: i8 = var_170;
        var_178 = 0;
        let mut rax_2: *mut i8;
        let mut rdx_1: u64;
        rax_2 = core::char::methods::encode_utf8_raw::hdf17d5a6360402f0(0x2f, &var_178);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_1a8, 
            rax_2, rdx_1);
        let var_d8_1: i64 = var_198;
        let mut var_e8: i128 = var_1a8;
        let mut var_130: *mut c_void = r14_1;
        let var_128_1: i8 = var_170;
        
        loop
        {
            _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd1fca99f815234c7(&var_a8, &var_130);
            
            if (var_a8 & 1) == 0
            {
                break;
            }
            
            let mut var_a0: ();
            core::result::Result$LT$T$C$E$GT$::unwrap::hba970de74e19c7dd(&var_1a8, &var_a0);
            let mut var_48: ();
            std::fs::DirEntry::file_name::h4f3d172d3b241ae5(&var_48, &var_1a8);
            std::sys::os_str::bytes::Buf::into_string::hf77169149873388a(&var_178, &var_48);
            let mut var_160: fn(arg1: *mut c_void, arg2: *mut i64) -> i64;
            let var_f0_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = var_160;
            let mut var_100_1: *mut i8 = var_170;
            let mut var_108: *mut c_void = var_178;
            let mut var_120: i128;
            core::result::Result$LT$T$C$E$GT$::unwrap::h3006b5d3fd273ad5(&var_120, &var_108);
            let result_1: *mut i64 = result;
            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h77988a4d3811dfe3(&var_1a8);
            let mut var_c0: *mut c_void = arg2;
            var_1a8 = &var_c0;
            *var_1a8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49740bff2e11fb82;
            let var_198_1: *mut i128 = &var_e8;
            let var_190_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            let var_188_1: *mut i128 = &var_120;
            let var_180_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_178 = &data_46b258;
            var_170 = 3;
            let var_158_1: i64 = 0;
            let var_168_1: *mut i128 = &var_1a8;
            var_160 = 3;
            let mut var_78: i128;
            core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_78, &var_178);
            var_108 = var_78;
            let var_68: u64;
            var_100_1 = var_68;
            result = 1;
            
            if std::path::Path::is_dir::hfde9fd88058448dc(var_100_1, var_68) == 0
            {
                if std::path::Path::is_file::hc0b8b22daf7f62b5(var_100_1, var_68) != 0
                {
                    let var_110: i64;
                    let var_198_3: i64 = var_110;
                    var_1a8 = var_120;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hfb5dc137b94b4742(&var_148, &var_1a8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                        &var_108);
                    result = result_1;
                    continue;
                }
            }
            else
            {
                var_178 = &var_e8;
                var_170 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                let var_168_2: *mut i128 = &var_120;
                var_160 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                var_1a8 = &data_450610;
                *var_1a8[8] = 2;
                let var_188_2: i64 = 0;
                let var_198_2: *const *mut c_void = &var_178;
                let var_190_2: i64 = 2;
                let mut var_60: ();
                core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_60, &var_1a8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hfb5dc137b94b4742(&var_148, &var_60);
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_108);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_120);
            result = result_1;
        }
        
        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::he13ccf2b86a03b58(&var_130);
        result[3] = var_138;
        *result.byte_offset(8) = var_148;
        *result = 0;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_e8);
    }
    else
    {
        var_a8 = var_178;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(
            &var_1a8, &var_a8, rdx);
        result[3] = var_198;
        *result.byte_offset(8) = var_1a8;
        *result = 1;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_a8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h361f2a090008fd41(&var_148);
    }
    result
}
