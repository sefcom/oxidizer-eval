
  int64_t uu_wc::wc::hd5e1121da6170855(int64_t* arg1, int64_t* arg2)

{
    int128_t s;
    __builtin_memset(&s, 0, 0x28);
    uint32_t r15 = *(arg2 + 0x1d);
    int64_t var_100 = 1;
    
    if (r15 != 2)
        var_100 = uu_wc::compute_number_width::h0dc7206969488842(arg1, arg2);
    
    void* const var_178;
    uu_wc::Inputs::try_iter::he58c0dff5beb00a3(&var_178, arg1, arg2);
    void* const rcx = var_178;
    int64_t result_1;
    int64_t result = result_1;
    
    if (rcx != -0x7ffffffffffffffd)
    {
        int64_t var_150;
        int64_t var_90_1 = var_150;
        int128_t var_160;
        int128_t var_a0_1 = var_160;
        void* const var_b8 = rcx;
        int64_t result_2 = result;
        void** var_168;
        void** var_c0_1 = var_168;
        void** var_a8_1 = var_168;
        int64_t r15_1 = 0;
        void* var_130;
        void** rbx_1 = &var_130;
        int128_t* var_e8;
        
        while (true)
        {
            int64_t var_70;
            uu_wc::Inputs::try_iter::_$u7b$$u7b$closure$u7d$$u7d$::h72e90ebe24b5b113(&var_70, 
                &var_b8);
            int64_t rcx_1 = var_70;
            
            if (rcx_1 == -0x7ffffffffffffffd)
                break;
            
            int64_t* var_1a8;
            int64_t* var_1a0;
            int64_t* var_68;
            int64_t* var_60;
            
            if (rcx_1 != -0x7ffffffffffffffe)
            {
                int64_t var_88 = rcx_1;
                int64_t* var_80_1 = var_68;
                int64_t* var_78_1 = var_60;
                uu_wc::word_count_from_input::h9c6b7f02841e6225(&var_178, &var_88, arg2);
                void* const rax_5 = var_178;
                
                if (!rax_5)
                    goto label_4bd931;
                
                void** var_198;
                void* var_188;
                int64_t var_140;
                
                if (rax_5 != 2)
                {
                    var_188 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h6d2d9bfd1274cb46();
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    int64_t rax_9;
                    int64_t rdx_5;
                    rax_9 = uucore::util_name::h60d842bf27b05e82();
                    var_140 = rax_9;
                    int64_t var_138_2 = rdx_5;
                    var_1a8 = &var_140;
                    var_1a0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
                    var_198 = &var_188;
                    int64_t (* var_190_2)(int64_t* arg1, void* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb416dfd1ca34992c;
                    var_130 = &data_5311c8;
                    int64_t var_128_3 = 3;
                    int64_t var_110_2 = 0;
                    int64_t** var_120_3 = &var_1a8;
                    int64_t var_118_3 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_130);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h28789891c4c0df25(var_188);
                    label_4bd931:
                    int64_t var_c8_1 = var_150;
                    int128_t zmm0_2 = result_1;
                    int128_t zmm1_1 = var_160;
                    int128_t var_d8_1 = zmm1_1;
                    var_e8 = zmm0_2;
                    *var_160[8] = var_150;
                    var_168 = zmm1_1;
                    var_178 = zmm0_2;
                    _$LT$uu_wc..word_count..WordCount$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::h8a7b9039573b0b39(&s, &var_178);
                    
                    if (r15 != 2)
                    {
                        uu_wc::Input::to_title::hf944d4f2d9388afe(&var_1a8, &var_88);
                        int64_t* rax_11 = var_1a8;
                        void* rbp_1;
                        
                        if (rax_11 == -0x8000000000000000 || rax_11 != -0x7fffffffffffffff)
                        {
                            rbp_1 = var_1a0;
                            rbx_1 = var_198;
                        }
                        else
                            rbp_1 = nullptr;
                        
                        if (uu_wc::print_stats::hd63ccbcd2e38aece(arg2, &var_e8, rbp_1))
                        {
                            bool cond:2_1 = !rbp_1;
                            
                            if (!rbp_1)
                                rbp_1 = "<stdin>total FilesDisabledextraS…";
                            
                            if (cond:2_1)
                                rbx_1 = 7;
                            
                            var_188 = rbp_1;
                            void** var_180_1 = rbx_1;
                            int128_t* var_f8 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hbee748f1525ffde1();
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                            int64_t rax_14;
                            int64_t rdx_7;
                            rax_14 = uucore::util_name::h60d842bf27b05e82();
                            var_140 = rax_14;
                            int64_t var_138_3 = rdx_7;
                            var_130 = &var_140;
                            int64_t (* var_128_4)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
                            int128_t** var_120_4 = &var_f8;
                            int64_t (* var_118_4)(int64_t* arg1, void* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb416dfd1ca34992c;
                            var_178 = &data_5311c8;
                            result_1 = 3;
                            *var_160[8] = 0;
                            var_168 = &var_130;
                            var_160 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_178);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h28789891c4c0df25(var_f8);
                        }
                        
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::h7b5c9b8dea2633d7(&var_1a8);
                        rbx_1 = &var_130;
                    }
                    
                    core::ptr::drop_in_place$LT$uu_wc..Input$GT$::hd370e224d5568eba(&var_88);
                    r15_1 += 1;
                    continue;
                }
                else
                {
                    var_188 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h2da712d33864c64c();
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    int64_t rax_7;
                    int64_t rdx_4;
                    rax_7 = uucore::util_name::h60d842bf27b05e82();
                    var_140 = rax_7;
                    int64_t var_138_1 = rdx_4;
                    var_1a8 = &var_140;
                    var_1a0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
                    var_198 = &var_188;
                    int64_t (* var_190_1)(int64_t* arg1, void* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb416dfd1ca34992c;
                    var_130 = &data_5311c8;
                    int64_t var_128_2 = 3;
                    int64_t var_110_1 = 0;
                    int64_t** var_120_2 = &var_1a8;
                    int64_t var_118_2 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_130);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h28789891c4c0df25(var_188);
                    core::ptr::drop_in_place$LT$uu_wc..Input$GT$::hd370e224d5568eba(&var_88);
                }
            }
            else
            {
                var_1a8 = var_68;
                var_1a0 = var_60;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(var_60[0xc]());
                int128_t* rax_4;
                int64_t rdx_2;
                rax_4 = uucore::util_name::h60d842bf27b05e82();
                var_e8 = rax_4;
                int64_t var_e0_1 = rdx_2;
                var_130 = &var_e8;
                int64_t (* var_128_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
                int64_t* var_120_1 = &var_1a8;
                int64_t (* var_118_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d4509789875f497;
                var_178 = &data_5311c8;
                result_1 = 3;
                *var_160[8] = 0;
                var_168 = &var_130;
                var_160 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_178);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h547312d815f977f1(var_1a8, var_1a0);
            }
            r15_1 += 1;
        }
        
        core::ptr::drop_in_place$LT$core..iter..sources..from_fn..FromFn$LT$uu_wc..Inputs..try_iter..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hb5a904caff70e7b6(&var_b8);
        
        if (r15 - 1 < 2)
        {
            label_4bdafd:
            void* rdx_8 = nullptr;
            
            if (r15 != 2)
                rdx_8 = "total FilesDisabledextraStdinRep…";
            
            if (uu_wc::print_stats::hd63ccbcd2e38aece(arg2, &s, rdx_8))
            {
                var_e8 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc10cf64853115943();
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                void* rax_18;
                int64_t rdx_9;
                rax_18 = uucore::util_name::h60d842bf27b05e82();
                var_b8 = rax_18;
                int64_t var_b0_1 = rdx_9;
                var_130 = &var_b8;
                int64_t (* var_128_5)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
                int128_t** var_120_5 = &var_e8;
                int64_t (* var_118_5)(int64_t* arg1, void* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb416dfd1ca34992c;
                var_178 = &data_5311c8;
                int64_t var_170 = 3;
                *var_160[8] = 0;
                void** var_168_1 = &var_130;
                var_160 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_178);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h28789891c4c0df25(var_e8);
            }
        }
        else if (!r15 && r15_1 >= 2)
            goto label_4bdafd;
        
        result = 0;
    }
    
    return result;
}
