
  void** const uu_head::arg_iterate::h9da41de1ba75f81a(int64_t* arg1, int64_t arg2)

{
    int64_t var_150 = arg2;
    int64_t rdx;
    int64_t var_148 = rdx;
    void** const var_140;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha233663bd138e689(&var_140, &var_150);
    void** const r15 = var_140;
    
    if (-(r15) == -0x8000000000000000)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    void** var_80;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha233663bd138e689(&var_80, &var_150);
    int64_t r14 = -0x8000000000000000;
    void** rax_4 = var_80;
    void** const result;
    char* var_138;
    int64_t var_130;
    int64_t var_e8;
    char* var_78;
    
    if (rax_4 != -0x8000000000000000)
    {
        int64_t var_70;
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_140, var_78, var_70);
        
        if (var_140 == 1)
        {
            r14 = -0x7fffffffffffffff;
            label_45dffa:
            *arg1 = r14;
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc191b4ed0286b218(rax_4, 
                var_78);
            return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc191b4ed0286b218(
                r15, var_138);
        }
        
        int64_t var_a8;
        uu_head::parse::parse_obsolete::hee0b1fdae7af2962(&var_a8, var_138, var_130);
        int64_t rax_7 = var_a8;
        
        if (-(rax_7) == -0x8000000000000000)
        {
            var_e8 = 0;
            char* var_e0_2 = var_138;
            int64_t var_d8_2 = var_130;
            char var_d0_1 = 1;
            int64_t* var_90 = &var_e8;
            int64_t (* var_88_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_140 = &data_4f6c90;
            int64_t var_138_2 = 1;
            int64_t var_120_1 = 0;
            int64_t** var_130_2 = &var_90;
            int64_t var_128_1 = 1;
            int128_t var_48;
            core::option::Option$LT$T$GT$::map_or_else::hd0b4531fe379a27f(&var_48, &var_140);
            int64_t var_38;
            arg1[3] = var_38;
            *(arg1 + 8) = var_48;
            goto label_45dffa;
        }
        
        if (rax_7 != -0x7fffffffffffffff)
        {
            int64_t var_98;
            int64_t var_58_1 = var_98;
            int128_t var_68 = var_a8;
            int64_t* rax_12 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
            
            if (!rax_12)
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            *rax_12 = r15;
            rax_12[1] = var_138;
            rax_12[2] = var_130;
            var_e8 = 1;
            int64_t* var_e0_3 = rax_12;
            int64_t var_d8_3 = 1;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0ceaded9872b293d(&var_140, &var_e8);
            core::iter::traits::iterator::Iterator::chain::hd4b14ed75e7cf24f(&var_e8, &var_140, 
                &var_68);
            core::iter::traits::iterator::Iterator::chain::h1ff7b94f70b1b33c(&var_140, &var_e8, 
                var_150);
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h9461490f9e9c7628(&var_140);
            arg1[2] = &data_4f6cf0;
            *arg1 = -0x7ffffffffffffffb;
            return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc191b4ed0286b218(
                rax_4, var_78);
        }
        
        int64_t* rax_8 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x30);
        
        if (!rax_8)
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        *rax_8 = r15;
        rax_8[1] = var_138;
        rax_8[2] = var_130;
        rax_8[3] = rax_4;
        rax_8[4] = var_78;
        rax_8[5] = var_70;
        var_140 = 2;
        int64_t* var_138_1 = rax_8;
        int64_t var_130_1 = 2;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0ceaded9872b293d(&var_e8, &var_140);
        core::iter::traits::iterator::Iterator::chain::h363a5d7fa6683cbe(&var_140, &var_e8, 
            var_150);
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::ha2dd3dc0778b363e(&var_140);
        result = &data_4f6cb8;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::ha4cb084281363d08(-0x8000000000000000, var_78);
        uint64_t rax_5 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
        
        if (!rax_5)
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        *rax_5 = r15;
        *(rax_5 + 8) = var_138;
        *(rax_5 + 0x10) = var_130;
        var_e8 = 1;
        uint64_t var_e0_1 = rax_5;
        int64_t var_d8_1 = 1;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0ceaded9872b293d(&var_140, &var_e8);
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h7acdb67afe7955ff(&var_140);
        result = &data_4f6d28;
    }
    arg1[2] = result;
    *arg1 = -0x7ffffffffffffffb;
    return result;
}
