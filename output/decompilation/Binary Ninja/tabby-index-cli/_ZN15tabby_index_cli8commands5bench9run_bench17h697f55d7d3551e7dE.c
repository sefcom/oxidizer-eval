
  int64_t tabby_index_cli::commands::bench::run_bench::h697f55d7d3551e7d(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    int64_t var_108 = arg2;
    int64_t var_100 = arg3;
    int64_t var_f8 = arg4;
    int64_t var_f0 = arg5;
    int64_t* var_a8 = &var_108;
    int64_t (* var_a0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hbfe63e20f2d6a900;
    char const (** const var_1b8)[0x8] = &data_9849d0;
    int64_t var_1b0 = 2;
    int64_t var_198 = 0;
    int64_t** var_1a8 = &var_a8;
    int64_t var_1a0 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
    var_a8 = &var_f8;
    int64_t (* var_a0_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hbfe63e20f2d6a900;
    var_1b8 = &data_9849f0;
    int64_t var_1b0_1 = 2;
    int64_t var_198_1 = 0;
    int64_t** var_1a8_1 = &var_a8;
    int32_t* var_1a0_1 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
    var_1b8 = &data_984a10;
    int64_t var_1b0_2 = 1;
    int64_t var_1a8_2 = 8;
    var_1a0_1 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
    uint64_t rdx_1 =
        tantivy::index::index::Index::open_in_dir::h5f3e90e10edff988(&var_1b8, var_108);
    char const (** const rax)[0x8] = var_1b8;
    int32_t var_2c8;
    int128_t var_268;
    int128_t var_188;
    
    if (rax == -0x7fffffffffffffff)
    {
        int128_t var_78;
        var_78 = *var_188[8];
        int128_t var_190;
        int128_t var_88 = var_190;
        int128_t var_98_1 = var_1a0_1;
        var_a8 = var_1b0_2;
        tabby_index_cli::commands::bench::run_bench::_$u7b$$u7b$closure$u7d$$u7d$::h26890cbb00140cf5(&var_2c8, &var_a8, rdx_1);
        int64_t result;
        int64_t result_1 = result;
        int128_t zmm0_1 = var_2c8;
        var_268 = zmm0_1;
        arg1[1] = result;
        *arg1 = zmm0_1;
        return result;
    }
    
    int64_t* var_168;
    int64_t* zmm4_1 = var_168;
    int128_t var_88_1 = var_198_1;
    int128_t var_78_1 = var_188;
    int128_t var_178;
    int128_t var_68_1 = var_178;
    int128_t var_158;
    int128_t var_48_1 = var_158;
    var_268 = var_1b0_2;
    int32_t* var_258 = var_1a0_1;
    int32_t* var_90_1 = var_258;
    var_a0_1 = var_268;
    var_a8 = rax;
    uint64_t rdx_2 = tantivy::index::index::Index::reader::h7031a20a933df984(&var_2c8, &var_a8);
    int128_t var_2a8;
    int64_t rax_3;
    int32_t* rcx_2;
    
    if (var_2c8 != 0x12)
    {
        int64_t var_298;
        var_188 = var_298;
        var_198_1 = var_2a8;
        var_1a8_2 = var_1a0_1;
        var_1b8 = var_2c8;
        tabby_index_cli::commands::bench::run_bench::_$u7b$$u7b$closure$u7d$$u7d$::h53580ebb53d4f4c3(&var_268, &var_1b8, rdx_2);
        int64_t rdx_3 = var_268;
        rax_3 = *var_268[8];
        rcx_2 = var_258;
        
        if (rdx_3 == -0x8000000000000000)
            goto label_672780;
        
        *arg1 = rdx_3;
        *(arg1 + 8) = rax_3;
        arg1[1] = rcx_2;
    }
    else
    {
        int64_t var_2c0;
        rax_3 = var_2c0;
        rcx_2 = var_1a0_1;
        label_672780:
        int64_t var_148 = rax_3;
        int32_t* var_140_1 = rcx_2;
        void* var_270 = tantivy::reader::IndexReader::searcher::h4b3b284570bbf106(&var_148);
        core::ptr::drop_in_place$LT$tantivy..reader..IndexReader$GT$::hd5b87e325d8c0232(&var_148);
        char const (** rax_6)[0x8] =
            tantivy::index::index::Index::schema::he6a02a11604cdee7(&var_a8);
        var_1b8 = rax_6;
        int64_t var_e8;
        tabby_index_cli::commands::bench::extract_search_fields::ha1dba1dd03959bbe(&var_e8, rax_6);
        core::ptr::drop_in_place$LT$tantivy..schema..schema..Schema$GT$::he9a2cad772194c13(
            &var_1b8);
        uint64_t rdx_5 =
            tabby_index_cli::commands::bench::read_query_file::h3edc6ff9bfedd045(&var_2c8);
        
        if (var_2c8 != -0x8000000000000000)
        {
            int128_t var_1f8 = var_2c8;
            int64_t* rax_9 = tantivy::index::index::Index::schema::he6a02a11604cdee7(&var_a8);
            int64_t temp0_1 = *zmm4_1;
            *zmm4_1 += 1;
            
            if (temp0_1 <= -1)
                trap(6);
            
            int64_t* var_1a0_2 = rax_9;
            var_1b8 = var_e8;
            int64_t var_d8;
            int64_t var_1a8_3 = var_d8;
            int64_t* var_198_2 = zmm4_1;
            int128_t zmm0_5 = *data_984ad0;
            int128_t var_190_1 = zmm0_5;
            var_188 = data_984ae0;
            var_178 = zmm0_5;
            __builtin_memset(&*var_168[8], 0, 0x11);
            var_2c8 = &data_984a20;
            int64_t var_2c0_1 = 1;
            int64_t var_2b8_1 = 8;
            int128_t var_2b0_1 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_2c8);
            var_2c8 = &data_984a30;
            int64_t var_2c0_2 = 1;
            int64_t* var_2b8_2 = 8;
            int128_t var_2b0_2 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_2c8);
            int64_t var_288;
            uint64_t (* var_250)(int64_t* arg1);
            int128_t var_248;
            int64_t var_238;
            int64_t var_228;
            int32_t var_1c8;
            int64_t var_1c0;
            int32_t* var_d0;
            
            if (arg6)
            {
                int32_t* r13_1 = 0x18;
                
                if (!var_1a0_1)
                    r13_1 = var_1a0_1;
                
                if (var_1a0_1)
                {
                    void* r12_1 = *var_1f8[8];
                    void* rcx_6 = r12_1 + r13_1;
                    void* r13_2 = r13_1 - var_1a0_1 * 0x18;
                    int64_t rax_14 = 1;
                    void* var_200_1 = r13_2;
                    void* var_208_1 = r12_1;
                    void* var_1e0_1 = rcx_6;
                    
                    while (true)
                    {
                        void* rax_15 = rcx_6;
                        
                        while (true)
                        {
                            void* var_1d0 = r12_1;
                            r12_1 = rax_15;
                            tantivy::query::query_parser::query_parser::QueryParser::parse_query::h594bfcbc92a22894(&var_268, &var_1b8);
                            
                            if (var_268 != 0x11)
                            {
                                int64_t var_298_3 = var_238;
                                int128_t var_2a8_3 = var_248;
                                var_2b8_2 = var_258;
                                var_2c8 = var_268;
                                tabby_index_cli::commands::bench::run_bench::_$u7b$$u7b$closure$u7d$$u7d$::h6907277881e85bfc(&var_1d0);
                                /* no return */
                            }
                            
                            var_228 = var_268;
                            var_288 = 0;
                            int64_t var_280_1 = 8;
                            int64_t var_278_1 = 0;
                            tabby_index_cli::timer::TimerTree::open::h6d5d49cd0241cd55(&var_148, 
                                &var_288, "searchFailed to open index.\nFai…", 6);
                            var_1c8 = tantivy::collector::top_score_collector::TopDocs::with_limit::h66e2bec30a5176f5(0xa);
                            var_1c0 = 0;
                            tantivy::core::searcher::Searcher::search_with_statistics_provider::h6bfdea99ae142cbf(&var_268, &var_270, &var_228, &var_1c8);
                            int32_t* r15_1;
                            int128_t zmm0_8;
                            
                            if (var_268 != 0x12)
                            {
                                int64_t var_298_2 = var_238;
                                int128_t var_2a8_2 = var_248;
                                var_2b8_2 = var_258;
                                var_2c8 = var_268;
                                tabby_index_cli::commands::bench::run_bench::_$u7b$$u7b$closure$u7d$$u7d$::h96e916ecf92cdef4(&var_d0, &var_1d0, &var_2c8);
                                r15_1 = var_d0;
                                int64_t var_c8;
                                zmm0_8 = var_c8;
                            }
                            else
                            {
                                int64_t rbx_1 = *var_268[8];
                                r15_1 = var_258;
                                
                                if (rbx_1 == -0x8000000000000000)
                                    zmm0_8 = var_250;
                                else
                                {
                                    core::ptr::drop_in_place$LT$tabby_index_cli..timer..OpenTimer$GT$::h3986c7b60ba8ea19(&var_148);
                                    var_d0 = var_248;
                                    var_148 = tabby_index_cli::timer::TimerTree::total_time::hb48ee648170d5c0e(var_280_1, var_278_1);
                                    var_2c8 = &var_1d0;
                                    int64_t (* var_2c0_3)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he9b99f79c99bb38a;
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
                                    rax_15 = r12_1 + 0x18;
                                    
                                    if (r13_2 == 0x18)
                                        break;
                                    
                                    continue;
                                }
                            }
                            
                            *arg1 = r15_1;
                            *(arg1 + 8) = zmm0_8;
                            core::ptr::drop_in_place$LT$tabby_index_cli..timer..OpenTimer$GT$::h3986c7b60ba8ea19(&var_148);
                            core::ptr::drop_in_place$LT$tabby_index_cli..timer..TimerTree$GT$::h48cae2b267925bc2(var_288, var_280_1);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$tantivy..query..query..Query$GT$$GT$::h650b378a4cadfa29(&var_228);
                            goto label_673080;
                        }
                        
                        int64_t rdx_7 = rax_14;
                        rax_14 = rdx_7 + 0;
                        r13_2 = var_200_1;
                        r12_1 = var_208_1;
                        rcx_6 = var_1e0_1;
                        
                        if (rdx_7 >= arg6)
                            break;
                    }
                }
            }
            
            var_2c8 = &data_984a40;
            int64_t var_2c0_4 = 1;
            int64_t var_2b8_3 = 8;
            int128_t var_2b0_3 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_2c8);
            var_2c8 = &data_984a90;
            int64_t var_2c0_5 = 1;
            int128_t* var_2b8_4 = 8;
            int128_t var_2b0_4 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_2c8);
            int32_t* rax_19;
            
            if (arg6)
                rax_19 = var_1a0_1;
            
            if (!arg6 || !rax_19)
            {
                label_672f42:
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$tantivy..query..query_parser..query_parser..QueryParser$GT$::h9bbbff5ed2464efa(&var_1b8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7054847749bb044b(&var_1f8);
                core::ptr::drop_in_place$LT$tantivy..core..searcher..Searcher$GT$::hfcc0968019ce3a8e(&var_270);
            }
            else
            {
                int64_t var_110_1 = 1;
                
                if (rax_19)
                    goto label_672c92;
                
                while (true)
                {
                    if (var_110_1 >= arg6)
                        goto label_672f42;
                    
                    var_110_1 += 1;
                    rax_19 = var_1a0_1;
                    
                    if (rax_19)
                    {
                        label_672c92:
                        void* rcx_9 = *var_1f8[8];
                        void* rax_21 = rcx_9 + rax_19 * 0x18;
                        void* rax_22 = rcx_9 + 0x18;
                        label_672cb0:
                        void* var_b0 = rcx_9;
                        tantivy::query::query_parser::query_parser::QueryParser::parse_query::h594bfcbc92a22894(&var_2c8, &var_1b8);
                        int64_t rax_23;
                        void* rdx_8;
                        rax_23 =
                            core::result::Result$LT$T$C$E$GT$::unwrap::ha3b1d50b86f99a01(&var_2c8);
                        var_228 = rax_23;
                        void* var_220_1 = rdx_8;
                        var_d0 = tantivy::collector::top_score_collector::TopDocs::with_limit::h66e2bec30a5176f5(0xa);
                        int64_t var_c8_1 = 0;
                        tantivy::core::searcher::Searcher::search_with_statistics_provider::h4e5a5626b3e8ae32(&var_268, &var_270, rax_23, *(rdx_8 + 0x68), &var_d0);
                        
                        if (var_268 != 0x12)
                        {
                            int64_t var_298_1 = var_238;
                            int128_t var_2a8_1 = var_248;
                            var_2b8_4 = var_258;
                            var_2c8 = var_268;
                            tabby_index_cli::commands::bench::run_bench::_$u7b$$u7b$closure$u7d$$u7d$::hb760bf1a20ed9e2f(&var_148, &var_228, &var_2c8);
                            *arg1 = var_148;
                            int64_t var_138;
                            arg1[1] = var_138;
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$tantivy..query..query..Query$GT$$GT$::h650b378a4cadfa29(&var_228);
                            break;
                        }
                        
                        int64_t rax_25 = *var_268[8];
                        var_288 = 0;
                        int64_t var_280_2 = 8;
                        int64_t var_278_2 = 0;
                        int64_t r15_2;
                        r15_2 = 1;
                        tabby_index_cli::timer::TimerTree::open::h6d5d49cd0241cd55(&var_148, 
                            &var_288, "totalsearchFailed to open index.…", 5);
                        var_2c8 = rax_25;
                        int32_t* var_2c0_6 = var_258;
                        uint64_t (* var_2b8_5)(int64_t* arg1) = var_250;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h62894249a3971a2b(&var_d0, &var_2c8);
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he578e00adb965a17(&var_1c8, &var_d0);
                        
                        if (var_1c8 == 1)
                        {
                            label_672de6:
                            tantivy::core::searcher::Searcher::doc::h2010adbd4d783d11(&var_2c8, 
                                var_270, var_1c0, *var_1c0[4]);
                            core::result::Result$LT$T$C$E$GT$::unwrap::he30d7eb29e563670(&var_268, 
                                &var_2c8);
                            core::ptr::drop_in_place$LT$tantivy..schema..document..default_document..CompactDoc$GT$::h53cefbf12d11e499(&var_268);
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he578e00adb965a17(&var_1c8, &var_d0);
                            
                            if (var_1c8 & 1)
                                goto label_672de6;
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
                        int64_t var_2c0_7 = 3;
                        var_2a8 = 0;
                        var_2b8_4 = &var_268;
                        var_2b0_4 = 2;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_2c8);
                        core::ptr::drop_in_place$LT$tabby_index_cli..timer..TimerTree$GT$::h48cae2b267925bc2(var_288, var_280_2);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$tantivy..query..query..Query$GT$$GT$::h650b378a4cadfa29(&var_228);
                        rcx_9 = rax_22;
                        rax_22 = rcx_9 + 0x18;
                        
                        if (rcx_9 == rax_21)
                            rax_22 = rcx_9;
                        
                        if (rcx_9 != rax_21)
                            goto label_672cb0;
                    }
                }
                
                label_673080:
                core::ptr::drop_in_place$LT$tantivy..query..query_parser..query_parser..QueryParser$GT$::h9bbbff5ed2464efa(&var_1b8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7054847749bb044b(&var_1f8);
                core::ptr::drop_in_place$LT$tantivy..core..searcher..Searcher$GT$::hfcc0968019ce3a8e(&var_270);
            }
        }
        else
        {
            tabby_index_cli::commands::bench::run_bench::_$u7b$$u7b$closure$u7d$$u7d$::he48cc1d0a3581e2d(&var_1b8, var_2c0, rdx_5);
            int128_t zmm0_4 = var_1b8;
            var_148 = zmm0_4;
            int64_t var_138_1 = var_1a8_2;
            arg1[1] = var_1a8_2;
            *arg1 = zmm0_4;
            int64_t var_e0;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$tantivy..schema..field..Field$GT$$GT$::he53066fa14e386e1(var_e8, var_e0);
            core::ptr::drop_in_place$LT$tantivy..core..searcher..Searcher$GT$::hfcc0968019ce3a8e(
                &var_270);
        }
    }
    return core::ptr::drop_in_place$LT$tantivy..index..index..Index$GT$::hc2911d178059c5dc(&var_a8);
}
