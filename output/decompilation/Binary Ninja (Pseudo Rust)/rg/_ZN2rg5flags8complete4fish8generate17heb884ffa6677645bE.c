
  fn rg::flags::complete::fish::generate::heb884ffa6677645b(arg1: *mut i128) -> i64

{
    let mut var_f0: i64 = 0;
    let var_e8: i64 = 1;
    let result: i64 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, "# Usage: __rg_contains_opt LONG …", "-s  -r -f -a ' -r -f -a '(rg --t…");
    alloc::string::String::push::h0ede46164189e411(&var_f0, 0xa);
    
    for let mut i: i64 = 0; i != 0x680; i += 0x10
    {
        let rbx_1: i64 = *(i + &data_7e9308);
        let r13_1: *mut c_void = *(i + &data_7e9310);
        let rax_1: i64 = *r13_1.byte_offset(0x28);
        let mut rax_2: i8;
        let mut rdx_1: u64;
        rax_2 = rax_1(rbx_1);
        let mut var_158: i128;
        let mut var_148: *mut *mut u32;
        let mut var_138: i128;
        let mut var_128: *mut *mut u32;
        let mut var_d8: i128;
        let mut var_c8_1: *mut *mut u32;
        let mut var_98: *mut u32;
        let mut var_90: fn(arg1: *mut i32, arg2: *mut i64) -> i64;
        let mut var_80: u32;
        let mut zmm0_2: i128;
        
        if (rax_2 & 1) == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_138, 1, 0);
            var_c8_1 = var_128;
            zmm0_2 = var_138;
            var_d8 = zmm0_2;
        }
        else
        {
            var_80 = rdx_1;
            var_98 = &var_80;
            var_90 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            var_138 = &data_7e9988;
            *var_138[8] = 1;
            let var_118_1: i64 = 0;
            var_128 = &var_98;
            let var_120_1: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_158, 0, rdx_1, 
                &var_138);
            zmm0_2 = var_158;
            var_d8 = zmm0_2;
            var_c8_1 = var_148;
        }
        
        let mut rax_6: *mut i8;
        let mut rdx_2: *mut c_void;
        rax_6 = (*r13_1.byte_offset(0x30))(rbx_1, zmm0_2);
        let mut rax_7: i64;
        let mut rdx_3: i64;
        rax_7 = (*r13_1.byte_offset(0x58))(rbx_1);
        let mut var_48: ();
        alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_48, rax_7, rdx_3, 
            "' -r -f\'complete -c rg !SHORT! …", 1, "\'complete -c rg !SHORT! -l !LON…", 2);
        alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_138, 
            "complete -c rg !SHORT! -l !LONG!…", 0x2b, "!SHORT!!LONG!!DOC!complete -c rg…", 7, 
            *var_d8[8], var_c8_1);
        alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_158, *var_138[8], 
            var_128, "!LONG!!DOC!complete -c rg -l !NE…", 6, rax_6, rdx_2);
        let mut var_108: ();
        let var_40: *mut i8;
        let var_38: *mut c_void;
        alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_108, *var_158[8], 
            var_148, "!DOC!complete -c rg -l !NEGATED!…", 5, var_40, var_38);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_158);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_138);
        
        match (*r13_1.byte_offset(0x70))(rbx_1)
        {
            0 =>
            {
                let rbp_1: i64 = *r13_1.byte_offset(0x68);
                
                if rbp_1(rbx_1, " -r -F' -r -f\'complete -c rg !S…", 
                    "' -r -f\'complete -c rg !SHORT! …", &jump_table_462cec) == 0
                {
                    if (*r13_1.byte_offset(0x20))(rbx_1) == 0
                    {
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, " -r -f\'complete -c rg !SHORT! -…", 
                            "\'complete -c rg !SHORT! -l !LON…");
                    }
                }
                else
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, " -r -f -a ' -r -f -a '(rg --type…", 
                        " -r -f -a '(rg --type-list | str…");
                    let mut rax_13: i64;
                    let mut rdx_8: i64;
                    rax_13 = rbp_1(rbx_1);
                    alloc::str::join_generic_copy::hccb370bfa740ad62(&var_138, rax_13, rdx_8, 
                        " \n        !FLAG!)\n          CO…", 1);
                    var_148 = var_128;
                    var_158 = var_138;
                    let rsi_6: i64 = *var_158[8];
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, rsi_6, var_128.byte_offset(rsi_6));
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(
                        &var_158);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, "' -r -f\'complete -c rg !SHORT! …", 
                        " -r -f\'complete -c rg !SHORT! -…");
                }
            }
            1 =>
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, " -r -F' -r -f\'complete -c rg !S…", "' -r -f\'complete -c rg !SHORT! …");
            }
            2 =>
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, " -r -f -a '(__fish_complete_comm…", " -r -F' -r -f\'complete -c rg !S…");
            }
            3 =>
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, " -r -f -a '(rg --type-list | str…", " -r -f -a '(__fish_complete_comm…");
            }
            4 =>
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, " -r -f -a ' -r -f -a '(rg --type…", " -r -f -a '(rg --type-list | str…");
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, "# This is impossible to read, bu…", "--<PATTERN> <PATH>...\n        !…");
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, "' -r -f\'complete -c rg !SHORT! …", " -r -f\'complete -c rg !SHORT! -…");
            }
        }
        
        alloc::string::String::push::h0ede46164189e411(&var_108, 0xa);
        let var_100: i64;
        let var_f8: i64;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, var_100, var_f8 + var_100);
        let mut rax_14: *mut i8;
        let mut rdx_13: *mut c_void;
        rax_14 = (*r13_1.byte_offset(0x40))(rbx_1);
        
        if rax_14 != 0
        {
            let mut rax_15: i8;
            let mut rdx_14: i8;
            rax_15 = rax_1(rbx_1);
            
            if (rax_15 & 1) == 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_138, 1, 0);
            }
            else
            {
                var_158 = 0;
                let mut rax_16: *mut i8;
                let mut rdx_15: u64;
                rax_16 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rdx_14, &var_158);
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_138, rax_16, rdx_15);
            }
            
            let mut var_b8: i128 = var_138;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_138, 
                "complete -c rg -l !NEGATED! -n '…", 0x4d, "!NEGATED!\nusing namespace Syste…", 9, 
                rax_14, rdx_13);
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_158, *var_138[8], 
                var_128, "!SHORT!!LONG!!DOC!complete -c rg…", 7, *var_b8[8], var_128);
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_98, *var_158[8], 
                var_148, "!LONG!!DOC!complete -c rg -l !NE…", 6, rax_6, rdx_2);
            let var_88: i64;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_80, var_90, var_88, 
                "!DOC!complete -c rg -l !NEGATED!…", 5, var_40, var_38);
            let var_78: i64;
            let var_70: i64;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, var_78, var_70 + var_78);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_80);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_98);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_158);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_138);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_b8);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_108);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_48);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_d8);
    }
    
    arg1[1] = result;
    *arg1 = var_f0;
    result
}
