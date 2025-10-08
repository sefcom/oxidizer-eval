
  fn just::subcommand::Subcommand::list_module::print_doc_and_aliases::h31cf26e1a0d23f3b(arg1: *mut c_void, arg2: i64, arg3: u64, arg4: *mut i8, arg5: i64, arg6: i64, arg7: i64, arg8: *mut c_void, arg9: i64) -> *mut c_void

{
    let mut var_14a: i8;
    just::color::Color::stdout::h99dee7c87aa8c485(&var_14a, arg1.byte_offset(0x184));
    let rdx: i8 = *arg1.byte_offset(0x1a6);
    let mut var_128: *const i8;
    let mut var_110: i128;
    
    if arg4 != 0 || (arg6 != 0 & rdx != 2) != 0
    {
        let var_139: i8;
        let rcx_1: u32 = var_139;
        let mut rax_1: i32 = 4;
        
        if rcx_1 != 0 && (rcx_1 != 1 || var_14a == 0)
        {
            rax_1 = 0xa;
        }
        
        let var_1a0_1: i64 = 0;
        let var_198_1: i32 = rax_1;
        let var_194_1: i32 = 0xa;
        let mut var_1b8: *const *const i8 = -0x8000000000000000;
        let var_1b0_1: *const i8 = "#/rustc/bf64d66bd58719fac2585eae…";
        let var_1a8_1: i64 = 1;
        let rax_2: *mut i64 =
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h3ce94925646e0fd0(arg8, 
            arg9, arg2, arg3);
        
        if rax_2 == 0
        {
            core::option::expect_failed::h3f620cfb8545dc61("no entry found for keyattempted …");
            /* no return */
        }
        
        let mut rcx_3: i64 = 0;
        
        if arg7 >= *rax_2
        {
            rcx_3 = arg7 - *rax_2;
        }
        
        if rcx_3 + 1 > 0xffff
        {
            var_128 = &data_82ce08;
            let var_120_5: i64 = 1;
            let var_118_5: i64 = 8;
            var_110 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_128);
            /* no return */
        }
        
        var_128 = &data_465db0;
        let var_120_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
        let var_118_1: *mut i64 = &var_1b8;
        var_110 = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
        *var_110[8] = 0;
        let var_100_1: i16 = (rcx_3 + 1);
        let mut var_180: *const i8 = &data_46ca80;
        let mut var_178_1: *mut *mut i8 = 2;
        let mut var_160_1: *mut c_void = &data_471130;
        let var_158_1: i64 = 2;
        let mut var_170_1: *const *const i8 = &var_128;
        let var_168_1: i64 = 3;
        std::io::stdio::_print::h5e446ff973c02de6(&var_180);
        let mut rbx: u64;
        rbx = arg6 != 0;
        core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_1b8);
        let mut var_b0: *mut i8 = &var_14a;
        let r9: i64;
        let var_a8_1: i64 = r9;
        let var_a0_1: i64 = arg6;
        let mut rax_3: *mut c_void;
        rax_3 = rdx == 0;
        
        if (rbx & rax_3) != 0
        {
            just::subcommand::Subcommand::list_module::print_doc_and_aliases::_$u7b$$u7b$closure$u7d$$u7d$::h76086f3aa3ac0be1(&var_b0);
        }
        
        if arg4 != 0
        {
            var_128 = &data_82f150;
            let var_120_2: i64 = 1;
            let mut var_118_2: i64 = 8;
            var_110 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_128);
            let mut var_98: i128;
            regex_automata::meta::regex::Regex::find_iter::h931ca5e862c0d663(&var_98, 
                just::subcommand::backtick_re::h4d3095efc2f63ccc(), arg4);
            let var_48: i128;
            let var_d8_1: i128 = var_48;
            let var_58: i128;
            let var_e8_1: i128 = var_58;
            let zmm0_2: i128 = var_98;
            let var_68: i128;
            let var_f8_1: i128 = var_68;
            let var_78: i128;
            var_110 = var_78;
            let var_88: i128;
            var_118_2 = var_88;
            var_128 = zmm0_2;
            let mut rbx_2: *const *const i8 = nullptr;
            
            loop
            {
                let var_38: *mut i64;
                regex_automata::util::iter::Searcher::advance::h29a3fd55984d9cf2(&var_180, 
                    &*var_110[8], var_38, &var_128);
                
                if var_180 != 1
                {
                    break;
                }
                
                let rbp_1: *const *const i8 = var_170_1;
                let mut rax_6: *mut c_void;
                let mut rdx_7: i64;
                rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbx_2, var_178_1, arg4, arg5);
                
                if rax_6 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(arg4, arg5, rbx_2, var_178_1);
                    /* no return */
                }
                
                let mut var_138: *mut i64;
                
                if rdx_7 != 0
                {
                    let rsi_5: u32 = var_139;
                    let mut rcx_9: i32 = 4;
                    
                    if rsi_5 != 0 && (rsi_5 != 1 || var_14a == 0)
                    {
                        rcx_9 = 0xa;
                    }
                    
                    let var_1a0_2: i64 = 0;
                    let var_198_2: i32 = rcx_9;
                    let var_194_2: i32 = 0xa;
                    var_1b8 = -0x8000000000000000;
                    let var_1b0_2: *mut c_void = rax_6;
                    let var_1a8_2: i64 = rdx_7;
                    var_138 = &var_1b8;
                    let var_130_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                    var_180 = &data_465db0;
                    let var_178_2: i64 = 1;
                    let var_160_2: i64 = 0;
                    let var_170_2: *mut *mut i64 = &var_138;
                    let var_168_2: i64 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_180);
                    core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_1b8);
                }
                
                let rbx_3: i8 = var_14a;
                let mut rax_7: *mut c_void;
                let mut rdx_9: i64;
                rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(var_178_1, rbp_1, arg4, arg5);
                
                if rax_7 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(arg4, arg5, var_178_1, rbp_1);
                    /* no return */
                }
                
                let rsi_7: u32 = var_139;
                let mut rcx_11: i32 = 6;
                
                if rsi_7 != 0 && (rsi_7 == 2 || rbx_3 == 0)
                {
                    rcx_11 = 0xa;
                }
                
                let var_1a0_3: i64 = 0;
                let var_198_3: i32 = rcx_11;
                let var_194_3: i32 = 0xa;
                var_1b8 = -0x8000000000000000;
                let var_1b0_3: *mut c_void = rax_7;
                let var_1a8_3: i64 = rdx_9;
                var_138 = &var_1b8;
                let var_130_2: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                var_180 = &data_465db0;
                var_178_1 = 1;
                var_160_1 = nullptr;
                var_170_1 = &var_138;
                let var_168_3: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_180);
                core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_1b8);
                rbx_2 = rbp_1;
            }
            
            core::ptr::drop_in_place$LT$regex..regex..string..Matches$GT$::h7696592b070cc7e9(
                &var_128);
            let mut rdx_11: i64;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbx_2, arg4, arg5);
            
            if rax_3 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg4, arg5, rbx_2, arg5);
                /* no return */
            }
            
            if rdx_11 != 0
            {
                let rsi_9: u32 = var_139;
                let mut rcx_12: i32 = 4;
                
                if rsi_9 != 0 && (rsi_9 == 2 || var_14a == 0)
                {
                    rcx_12 = 0xa;
                }
                
                let var_168_4: i64 = 0;
                var_160_1 = rcx_12;
                *var_160_1[4] = 0xa;
                var_180 = -0x8000000000000000;
                let var_178_3: *mut c_void = rax_3;
                let var_170_3: i64 = rdx_11;
                var_1b8 = &var_180;
                let var_1b0_4: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                var_128 = &data_465db0;
                let var_120_3: i64 = 1;
                *var_110[8] = 0;
                let var_118_3: *mut *const *const i8 = &var_1b8;
                var_110 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_128);
                core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_180);
            }
        }
        
        rax_3 = arg6 != 0;
        
        if (rax_3 & rdx == 1) != 0
        {
            just::subcommand::Subcommand::list_module::print_doc_and_aliases::_$u7b$$u7b$closure$u7d$$u7d$::h76086f3aa3ac0be1(&var_b0);
        }
    }
    
    var_128 = &data_82dbf8;
    let var_120_4: i64 = 1;
    let var_118_4: i64 = 8;
    var_110 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_128)
}
