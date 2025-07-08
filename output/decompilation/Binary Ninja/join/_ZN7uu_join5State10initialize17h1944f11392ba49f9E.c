
  int64_t uu_join::State::initialize::h1944f11392ba49f9(int64_t* arg1, int64_t arg2, char arg3)

{
    int64_t var_40;
    uu_join::State::read_line::hae4618c32b71c268(&var_40, arg1, arg2);
    int64_t rax = var_40;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_38;
        
        if (rax == -0x7fffffffffffffff)
        {
            int64_t var_c8 = var_38;
            int64_t* rax_6;
            int64_t rdx_1;
            rax_6 = uucore::util_name::h60d842bf27b05e82();
            int64_t* var_c0 = rax_6;
            int64_t var_b8 = rdx_1;
            int64_t* var_80 = &var_c0;
            int64_t (* var_78)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a9acb5b6b087e94;
            void* const var_b0 = &data_532610;
            int64_t var_a8 = 2;
            int64_t var_90 = 0;
            int64_t** var_a0 = &var_80;
            int64_t var_98 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
            var_c0 = &var_c8;
            int64_t (* var_b8_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            var_b0 = &data_532630;
            int64_t var_a8_1 = 2;
            int64_t var_90_1 = 0;
            int64_t** var_a0_1 = &var_c0;
            int64_t var_98_1 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
            std::process::exit::hf8c1b9d00a2a86fd(1);
            /* no return */
        }
        
        int64_t var_70 = rax;
        int128_t var_68_1 = var_38;
        int128_t var_28;
        int128_t var_58_1 = var_28;
        int64_t var_18;
        int64_t var_48_1 = var_18;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hb39c05ee85860ab5(arg1, &var_70);
        
        if (arg3)
        {
            if (arg1[2])
                return *(arg1[1] + 0x10);
            
            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
            /* no return */
        }
    }
    
    return 0;
}
