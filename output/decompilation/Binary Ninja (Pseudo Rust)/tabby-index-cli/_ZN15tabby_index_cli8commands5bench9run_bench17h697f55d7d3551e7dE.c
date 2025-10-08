
  fn tabby_index_cli::commands::bench::run_bench::h697f55d7d3551e7d(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64) -> i64

{
    let mut var_108: i64 = arg2;
    let var_100: i64 = arg3;
    let mut var_f8: i64 = arg4;
    let var_f0: i64 = arg5;
    let mut var_a8: *mut i64 = &var_108;
    let var_a0: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hbfe63e20f2d6a900;
    let mut var_1b8: *mut *mut [i8; 0x8] = &data_9849d0;
    let var_1b0: i64 = 2;
    let var_198: i64 = 0;
    let var_1a8: *mut *mut i64 = &var_a8;
    let var_1a0: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
    var_a8 = &var_f8;
    let mut var_a0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hbfe63e20f2d6a900;
    var_1b8 = &data_9849f0;
    let var_1b0_1: i64 = 2;
    let mut var_198_1: i64 = 0;
    let var_1a8_1: *mut *mut i64 = &var_a8;
    let mut var_1a0_1: *mut i32 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
    var_1b8 = &data_984a10;
    let var_1b0_2: i64 = 1;
    let mut var_1a8_2: i64 = 8;
    var_1a0_1 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
    let rdx_1: u64 =
        tantivy::index::index::Index::open_in_dir::h5f3e90e10edff988(&var_1b8, var_108);
    let rax: *mut *mut [i8; 0x8] = var_1b8;
    let mut var_2c8: i32;
    let mut var_268: i128;
    let mut var_188: i128;
    
    if rax == -0x7fffffffffffffff
    {
        let mut var_78: i128;
        var_78 = *var_188[8];
        let var_190: i128;
        let var_88: i128 = var_190;
        let var_98_1: i128 = var_1a0_1;
        var_a8 = var_1b0_2;
        tabby_index_cli::commands::bench::run_bench::_$u7b$$u7b$closure$u7d$$u7d$::h26890cbb00140cf5(&var_2c8, &var_a8, rdx_1);
        let result: i64;
        let result_1: i64 = result;
        let zmm0_1: i128 = var_2c8;
        var_268 = zmm0_1;
        arg1[1] = result;
        *arg1 = zmm0_1;
        return result;
    }
    
    let mut var_168: *mut i64;
    let zmm4_1: *mut i64 = var_168;
    let var_88_1: i128 = var_198_1;
    let var_78_1: i128 = var_188;
    let mut var_178: i128;
    let var_68_1: i128 = var_178;
    let var_158: i128;
    let var_48_1: i128 = var_158;
    var_268 = var_1b0_2;
    let mut var_258: *mut i32 = var_1a0_1;
    let var_90_1: *mut i32 = var_258;
    var_a0_1 = var_268;
    var_a8 = rax;
    let rdx_2: u64 = tantivy::index::index::Index::reader::h7031a20a933df984(&var_2c8, &var_a8);
    let mut var_2a8: i128;
    let mut rax_3: i64;
    let mut rcx_2: *mut i32;
    
    if var_2c8 != 0x12
    {
        let var_298: i64;
        var_188 = var_298;
        var_198_1 = var_2a8;
        var_1a8_2 = var_1a0_1;
        var_1b8 = var_2c8;
        tabby_index_cli::commands::bench::run_bench::_$u7b$$u7b$closure$u7d$$u7d$::h53580ebb53d4f4c3(&var_268, &var_1b8, rdx_2);
        let rdx_3: i64 = var_268;
        rax_3 = *var_268[8];
        rcx_2 = var_258;
        
        if rdx_3 == -0x8000000000000000
        {
            goto 'label_672780;
        }
        
        *arg1 = rdx_3;
        *arg1.byte_offset(8) = rax_3;
        arg1[1] = rcx_2;
    }
    else
    {
        let var_2c0: i64;
        rax_3 = var_2c0;
        rcx_2 = var_1a0_1;
        'label_672780:
        let mut var_148: i64 = rax_3;
        let var_140_1: *mut i32 = rcx_2;
        let mut var_270: *mut c_void =
            tantivy::reader::IndexReader::searcher::h4b3b284570bbf106(&var_148);
        core::ptr::drop_in_place$LT$tantivy..reader..IndexReader$GT$::hd5b87e325d8c0232(&var_148);
        let rax_6: *mut *mut [i8; 0x8] =
            tantivy::index::index::Index::schema::he6a02a11604cdee7(&var_a8);
        var_1b8 = rax_6;
        let mut var_e8: i64;
        tabby_index_cli::commands::bench::extract_search_fields::ha1dba1dd03959bbe(&var_e8, rax_6);
        core::ptr::drop_in_place$LT$tantivy..schema..schema..Schema$GT$::he9a2cad772194c13(
            &var_1b8);
        let rdx_5: u64 =
            tabby_index_cli::commands::bench::read_query_file::h3edc6ff9bfedd045(&var_2c8);
        
        if var_2c8 != -0x8000000000000000
        {
            let mut var_1f8: i128 = var_2c8;
            let rax_9: *mut i64 = tantivy::index::index::Index::schema::he6a02a11604cdee7(&var_a8);
            let temp0_1: i64 = *zmm4_1;
            *zmm4_1 += 1;
            
            if temp0_1 <= -1
            {
                trap(6);
            }
            
            let var_1a0_2: *mut i64 = rax_9;
            var_1b8 = var_e8;
            let var_d8: i64;
            let var_1a8_3: i64 = var_d8;
            let var_198_2: *mut i64 = zmm4_1;
            let zmm0_5: i128 = *data_984ad0;
            let var_190_1: i128 = zmm0_5;
            var_188 = data_984ae0;
            var_178 = zmm0_5;
            __builtin_memset(&*var_168[8], 0, 0x11);
            var_2c8 = &data_984a20;
            let var_2c0_1: i64 = 1;
            let var_2b8_1: i64 = 8;
            let var_2b0_1: i128 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_2c8);
            var_2c8 = &data_984a30;
            let var_2c0_2: i64 = 1;
            let mut var_2b8_2: *mut i64 = 8;
            let mut var_2b0_2: i128 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_2c8);
            let mut var_288: i64;
            let mut var_250: fn(arg1: *mut i64) -> u64;
            let mut var_248: i128;
            let var_238: i64;
            let mut var_228: i64;
            let mut var_1c8: i32;
            let mut var_1c0: i64;
            let mut var_d0: *mut i32;
            
            if arg6 != 0
            {
                let mut r13_1: *mut i32 = 0x18;
                
                if var_1a0_1 == 0
                {
                    r13_1 = var_1a0_1;
                }
                
                if var_1a0_1 != 0
                {
                    let mut r12_1: *mut c_void = *var_1f8[8];
                    let mut rcx_6: *mut c_void = r12_1.byte_offset(r13_1);
                    let mut r13_2: *mut c_void = r13_1.byte_offset(-(var_1a0_1 * 0x18));
                    let mut rax_14: i64 = 1;
                    let var_200_1: *mut c_void = r13_2;
                    let var_208_1: *mut c_void = r12_1;
                    let var_1e0_1: *mut c_void = rcx_6;
                    
                    loop
                    {
                        let mut rax_15: *mut c_void = rcx_6;
                        
                        loop
                        {
                            let mut var_1d0: *mut c_void = r12_1;
                            r12_1 = rax_15;
                            tantivy::query::query_parser::query_parser::QueryParser::parse_query::h594bfcbc92a22894(&var_268, &var_1b8);
                            
                            if var_268 != 0x11
                            {
                                let var_298_3: i64 = var_238;
                                let var_2a8_3: i128 = var_248;
                                var_2b8_2 = var_258;
                                var_2c8 = var_268;
                                tabby_index_cli::commands::bench::run_bench::_$u7b$$u7b$closure$u7d$$u7d$::h6907277881e85bfc(&var_1d0);
                                /* no return */
                            }
                            
                            var_228 = var_268;
                            var_288 = 0;
                            let var_280_1: i64 = 8;
                            let var_278_1: i64 = 0;
                            tabby_index_cli::timer::TimerTree::open::h6d5d49cd0241cd55(&var_148, 
                                &var_288, "searchFailed to open index.\nFai…", 6);
                            var_1c8 = tantivy::collector::top_score_collector::TopDocs::with_limit::h66e2bec30a5176f5(0xa);
                            var_1c0 = 0;
                            tantivy::core::searcher::Searcher::search_with_statistics_provider::h6bfdea99ae142cbf(&var_268, &var_270, &var_228, &var_1c8);
                            let mut r15_1: *mut i32;
                            let mut zmm0_8: i128;
                            
                            if var_268 != 0x12
                            {
                                let var_298_2: i64 = var_238;
                                let var_2a8_2: i128 = var_248;
                                var_2b8_2 = var_258;
                                var_2c8 = var_268;
                                tabby_index_cli::commands::bench::run_bench::_$u7b$$u7b$closure$u7d$$u7d$::h96e916ecf92cdef4(&var_d0, &var_1d0, &var_2c8);
                                r15_1 = var_d0;
                                let var_c8: i64;
                                zmm0_8 = var_c8;
                            }
                            else
                            {
                                let rbx_1: i64 = *var_268[8];
                                r15_1 = var_258;
                                
                                if rbx_1 == -0x8000000000000000
                                {
                                    zmm0_8 = var_250;
                                }
                                else
                                {
                                    core::ptr::drop_in_place$LT$tabby_index_cli..timer..OpenTimer$GT$::h3986c7b60ba8ea19(&var_148);
                                    var_d0 = var_248;
                                    var_148 = tabby_index_cli::timer::TimerTree::total_time::hb48ee648170d5c0e(var_280_1, var_278_1);
                                    var_2c8 = &var_1d0;
                                    let var_2c0_3: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he9b99f79c99bb38a;
                                    var_2b8_2 = &var_d0;
                                    var_2b0_2 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                                    var_2a8 = &var_148;
                                    *var_2a8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::h295c63d1dc1e3a33;
                                    var_268 = &data_984a50;
                                    *var_268[8] = 4;
                                    var_248 = 0;
                                    var_258 = &var_2c8;
                                    var_250 = 3;
                                    std::io::stdio::_print::h5e446ff973c02de6(&var_268);
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$f32$C$tantivy..DocAddress$RP$$GT$$GT$::h2e5bb1ddc90b8d76(rbx_1, r15_1);
                                    core::ptr::drop_in_place$LT$tabby_index_cli..timer..TimerTree$GT$::h48cae2b267925bc2(var_288, var_280_1);
                                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$tantivy..query..query..Query$GT$$GT$::h650b378a4cadfa29(&var_228);
                                    r13_2 += 0x18;
                                    rax_15 = r12_1.byte_offset(0x18);
                                    
                                    if r13_2 == 0x18
                                    {
                                        break;
                                    }
                                    
                                    continue;
                                }
                            }
                            
                            *arg1 = r15_1;
                            *arg1.byte_offset(8) = zmm0_8;
                            core::ptr::drop_in_place$LT$tabby_index_cli..timer..OpenTimer$GT$::h3986c7b60ba8ea19(&var_148);
                            core::ptr::drop_in_place$LT$tabby_index_cli..timer..TimerTree$GT$::h48cae2b267925bc2(var_288, var_280_1);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$tantivy..query..query..Query$GT$$GT$::h650b378a4cadfa29(&var_228);
                            goto 'label_673080;
                        }
                        
                        let rdx_7: i64 = rax_14;
                        rax_14 = rdx_7 + 0;
                        r13_2 = var_200_1;
                        r12_1 = var_208_1;
                        rcx_6 = var_1e0_1;
                        
                        if rdx_7 >= arg6
                        {
                            break;
                        }
                    }
                }
            }
            
            var_2c8 = &data_984a40;
            let var_2c0_4: i64 = 1;
            let var_2b8_3: i64 = 8;
            let var_2b0_3: i128 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_2c8);
            var_2c8 = &data_984a90;
            let var_2c0_5: i64 = 1;
            let mut var_2b8_4: *mut i128 = 8;
            let mut var_2b0_4: i128 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_2c8);
            let mut rax_19: *mut i32;
            
            if arg6 != 0
            {
                rax_19 = var_1a0_1;
            }
            
            if arg6 == 0 || rax_19 == 0
            {
                'label_672f42:
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$tantivy..query..query_parser..query_parser..QueryParser$GT$::h9bbbff5ed2464efa(&var_1b8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7054847749bb044b(&var_1f8);
                core::ptr::drop_in_place$LT$tantivy..core..searcher..Searcher$GT$::hfcc0968019ce3a8e(&var_270);
            }
            else
            {
                let mut var_110_1: i64 = 1;
                
                if rax_19 != 0
                {
                    goto 'label_672c92;
                }
                
                loop
                {
                    if var_110_1 >= arg6
                    {
                        goto 'label_672f42;
                    }
                    
                    var_110_1 += 1;
                    rax_19 = var_1a0_1;
                    
                    if rax_19 != 0
                    {
                        'label_672c92:
                        let mut rcx_9: *mut c_void = *var_1f8[8];
                        let rax_21: *mut c_void = rcx_9.byte_offset(rax_19 * 0x18);
                        let mut rax_22: *mut c_void = rcx_9.byte_offset(0x18);
                        'label_672cb0:
                        let mut var_b0: *mut c_void = rcx_9;
                        tantivy::query::query_parser::query_parser::QueryParser::parse_query::h594bfcbc92a22894(&var_2c8, &var_1b8);
                        let mut rax_23: i64;
                        let mut rdx_8: *mut c_void;
                        rax_23 =
                            core::result::Result$LT$T$C$E$GT$::unwrap::ha3b1d50b86f99a01(&var_2c8);
                        var_228 = rax_23;
                        let var_220_1: *mut c_void = rdx_8;
                        var_d0 = tantivy::collector::top_score_collector::TopDocs::with_limit::h66e2bec30a5176f5(0xa);
                        let var_c8_1: i64 = 0;
                        tantivy::core::searcher::Searcher::search_with_statistics_provider::h4e5a5626b3e8ae32(&var_268, &var_270, rax_23, *rdx_8.byte_offset(0x68), &var_d0);
                        
                        if var_268 != 0x12
                        {
                            let var_298_1: i64 = var_238;
                            let var_2a8_1: i128 = var_248;
                            var_2b8_4 = var_258;
                            var_2c8 = var_268;
                            tabby_index_cli::commands::bench::run_bench::_$u7b$$u7b$closure$u7d$$u7d$::hb760bf1a20ed9e2f(&var_148, &var_228, &var_2c8);
                            *arg1 = var_148;
                            let var_138: i64;
                            arg1[1] = var_138;
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$tantivy..query..query..Query$GT$$GT$::h650b378a4cadfa29(&var_228);
                            break;
                        }
                        
                        let rax_25: i64 = *var_268[8];
                        var_288 = 0;
                        let var_280_2: i64 = 8;
                        let var_278_2: i64 = 0;
                        let mut r15_2: i64;
                        r15_2 = 1;
                        tabby_index_cli::timer::TimerTree::open::h6d5d49cd0241cd55(&var_148, 
                            &var_288, "totalsearchFailed to open index.…", 5);
                        var_2c8 = rax_25;
                        let var_2c0_6: *mut i32 = var_258;
                        let var_2b8_5: fn(arg1: *mut i64) -> u64 = var_250;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h62894249a3971a2b(&var_d0, &var_2c8);
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he578e00adb965a17(&var_1c8, &var_d0);
                        
                        if var_1c8 == 1
                        {
                            'label_672de6:
                            tantivy::core::searcher::Searcher::doc::h2010adbd4d783d11(&var_2c8, 
                                var_270, var_1c0, *var_1c0[4]);
                            core::result::Result$LT$T$C$E$GT$::unwrap::he30d7eb29e563670(&var_268, 
                                &var_2c8);
                            core::ptr::drop_in_place$LT$tantivy..schema..document..default_document..CompactDoc$GT$::h53cefbf12d11e499(&var_268);
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he578e00adb965a17(&var_1c8, &var_d0);
                            
                            if (var_1c8 & 1) != 0
                            {
                                goto 'label_672de6;
                            }
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$f32$C$tantivy..DocAddress$RP$$GT$$GT$::h0e2f25bb7069fbbc(&var_d0);
                        core::ptr::drop_in_place$LT$tabby_index_cli..timer..OpenTimer$GT$::h3986c7b60ba8ea19(&var_148);
                        var_148 = tabby_index_cli::timer::TimerTree::total_time::hb48ee648170d5c0e(
                            var_280_2, var_278_2);
                        var_268 = &var_b0;
                        *var_268[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he9b99f79c99bb38a;
                        var_258 = &var_148;
                        var_250 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::h295c63d1dc1e3a33;
                        var_2c8 = &data_984aa0;
                        let var_2c0_7: i64 = 3;
                        var_2a8 = 0;
                        var_2b8_4 = &var_268;
                        var_2b0_4 = 2;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_2c8);
                        core::ptr::drop_in_place$LT$tabby_index_cli..timer..TimerTree$GT$::h48cae2b267925bc2(var_288, var_280_2);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$tantivy..query..query..Query$GT$$GT$::h650b378a4cadfa29(&var_228);
                        rcx_9 = rax_22;
                        rax_22 = rcx_9.byte_offset(0x18);
                        
                        if rcx_9 == rax_21
                        {
                            rax_22 = rcx_9;
                        }
                        
                        if rcx_9 != rax_21
                        {
                            goto 'label_672cb0;
                        }
                    }
                }
                
                'label_673080:
                core::ptr::drop_in_place$LT$tantivy..query..query_parser..query_parser..QueryParser$GT$::h9bbbff5ed2464efa(&var_1b8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7054847749bb044b(&var_1f8);
                core::ptr::drop_in_place$LT$tantivy..core..searcher..Searcher$GT$::hfcc0968019ce3a8e(&var_270);
            }
        }
        else
        {
            tabby_index_cli::commands::bench::run_bench::_$u7b$$u7b$closure$u7d$$u7d$::he48cc1d0a3581e2d(&var_1b8, var_2c0, rdx_5);
            let zmm0_4: i128 = var_1b8;
            var_148 = zmm0_4;
            let var_138_1: i64 = var_1a8_2;
            arg1[1] = var_1a8_2;
            *arg1 = zmm0_4;
            let var_e0: i64;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$tantivy..schema..field..Field$GT$$GT$::he53066fa14e386e1(var_e8, var_e0);
            core::ptr::drop_in_place$LT$tantivy..core..searcher..Searcher$GT$::hfcc0968019ce3a8e(
                &var_270);
        }
    }
    core::ptr::drop_in_place$LT$tantivy..index..index..Index$GT$::hc2911d178059c5dc(&var_a8)
}
