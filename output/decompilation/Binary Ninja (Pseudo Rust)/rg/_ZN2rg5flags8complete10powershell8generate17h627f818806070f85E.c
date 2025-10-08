
  fn rg::flags::complete::powershell::generate::h627f818806070f85(arg1: *mut i128) -> i64

{
    let mut var_f0: i64 = 0;
    let var_e8: *mut i8 = 1;
    let var_e0: *mut c_void = nullptr;
    let mut var_60: *mut i64 = &data_7e9308;
    let var_58: *mut *mut [i8; 0xb8] = &data_7e9988;
    let var_50: i64 = 0;
    let mut rax: i64;
    let mut i_2: *mut i64;
    rax = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4d69f2644738cbfc(&var_60);
    let mut rbx: *mut i8;
    let mut r14: *mut c_void;
    
    if i_2 == 0
    {
        rbx = 1;
        r14 = nullptr;
    }
    else
    {
        let mut rbp_1: i64 = rax;
        let mut i_1: *mut i64 = i_2;
        let mut i: *mut i64;
        
        do
        {
            let mut rax_3: i64;
            let mut rdx: i64;
            rax_3 = (*(i_1[1] + 0x58))(*i_1);
            let mut var_48: ();
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_48, rax_3, rdx, 
                "' -r -f\'complete -c rg !SHORT! …", 1, "''[CompletionResult]::new('!DASH…", 2);
            let mut rax_5: *mut *mut i64;
            let mut rdx_1: u64;
            rax_5 = (*(i_1[1] + 0x30))(*i_1);
            let mut var_120: *mut *mut i64 = rax_5;
            let mut var_108: *mut i64 = &var_120;
            let var_100_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
            let mut var_d8: *mut *mut [i8; 0xc1] = &data_7e5ee8;
            let var_d0_1: i64 = 1;
            let var_b8_1: i64 = 0;
            let var_c8_1: *mut *mut i64 = &var_108;
            let var_c0_1: i64 = 1;
            let mut var_138: i128;
            core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_138, 0, rdx_1, 
                &var_d8);
            let mut var_88: i128 = var_138;
            let mut rax_8: *mut i8;
            let mut rdx_2: *mut c_void;
            rax_8 = (*(i_1[1] + 0x30))(*i_1);
            
            if rbp_1 != 0
            {
                alloc::string::String::push::h0ede46164189e411(&var_f0, 0xa);
            }
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, "      \n      !FLAGS!''[Completi…", "\n      !FLAGS!''[CompletionResu…");
            let var_128: *mut c_void;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_d8, 
                "[CompletionResult]::new('!DASH_N…", 0x60, "!DASH_NAME!!NAME!#compdef rg\n\n…", 
                0xb, *var_88[8], var_128);
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_138, var_d0_1, 
                var_c8_1, "!NAME!#compdef rg\n\n##\n# zsh c…", 6, rax_8, rdx_2);
            let var_40: *mut i8;
            let var_38: *mut c_void;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_120, *var_138[8], 
                var_128, "!DOC!complete -c rg -l !NEGATED!…", 5, var_40, var_38);
            let var_110: *mut c_void;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, rdx_1, var_110.byte_offset(rdx_1));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_120);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_138);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_d8);
            let mut rax_11: i8;
            let mut rdx_7: u64;
            rax_11 = (*(i_1[1] + 0x28))(*i_1);
            let mut var_a8: i128;
            
            if (rax_11 & 1) != 0
            {
                let r15_2: u32 = rdx_7;
                var_108 = r15_2;
                var_120 = &var_108;
                let var_118_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                    _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                var_d8 = &data_7e5ef8;
                let var_d0_2: i64 = 1;
                let var_b8_2: i64 = 0;
                let var_c8_2: *mut *mut *mut i64 = &var_120;
                let var_c0_2: i64 = 1;
                core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_138, 0, rdx_7, 
                    &var_d8);
                var_a8 = var_138;
                var_138 = 0;
                let mut rax_13: *mut i8;
                let mut rdx_8: u64;
                rax_13 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(r15_2, &var_138);
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_d8, rax_13, rdx_8);
                var_108 = var_d8;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, "\n      !FLAGS!''[CompletionResu…", "!FLAGS!''[CompletionResult]::new…");
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_d8, 
                    "[CompletionResult]::new('!DASH_N…", 0x60, "!DASH_NAME!!NAME!#compdef rg\n\n…", 
                    0xb, *var_a8[8], var_128);
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_138, var_d0_2, 
                    var_c8_2, "!NAME!#compdef rg\n\n##\n# zsh c…", 6, var_100_1, var_c8_2);
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_120, 
                    *var_138[8], var_128, "!DOC!complete -c rg -l !NEGATED!…", 5, var_40, var_38);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, var_118_2, var_110.byte_offset(var_118_2));
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_120);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_138);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_d8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_108);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_a8);
            }
            
            let mut rax_18: i64;
            let mut rdx_13: u64;
            rax_18 = (*(i_1[1] + 0x40))(*i_1);
            
            if rax_18 != 0
            {
                var_a8 = rax_18;
                *var_a8[8] = rdx_13;
                var_120 = &var_a8;
                let var_118_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
                var_d8 = &data_7e5ee8;
                let var_d0_3: i64 = 1;
                let var_b8_3: i64 = 0;
                let var_c8_3: *mut *mut *mut i64 = &var_120;
                let var_c0_3: i64 = 1;
                core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_138, 0, rdx_13, 
                    &var_d8);
                var_108 = var_138;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, "\n      !FLAGS!''[CompletionResu…", "!FLAGS!''[CompletionResult]::new…");
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_d8, 
                    "[CompletionResult]::new('!DASH_N…", 0x60, "!DASH_NAME!!NAME!#compdef rg\n\n…", 
                    0xb, var_100_1, var_128);
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_138, var_d0_3, 
                    var_c8_3, "!NAME!#compdef rg\n\n##\n# zsh c…", 6, var_a8, *var_a8[8]);
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_120, 
                    *var_138[8], var_128, "!DOC!complete -c rg -l !NEGATED!…", 5, var_40, var_38);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, var_118_3, var_110.byte_offset(var_118_3));
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_120);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_138);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_d8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_108);
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_88);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_48);
            let mut rax_1: i64;
            rax_1 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4d69f2644738cbfc(&var_60);
            rbp_1 = rax_1;
            i_1 = i;
        } while i != 0;
        rbx = var_e8;
        r14 = var_e0;
    }
    
    let mut rax_22: i64;
    let mut rdx_18: i64;
    rax_22 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h7f68c1791d2d143b(
        "\nusing namespace System.Managem…", 0x334);
    alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(arg1, rax_22, rdx_18, 
        "!FLAGS!''[CompletionResult]::new…", 7, rbx, r14);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_f0)
}
