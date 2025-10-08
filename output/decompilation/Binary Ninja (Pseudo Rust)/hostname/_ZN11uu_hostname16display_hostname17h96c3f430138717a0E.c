
  fn uu_hostname::display_hostname::h96c3f430138717a0(arg1: *mut c_void) -> i64

{
    let mut var_168: i128;
    hostname::get::ha3f027e3ef97b427(&var_168);
    let mut var_f8: *mut i8;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h1c55b45e55de881a(&var_f8, &var_168);
    let r13: *mut i8 = var_f8;
    let result_1: i64;
    let mut result: i64 = result_1;
    
    if -(r13) != -0x8000000000000000
    {
        let mut var_138: *mut i8;
        let mut var_e8: u64;
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_138, result, var_e8);
        let var_128: u64;
        let mut var_108_1: u64;
        let mut zmm0_1: i128;
        
        if var_138 != -0x8000000000000000
        {
            var_108_1 = var_128;
            zmm0_1 = var_138;
        }
        else
        {
            let var_130: i64;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h14a7025f3dc449c1(&var_168, var_130, var_128);
            let var_158: u64;
            var_108_1 = var_158;
            zmm0_1 = var_168;
        }
        
        let mut var_118: i128 = zmm0_1;
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h4b826df55abf9945(r13, result);
        let mut var_148: i128;
        let mut var_c8: i128;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg1, "ip-addressshort(uutils coreutils…", 0xa) == 0
        {
            let rax_8: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg1, "short(uutils coreutils) 0.0.30Di…", 5);
            let mut rax_9: i8;
            
            if rax_8 == 0
            {
                rax_9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, "domainip-addressshort(uutils cor…", 6);
            }
            
            let mut rax_11: u64;
            let mut rdx_5: i32;
            let mut r12_1: *mut i8;
            
            if rax_8 != 0 || rax_9 != 0
            {
                r12_1 = *var_118[8];
                var_f8 = r12_1;
                let var_f0: *mut c_void = &r12_1[var_108_1];
                let var_e8_1: i64 = 0;
                rax_11 =
                    core::iter::traits::iterator::Iterator::try_fold::h919dc52ff59a6172(&var_f8);
            }
            
            if (rax_8 != 0 || rax_9 != 0) && rdx_5 != 0x110000
            {
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, "short(uutils coreutils) 0.0.30Di…", 5) == 0
                {
                    let mut rax_16: *mut i8;
                    let mut rdx_11: i64;
                    rax_16 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rax_11 + 1, r12_1, var_108_1);
                    
                    if rax_16 == 0
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(r12_1, var_108_1, 
                            rax_11 + 1, var_108_1);
                        /* no return */
                    }
                    
                    var_138 = rax_16;
                    let var_130_3: i64 = rdx_11;
                    var_c8 = &var_138;
                    *var_c8[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h697216bb6a2ad5bf;
                    var_168 = &data_4e4e10;
                    *var_168[8] = 2;
                    var_148 = 0;
                    let var_158_5: *mut i128 = &var_c8;
                    let var_150_4: i64 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                }
                else
                {
                    let mut rax_13: *mut i8;
                    let mut rdx_7: i64;
                    rax_13 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_11, r12_1, var_108_1);
                    
                    if rax_13 == 0
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(r12_1, var_108_1, 0, rax_11);
                        /* no return */
                    }
                    
                    var_138 = rax_13;
                    let var_130_2: i64 = rdx_7;
                    var_c8 = &var_138;
                    *var_c8[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h697216bb6a2ad5bf;
                    var_168 = &data_4e4e10;
                    *var_168[8] = 2;
                    var_148 = 0;
                    let var_158_4: *mut i128 = &var_c8;
                    let var_150_3: i64 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                }
            }
            else
            {
                var_f8 = &var_118;
                let var_f0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_168 = &data_4e4e10;
                *var_168[8] = 2;
                var_148 = 0;
                let var_158_3: *mut *mut i8 = &var_f8;
                let var_150_2: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_168);
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8a91b91ddb9d04cb(&var_118);
            return 0;
        }
        
        var_168 = var_118;
        _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_138, &var_168);
        _$LT$alloc..string..String$u20$as$u20$std..net..socket_addr..ToSocketAddrs$GT$::to_socket_addrs::h57494fe534eec1e8(&var_168, &var_138);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h1f910f49881b969d(&var_f8, &var_168);
        let rcx_1: *mut i8 = var_f8;
        result = result_1;
        
        if rcx_1 != 0
        {
            let result_2: i64 = result;
            let var_68_1: u64 = var_e8;
            let var_e0: i64;
            let var_60_1: i64 = var_e0;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8a91b91ddb9d04cb(&var_138);
            _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h679af16c9089d8ad(&var_168);
            let var_d8_1: i128 = var_148;
            var_e8 = var_108_1;
            var_f8 = var_168;
            let mut var_a8: i64 = 0;
            let var_a0_1: *mut i8 = 1;
            let var_98_1: i64 = 0;
            let var_b8_1: i128 = var_68_1;
            var_c8 = rcx_1;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdfed057ebce2412b(&var_138, &var_c8);
            
            if var_138 != 2
            {
                do
                {
                    let mut var_58: i128 = var_138;
                    
                    if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h14b7d5da9cfbe789(
                        &var_f8, &var_58) == 0
                    {
                        let mut var_90: ();
                        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h4dd1289700a9e6d0(&var_90, &var_58);
                        let var_88: i64;
                        let mut r12_2: i64 = var_88;
                        let var_80: i64;
                        let mut r13_2: i64 = var_80;
                        
                        if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hc6feca6b8f467f93(
                            r12_2, r13_2) != 0
                        {
                            alloc::string::String::truncate::h4c9243e558c5f483(&var_90, r13_2 - 2);
                            r12_2 = var_88;
                            r13_2 = var_80;
                        }
                        
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf4a69d682100b231(&var_a8, r12_2, r13_2 + r12_2);
                        alloc::string::String::push::h0ede46164189e411(&var_a8, 0x20);
                        let mut var_158_1: u64;
                        var_158_1 = var_128;
                        var_168 = var_58;
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h56384bc65538b181(
                            &var_f8, &var_168);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8a91b91ddb9d04cb(
                            &var_90);
                    }
                    
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdfed057ebce2412b(&var_138, &var_c8);
                } while var_138 != 2;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$core..net..socket_addr..SocketAddr$GT$$GT$::hcbf3a8debdbfebd2(&var_c8);
            
            if var_98_1 != 0
            {
                let mut rax_7: *mut i8;
                let mut rdx_4: i64;
                rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(var_98_1 - 1, var_a0_1, var_98_1);
                
                if rax_7 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(var_a0_1, var_98_1, 0, 
                        var_98_1 - 1);
                    /* no return */
                }
                
                var_138 = rax_7;
                let var_130_1: i64 = rdx_4;
                var_c8 = &var_138;
                *var_c8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h697216bb6a2ad5bf;
                var_168 = &data_4e4e10;
                *var_168[8] = 2;
                var_148 = 0;
                let var_158_2: *mut i128 = &var_c8;
                let var_150_1: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_168);
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8a91b91ddb9d04cb(&var_a8);
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$core..net..socket_addr..SocketAddr$GT$$GT$::hb4c4fbe108a3098a(var_f8, result_1);
            return 0;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8a91b91ddb9d04cb(&var_138);
    }
    
    result
}
