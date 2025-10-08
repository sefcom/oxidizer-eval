
  fn rg::flags::complete::bash::generate::h0c2749dd62c68378(arg1: *mut i128) -> i64

{
    let mut var_a0: i64 = 0;
    let var_98: *mut i8 = 1;
    let var_90: *mut c_void = nullptr;
    
    for let mut i: i64 = 0; i != 0x680; i += 0x10
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_a0, "--<PATTERN> <PATH>...\n        !…", "<PATTERN> <PATH>...\n        !FL…");
        let r12_1: i64 = *(i + &data_7e9308);
        let r13_1: i64 = *(i + &data_7e9310);
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 = (*(r13_1 + 0x30))(r12_1);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_a0, rax_1, rdx_1 + rax_1);
        alloc::string::String::push::h0ede46164189e411(&var_a0, 0x20);
        let mut rax_2: i8;
        let mut rdx_3: i8;
        rax_2 = (*(r13_1 + 0x28))(r12_1);
        
        if (rax_2 & 1) != 0
        {
            alloc::string::String::push::h0ede46164189e411(&var_a0, 0x2d);
            alloc::string::String::push::h0ede46164189e411(&var_a0, rdx_3);
            alloc::string::String::push::h0ede46164189e411(&var_a0, 0x20);
        }
        
        let mut rax_3: i64;
        let mut rdx_4: i64;
        rax_3 = (*(r13_1 + 0x40))(r12_1);
        
        if rax_3 != 0
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_a0, "--<PATTERN> <PATH>...\n        !…", "<PATTERN> <PATH>...\n        !FL…");
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_a0, rax_3, rdx_4 + rax_3);
            alloc::string::String::push::h0ede46164189e411(&var_a0, 0x20);
        }
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_a0, "<PATTERN> <PATH>...\n        !FL…", "\n        !FLAG!)\n          COM…");
    let mut var_b8: i64 = 0;
    let var_b0: *mut i8 = 1;
    let var_a8: *mut c_void = nullptr;
    let mut var_128: *mut u32;
    let mut var_120_1: *mut i8;
    let mut var_118: *mut *mut i64;
    let mut var_108: i128;
    let mut var_f8: *mut *mut i64;
    let mut var_e8: i128;
    let mut var_d8: *mut *mut i64;
    
    for let mut i_1: i64 = 0; i_1 != 0x680; i_1 += 0x10
    {
        let r13_4: i64 = *(i_1 + &data_7e9308);
        let r12_3: *mut c_void = *(i_1 + &data_7e9310);
        let rbx: i64 = *r12_3.byte_offset(0x68);
        let mut var_58: i128;
        let mut var_48: *mut *mut i64;
        
        if rbx(r13_4) == 0
        {
            let mut rax_7: i64;
            let mut rdx_9: u64;
            rax_7 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h6abe8100f4b9b9b1(
                "\n        !FLAG!)\n          COM…", 0x5e);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_e8, rax_7, rdx_9);
            var_48 = var_d8;
            var_58 = var_e8;
        }
        else
        {
            let mut rax_4: i64;
            let mut rdx_7: i64;
            rax_4 = rbx(r13_4);
            alloc::str::join_generic_copy::hccb370bfa740ad62(&var_e8, rax_4, rdx_7, 
                " \n        !FLAG!)\n          CO…", 1);
            var_f8 = var_d8;
            var_108 = var_e8;
            let mut rax_6: i64;
            let mut rdx_8: i64;
            rax_6 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h6abe8100f4b9b9b1(
                "\n        !FLAG!)\n          COM…", 0x6d);
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_58, rax_6, rdx_8, 
                "!CHOICES!!FLAG!# Usage: __rg_con…", 9, *var_108[8], var_f8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_108);
        }
        
        let mut rax_9: *mut u32;
        let mut rdx_10: *mut i8;
        rax_9 = (*r12_3.byte_offset(0x30))(r13_4);
        var_128 = rax_9;
        var_120_1 = rdx_10;
        let mut var_88: *mut i64 = &var_128;
        let var_80_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
        var_e8 = &data_7e5ee8;
        *var_e8[8] = 1;
        let var_c8_1: i64 = 0;
        var_d8 = &var_88;
        let var_d0_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_108, 0, rdx_10, &var_e8);
        var_88 = var_108;
        let var_78_1: *mut *mut i64 = var_f8;
        let rbx_1: i64 = *var_58[8];
        alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_e8, rbx_1, var_48, 
            "!FLAG!# Usage: __rg_contains_opt…", 6, var_80_1, var_f8);
        let rsi_8: i64 = *var_e8[8];
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_b8, rsi_8, var_d8.byte_offset(rsi_8));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_e8);
        let mut rax_11: i8;
        let mut rdx_14: u64;
        rax_11 = (*r12_3.byte_offset(0x28))(r13_4);
        let mut var_68: u32;
        
        if (rax_11 & 1) != 0
        {
            var_68 = rdx_14;
            var_128 = &var_68;
            var_120_1 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            var_e8 = &data_7e5ef8;
            *var_e8[8] = 1;
            let var_c8_2: i64 = 0;
            var_d8 = &var_128;
            let var_d0_2: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_108, 0, rdx_14, 
                &var_e8);
            var_128 = var_108;
            var_118 = var_f8;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_e8, rbx_1, var_48, 
                "!FLAG!# Usage: __rg_contains_opt…", 6, var_120_1, var_f8);
            let rsi_10: i64 = *var_e8[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_b8, rsi_10, var_d8.byte_offset(rsi_10));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_128);
        }
        
        let mut rax_14: i64;
        let mut rdx_18: u64;
        rax_14 = (*r12_3.byte_offset(0x40))(r13_4);
        
        if rax_14 != 0
        {
            var_68 = rax_14;
            let var_60_1: u64 = rdx_18;
            var_128 = &var_68;
            var_120_1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
            var_e8 = &data_7e5ee8;
            *var_e8[8] = 1;
            let var_c8_3: i64 = 0;
            var_d8 = &var_128;
            let var_d0_3: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_108, 0, rdx_18, 
                &var_e8);
            var_128 = var_108;
            var_118 = var_f8;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_e8, rbx_1, var_48, 
                "!FLAG!# Usage: __rg_contains_opt…", 6, var_120_1, var_f8);
            let rsi_12: i64 = *var_e8[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_b8, rsi_12, var_d8.byte_offset(rsi_12));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_128);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_88);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_58);
    }
    
    alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_108, 
        "\n_rg() {\n  local i cur prev op…", 0x279, "!OPTS!!CASES!!CHOICES!!FLAG!# Us…", 6, var_98, 
        var_90);
    alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_128, *var_108[8], var_f8, 
        "!CASES!!CHOICES!!FLAG!# Usage: _…", 7, var_b0, var_a8);
    let mut rax_18: i64;
    let mut rdx_23: u64;
    rax_18 =
        core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h7f68c1791d2d143b(var_120_1, var_118);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_e8, rax_18, rdx_23);
    arg1[1] = var_d8;
    *arg1 = var_e8;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_128);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_108);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_b8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_a0)
}
