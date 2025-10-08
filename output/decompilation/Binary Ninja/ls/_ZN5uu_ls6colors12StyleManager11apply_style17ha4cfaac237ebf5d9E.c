
  int64_t uu_ls::colors::StyleManager::apply_style::ha4cfaac237ebf5d9(int128_t* arg1, int64_t* arg2, int128_t* arg3, int64_t* arg4, char arg5)

{
    int64_t var_88 = 0;
    int64_t var_80 = 1;
    int64_t result = 0;
    int128_t var_a8;
    int64_t var_98;
    
    if (arg2[1] == 2)
    {
        char* rax_1 = uu_ls::colors::StyleManager::get_normal_style::h68940fba9ff7dfe3(*arg2);
        
        if (rax_1)
        {
            char rcx = *rax_1;
            int32_t rdx = *(rax_1 + 0x11);
            int128_t zmm0 = *(rax_1 + 1);
            
            if (rcx != 2)
            {
                char var_45 = rcx;
                int128_t var_44_1 = zmm0;
                int32_t var_34_1 = rdx;
                uu_ls::colors::StyleManager::get_style_code::hd26268f81da97ace(&var_a8, arg2, 
                    &var_45);
                int64_t rsi_1 = *var_a8[8];
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_88, rsi_1, var_98 + rsi_1);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_a8);
            }
        }
    }
    
    int64_t rbx;
    
    if (!arg3)
    {
        int128_t* rax_4 = uu_ls::colors::StyleManager::get_normal_style::h68940fba9ff7dfe3(*arg2);
        
        if (!rax_4)
            rbx = 0;
        else
        {
            var_a8 = *rax_4;
            *var_a8[0xd] = *(rax_4 + 0xd);
            
            if (var_a8 == 2)
                rbx = 0;
            else if (!
                    uu_ls::colors::StyleManager::is_current_style::haceb8fa00830989f(arg2, &var_a8))
                rbx = 0;
            else
            {
                void* rdx_5;
                char const* const rsi_5;
                
                if (arg2[1] != 2)
                {
                    *(arg2 + 0x1d) = 1;
                    arg2[1] = 2;
                    rsi_5 = "\x1b[0mnameSJMTYDDTACDTBDSTCyanW…";
                    rdx_5 = 4;
                }
                else
                {
                    rsi_5 = 1;
                    rdx_5 = nullptr;
                }
                
                rbx = 1;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_88, rsi_5, rdx_5 + rsi_5);
            }
        }
    }
    else
    {
        if (!uu_ls::colors::StyleManager::is_current_style::haceb8fa00830989f(arg2, arg3))
        {
            void* rdx_4;
            char const* const rsi_3;
            
            if (arg2[1] != 2 || !*(arg2 + 0x1d))
            {
                *(arg2 + 0x1d) = 1;
                arg2[1] = 2;
                rsi_3 = "\x1b[0mnameSJMTYDDTACDTBDSTCyanW…";
                rdx_4 = 4;
            }
            else
            {
                rdx_4 = nullptr;
                rsi_3 = 1;
            }
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_88, rsi_3, rdx_4 + rsi_3);
            uu_ls::colors::StyleManager::get_style_code::hd26268f81da97ace(&var_a8, arg2, arg3);
            int64_t rsi_7 = *var_a8[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_88, rsi_7, var_98 + rsi_7);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_a8);
        }
        
        rbx = 0;
    }
    
    void* const r13 = "\x1b[Kprint any security context…";
    char const* const r14_1 = 1;
    
    if (!arg5)
        r13 = 1;
    
    var_a8 = var_88;
    std::ffi::os_str::OsString::push::h7ae4c515aa982082(&var_a8, arg4);
    rbx = ~rbx;
    int64_t rdx_10;
    
    if (rbx & arg2[1] == 2)
        rdx_10 = 0;
    else
    {
        *(arg2 + 0x1d) = 1;
        arg2[1] = 2;
        r14_1 = "\x1b[0mnameSJMTYDDTACDTBDSTCyanW…";
        rdx_10 = 4;
    }
    
    std::ffi::os_str::OsString::push::h8d27602952d812af(&var_a8, r14_1, rdx_10);
    std::ffi::os_str::OsString::push::h8d27602952d812af(&var_a8, r13, arg5 * 3);
    arg1[1] = result;
    *arg1 = var_a8;
    return result;
}
