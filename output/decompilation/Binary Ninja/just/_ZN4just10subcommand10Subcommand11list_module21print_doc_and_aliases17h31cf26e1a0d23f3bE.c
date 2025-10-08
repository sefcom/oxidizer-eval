
  void* just::subcommand::Subcommand::list_module::print_doc_and_aliases::h31cf26e1a0d23f3b(void* arg1, int64_t arg2, uint64_t arg3, char* arg4, int64_t arg5, int64_t arg6, int64_t arg7, void* arg8, int64_t arg9)

{
    char var_14a;
    just::color::Color::stdout::h99dee7c87aa8c485(&var_14a, arg1 + 0x184);
    char rdx = *(arg1 + 0x1a6);
    char const* const var_128;
    int128_t var_110;
    
    if (arg4 || arg6 & rdx != 2)
    {
        char var_139;
        uint32_t rcx_1 = var_139;
        int32_t rax_1 = 4;
        
        if (rcx_1 && (rcx_1 != 1 || !var_14a))
            rax_1 = 0xa;
        
        int64_t var_1a0_1 = 0;
        int32_t var_198_1 = rax_1;
        int32_t var_194_1 = 0xa;
        char const* const* var_1b8 = -0x8000000000000000;
        char const* const var_1b0_1 = "#/rustc/bf64d66bd58719fac2585eae…";
        int64_t var_1a8_1 = 1;
        int64_t* rax_2 =
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h3ce94925646e0fd0(arg8, 
            arg9, arg2, arg3);
        
        if (!rax_2)
        {
            core::option::expect_failed::h3f620cfb8545dc61("no entry found for keyattempted …");
            /* no return */
        }
        
        int64_t rcx_3 = 0;
        
        if (arg7 >= *rax_2)
            rcx_3 = arg7 - *rax_2;
        
        if (rcx_3 + 1 > 0xffff)
        {
            var_128 = &data_82ce08;
            int64_t var_120_5 = 1;
            int64_t var_118_5 = 8;
            var_110 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_128);
            /* no return */
        }
        
        var_128 = &data_465db0;
        int64_t (* var_120_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
        int64_t* var_118_1 = &var_1b8;
        var_110 = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
        *var_110[8] = 0;
        int16_t var_100_1 = (rcx_3 + 1);
        char const* const var_180 = &data_46ca80;
        char** var_178_1 = 2;
        void* const var_160_1 = &data_471130;
        int64_t var_158_1 = 2;
        char const* const* var_170_1 = &var_128;
        int64_t var_168_1 = 3;
        std::io::stdio::_print::h5e446ff973c02de6(&var_180);
        uint64_t rbx;
        rbx = arg6;
        core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_1b8);
        char* var_b0 = &var_14a;
        int64_t r9;
        int64_t var_a8_1 = r9;
        int64_t var_a0_1 = arg6;
        void* rax_3;
        rax_3 = !rdx;
        
        if (rbx & rax_3)
            just::subcommand::Subcommand::list_module::print_doc_and_aliases::_$u7b$$u7b$closure$u7d$$u7d$::h76086f3aa3ac0be1(&var_b0);
        
        if (arg4)
        {
            var_128 = &data_82f150;
            int64_t var_120_2 = 1;
            int64_t var_118_2 = 8;
            var_110 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_128);
            int128_t var_98;
            regex_automata::meta::regex::Regex::find_iter::h931ca5e862c0d663(&var_98, 
                just::subcommand::backtick_re::h4d3095efc2f63ccc(), arg4);
            int128_t var_48;
            int128_t var_d8_1 = var_48;
            int128_t var_58;
            int128_t var_e8_1 = var_58;
            int128_t zmm0_2 = var_98;
            int128_t var_68;
            int128_t var_f8_1 = var_68;
            int128_t var_78;
            var_110 = var_78;
            int128_t var_88;
            var_118_2 = var_88;
            var_128 = zmm0_2;
            char const* const* rbx_2 = nullptr;
            
            while (true)
            {
                int64_t* var_38;
                regex_automata::util::iter::Searcher::advance::h29a3fd55984d9cf2(&var_180, 
                    &*var_110[8], var_38, &var_128);
                
                if (var_180 != 1)
                    break;
                
                char const* const* rbp_1 = var_170_1;
                void* rax_6;
                int64_t rdx_7;
                rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbx_2, var_178_1, arg4, arg5);
                
                if (!rax_6)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(arg4, arg5, rbx_2, var_178_1);
                    /* no return */
                }
                
                int64_t* var_138;
                
                if (rdx_7)
                {
                    uint32_t rsi_5 = var_139;
                    int32_t rcx_9 = 4;
                    
                    if (rsi_5 && (rsi_5 != 1 || !var_14a))
                        rcx_9 = 0xa;
                    
                    int64_t var_1a0_2 = 0;
                    int32_t var_198_2 = rcx_9;
                    int32_t var_194_2 = 0xa;
                    var_1b8 = -0x8000000000000000;
                    void* var_1b0_2 = rax_6;
                    int64_t var_1a8_2 = rdx_7;
                    var_138 = &var_1b8;
                    uint64_t (* var_130_1)(int64_t* arg1, int64_t arg2) = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                    var_180 = &data_465db0;
                    int64_t var_178_2 = 1;
                    int64_t var_160_2 = 0;
                    int64_t** var_170_2 = &var_138;
                    int64_t var_168_2 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_180);
                    core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_1b8);
                }
                
                char rbx_3 = var_14a;
                void* rax_7;
                int64_t rdx_9;
                rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(var_178_1, rbp_1, arg4, arg5);
                
                if (!rax_7)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(arg4, arg5, var_178_1, rbp_1);
                    /* no return */
                }
                
                uint32_t rsi_7 = var_139;
                int32_t rcx_11 = 6;
                
                if (rsi_7 && (rsi_7 == 2 || !rbx_3))
                    rcx_11 = 0xa;
                
                int64_t var_1a0_3 = 0;
                int32_t var_198_3 = rcx_11;
                int32_t var_194_3 = 0xa;
                var_1b8 = -0x8000000000000000;
                void* var_1b0_3 = rax_7;
                int64_t var_1a8_3 = rdx_9;
                var_138 = &var_1b8;
                uint64_t (* var_130_2)(int64_t* arg1, int64_t arg2) = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                var_180 = &data_465db0;
                var_178_1 = 1;
                var_160_1 = nullptr;
                var_170_1 = &var_138;
                int64_t var_168_3 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_180);
                core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_1b8);
                rbx_2 = rbp_1;
            }
            
            core::ptr::drop_in_place$LT$regex..regex..string..Matches$GT$::h7696592b070cc7e9(
                &var_128);
            int64_t rdx_11;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbx_2, arg4, arg5);
            
            if (!rax_3)
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg4, arg5, rbx_2, arg5);
                /* no return */
            }
            
            if (rdx_11)
            {
                uint32_t rsi_9 = var_139;
                int32_t rcx_12 = 4;
                
                if (rsi_9 && (rsi_9 == 2 || !var_14a))
                    rcx_12 = 0xa;
                
                int64_t var_168_4 = 0;
                var_160_1 = rcx_12;
                *var_160_1[4] = 0xa;
                var_180 = -0x8000000000000000;
                void* var_178_3 = rax_3;
                int64_t var_170_3 = rdx_11;
                var_1b8 = &var_180;
                uint64_t (* var_1b0_4)(int64_t* arg1, int64_t arg2) = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                var_128 = &data_465db0;
                int64_t var_120_3 = 1;
                *var_110[8] = 0;
                char const* const** var_118_3 = &var_1b8;
                var_110 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_128);
                core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_180);
            }
        }
        
        rax_3 = arg6;
        
        if (rax_3 & rdx == 1)
            just::subcommand::Subcommand::list_module::print_doc_and_aliases::_$u7b$$u7b$closure$u7d$$u7d$::h76086f3aa3ac0be1(&var_b0);
    }
    
    var_128 = &data_82dbf8;
    int64_t var_120_4 = 1;
    int64_t var_118_4 = 8;
    var_110 = {0};
    return std::io::stdio::_print::h5e446ff973c02de6(&var_128);
}
