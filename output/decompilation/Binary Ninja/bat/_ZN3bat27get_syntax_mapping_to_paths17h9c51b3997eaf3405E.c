
  int128_t* bat::get_syntax_mapping_to_paths::h9c51b3997eaf3405(int128_t* arg1, int128_t* arg2)

{
    int64_t rax;
    int64_t rdx;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::hc0603bc6e81efd7b();
    int128_t std::panicking::panic_count::LOCAL_PANIC_COUNT::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::VAL::hb22665331b511c6e.1_1 = *std::panicking::panic_count::LOCAL_PANIC_COUNT::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::VAL::hb22665331b511c6e.1;
    int128_t zmm0 = data_ac6f18;
    int64_t var_60 = rdx;
    void var_50;
    _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..ops..control_flow..ControlFlow$LT$B$C$core..convert..Infallible$GT$$GT$$GT$::from_residual::h948d462cf561b9e9(&var_50, arg2);
    
    while (true)
    {
        void* rax_1;
        int64_t* rdx_1;
        rax_1 = _$LT$core..iter..adapters..chain..Chain$LT$A$C$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf603f4ed33c62cfb(&var_50);
        
        if (!rax_1)
            break;
        
        if (!*rdx_1)
        {
            int64_t var_a8;
            hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::hdbfddc9a2f967a1a(&var_a8, 
                &std::panicking::panic_count::LOCAL_PANIC_COUNT::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::VAL::hb22665331b511c6e.1_1, 
                rdx_1[1], rdx_1[2]);
            int64_t var_c8;
            int128_t var_c0;
            int128_t var_a0;
            
            if (!var_a8)
            {
                var_c0 = var_a0;
                var_c8 = 0;
            }
            else
            {
                var_c0 = var_a0;
                var_c8 = var_a8;
            }
            
            void* rax_3 =
                std::collections::hash::map::Entry$LT$K$C$V$GT$::or_insert_with::h95d1d0fc4e3f9b05(
                &var_c8);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hab28b98124005ba5(&var_a8, *(rax_1 + 8), *(rax_1 + 0x10));
            *var_c0[8] = *var_a0[8];
            var_c8 = var_a8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hb583a419eaf91a2b(rax_3, &var_c8);
        }
    }
    
    int128_t std::panicking::panic_count::LOCAL_PANIC_COUNT::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::VAL::hb22665331b511c6e.1_2 = std::panicking::panic_count::LOCAL_PANIC_COUNT::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::VAL::hb22665331b511c6e.1_1;
    arg1[2] = rax;
    arg1[1] = zmm0;
    *arg1 = std::panicking::panic_count::LOCAL_PANIC_COUNT::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::VAL::hb22665331b511c6e.1_2;
    return arg1;
}
