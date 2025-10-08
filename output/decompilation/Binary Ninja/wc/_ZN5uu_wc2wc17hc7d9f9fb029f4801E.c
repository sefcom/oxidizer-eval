
  int64_t uu_wc::wc::hc7d9f9fb029f4801(int64_t* arg1, int64_t* arg2)

{
    int128_t s;
    __builtin_memset(&s, 0, 0x28);
    uint64_t r15 = *(arg2 + 0x1d);
    int64_t var_f8 = 1;
    
    if (r15 != 2)
        var_f8 = uu_wc::compute_number_width::h8118755960c57c57(arg1, arg2);
    
    void* const var_130;
    uu_wc::Inputs::try_iter::he119dd3efc5b2af1(&var_130, arg1, arg2);
    void* const rcx = var_130;
    int64_t result;
    
    if (rcx == -0x7ffffffffffffffd)
        return result;
    
    int32_t var_f0_1 = r15;
    int64_t var_108;
    int64_t var_c0_1 = var_108;
    int128_t var_118;
    int128_t var_d0_1 = var_118;
    void* const var_e8 = rcx;
    int64_t result_1 = result;
    int64_t var_120;
    int64_t var_d8_1 = var_120;
    int64_t rbp_1 = 0;
    int64_t* var_180;
    int64_t* var_160;
    
    while (true)
    {
        int64_t var_a0;
        uu_wc::Inputs::try_iter::_$u7b$$u7b$closure$u7d$$u7d$::h0fa6caa4f0d409f0(&var_a0, &var_e8);
        int64_t rcx_1 = var_a0;
        
        if (rcx_1 == -0x7ffffffffffffffd)
            break;
        
        int64_t var_190;
        int64_t (* var_178)(int64_t* arg1, int64_t arg2);
        int64_t var_98;
        int64_t* var_90;
        
        if (rcx_1 != -0x7ffffffffffffffe)
        {
            int64_t var_b8 = rcx_1;
            int64_t var_b0_1 = var_98;
            int64_t* var_a8_1 = var_90;
            uu_wc::word_count_from_input::h4ad675f40b919e0e(&var_130, &var_b8, arg2);
            void* const rax_6 = var_130;
            
            if (!rax_6)
                goto label_469f76;
            
            uint64_t var_198;
            uint64_t* var_170;
            
            if (rax_6 != 2)
            {
                var_198 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h695fb2f166ad45d6();
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                int64_t rax_10;
                int64_t rdx_5;
                rax_10 = uucore::util_name::h074417a1e6395129();
                var_190 = rax_10;
                int64_t var_188_3 = rdx_5;
                var_180 = &var_190;
                var_178 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e49341541173517;
                var_170 = &var_198;
                int64_t (* var_168_2)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8429a37060a3bdfd;
                var_160 = &data_4f9318;
                int64_t var_158_3 = 3;
                int64_t var_140_2 = 0;
                int64_t** var_150_3 = &var_180;
                int64_t var_148_3 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_160);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h66df39e1038318a5(var_198);
                label_469f76:
                int64_t var_38_1 = var_108;
                int128_t var_48_1 = var_118;
                int128_t var_58 = result;
                _$LT$uu_wc..word_count..WordCount$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::h903707394c27ad02(&s, &var_58);
                
                if (var_f0_1 != 2)
                {
                    uu_wc::Input::to_title::h56646f113684bc23(&var_180, &var_b8);
                    int64_t* rax_12 = var_180;
                    int64_t (* r13_1)(int64_t* arg1, int64_t arg2);
                    
                    if (-(rax_12) == -0x8000000000000000 || rax_12 != -0x7fffffffffffffff)
                    {
                        r13_1 = var_178;
                        r15 = var_170;
                    }
                    else
                        r13_1 = nullptr;
                    
                    if (!uu_wc::print_stats::hc5ca112509d551a7(arg2, &var_58, r13_1, r15, var_f8))
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hc0c7b6ba243748cb(0);
                    else
                    {
                        if (!r13_1)
                            r15 = 7;
                        
                        var_198 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hb457e8fc7396707f();
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                        int64_t rax_15;
                        int64_t rdx_8;
                        rax_15 = uucore::util_name::h074417a1e6395129();
                        var_190 = rax_15;
                        int64_t var_188_4 = rdx_8;
                        var_160 = &var_190;
                        int64_t (* var_158_4)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e49341541173517;
                        uint64_t* var_150_4 = &var_198;
                        int64_t (* var_148_4)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8429a37060a3bdfd;
                        var_130 = &data_4f9318;
                        result = 3;
                        *var_118[8] = 0;
                        int64_t** var_120_2 = &var_160;
                        var_118 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_130);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h66df39e1038318a5(var_198);
                    }
                    
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$$GT$::hf203ba398b6b35be(&var_180);
                }
            }
            else
            {
                var_198 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h695fb2f166ad45d6();
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                int64_t rax_8;
                int64_t rdx_4;
                rax_8 = uucore::util_name::h074417a1e6395129();
                var_190 = rax_8;
                int64_t var_188_2 = rdx_4;
                var_180 = &var_190;
                var_178 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e49341541173517;
                var_170 = &var_198;
                int64_t (* var_168_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8429a37060a3bdfd;
                var_160 = &data_4f9318;
                int64_t var_158_2 = 3;
                int64_t var_140_1 = 0;
                int64_t** var_150_2 = &var_180;
                int64_t var_148_2 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_160);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h66df39e1038318a5(var_198);
            }
            core::ptr::drop_in_place$LT$uu_wc..Input$GT$::h52889054a5040018(&var_b8);
            rbp_1 += 1;
        }
        else
        {
            var_190 = var_98;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(var_90[0xb]());
            int64_t* rax_5;
            int64_t (* rdx_2)(int64_t* arg1, int64_t arg2);
            rax_5 = uucore::util_name::h074417a1e6395129();
            var_180 = rax_5;
            var_178 = rdx_2;
            var_160 = &var_180;
            int64_t (* var_158_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e49341541173517;
            int64_t* var_150_1 = &var_190;
            int64_t (* var_148_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h513c2095c442bcfe;
            var_130 = &data_4f9318;
            result = 3;
            *var_118[8] = 0;
            int64_t** var_120_1 = &var_160;
            var_118 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_130);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hb8a5da919c7b4817(var_190, var_90);
            rbp_1 += 1;
        }
    }
    
    core::ptr::drop_in_place$LT$core..iter..sources..from_fn..FromFn$LT$uu_wc..Inputs..try_iter..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hf91b456bd911ec53(&var_e8);
    
    if (var_f0_1 - 1 < 2)
    {
        label_46a0fa:
        char const* const rdx_9 = nullptr;
        
        if (var_f0_1 != 2)
            rdx_9 = "totalwordsfile";
        
        if (!uu_wc::print_stats::hc5ca112509d551a7(arg2, &s, rdx_9, 5, var_f8))
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hc0c7b6ba243748cb(0);
        else
        {
            var_180 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::ha6cc97ce51e674b3();
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            void* rax_19;
            int64_t rdx_10;
            rax_19 = uucore::util_name::h074417a1e6395129();
            var_e8 = rax_19;
            int64_t var_e0_1 = rdx_10;
            var_160 = &var_e8;
            int64_t (* var_158_5)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e49341541173517;
            int64_t** var_150_5 = &var_180;
            int64_t (* var_148_5)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8429a37060a3bdfd;
            var_130 = &data_4f9318;
            result = 3;
            *var_118[8] = 0;
            int64_t** var_120_3 = &var_160;
            var_118 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_130);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h66df39e1038318a5(var_180);
        }
    }
    else if (!var_f0_1 && rbp_1 >= 2)
        goto label_46a0fa;
    
    return 0;
}
