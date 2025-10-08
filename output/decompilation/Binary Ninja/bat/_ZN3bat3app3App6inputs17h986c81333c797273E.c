
  int64_t bat::app::App::inputs::h986c81333c797273(char* arg1, void* arg2)

{
    char const* const r14 = &data_485489;
    int64_t var_1c8;
    int64_t* r15 = &var_1c8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha33ae1f620f2d9eb(
        &var_1c8, arg2, &data_485489, 9);
    int64_t var_b0;
    clap_builder::parser::error::MatchesError::unwrap::hda9461ab8f9a8888(&var_b0, &data_485489, 9, 
        &var_1c8);
    int64_t var_208;
    int64_t var_1f0;
    int64_t var_1c0;
    char* var_1b8;
    
    if (!var_b0)
        var_208 = -0x8000000000000000;
    else
    {
        core::iter::traits::iterator::Iterator::collect::h630ea7239f535835(&var_1c8, &var_b0);
        var_208 = var_1c8;
        var_1f0 = var_1c0;
        r14 = var_1b8;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha33ae1f620f2d9eb(
        &var_1c8, arg2, &data_48141c[0x1c], 4);
    int64_t var_70;
    clap_builder::parser::error::MatchesError::unwrap::hda9461ab8f9a8888(&var_70, 
        &data_48141c[0x1c], 4, &var_1c8);
    int64_t var_200;
    int64_t var_1f8;
    uint64_t rbp_1;
    char var_20c_1;
    int64_t rax_3;
    int64_t rcx_2;
    void** const rbx_1;
    bool r12;
    char* r13;
    
    if (!var_70)
    {
        r12 = true;
        var_200 = -0x8000000000000000;
        rcx_2 = var_208;
        
        if (rcx_2 != -0x8000000000000000)
            goto label_7a81c2;
        
        label_7a8005:
        rax_3 = 1;
        int32_t var_20c = rax_3;
        rbp_1 = alloc::boxed::Box$LT$T$GT$::new::hb0b512753cc67665();
        uint64_t rax_4;
        rax_4 = 1;
        var_20c_1 = rax_4;
        rbx_1 = &data_ac83f0;
        r13 = 1;
        
        if (r12)
            goto label_7a822f;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h630ea7239f535835(&var_1c8, &var_70);
        int64_t rsi_3 = var_1c8;
        var_1f8 = var_1c0;
        r15 = var_1b8;
        rcx_2 = var_208;
        rax_3 = rcx_2 == -0x8000000000000000;
        var_200 = rsi_3;
        r12 = rsi_3 == -0x8000000000000000;
        rax_3 |= r12;
        
        if (rax_3 & 1)
        {
            if (rcx_2 == -0x8000000000000000)
                goto label_7a8005;
            
            goto label_7a81c2;
        }
        
        if (r14 != r15)
        {
            rax_3 = 1;
            int32_t var_20c_3 = rax_3;
            _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_1c8, "Must be one file name per input …", 0x25);
            int128_t var_188;
            *(arg1 + 0x40) = var_188;
            int128_t zmm0_3 = var_1c8;
            int128_t var_198;
            *(arg1 + 0x30) = var_198;
            int128_t var_1a8;
            *(arg1 + 0x20) = var_1a8;
            *(arg1 + 0x10) = var_1b8;
            *arg1 = zmm0_3;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$$RF$std..path..Path$GT$$GT$$GT$::hefbd4e8c9620bbdf(var_200, var_1f8);
            /* tailcall */
            return
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::he862375b69ea6ca7(
                var_208, var_1f0);
        }
        
        rcx_2 = var_208;
        label_7a81c2:
        int64_t var_128 = rcx_2;
        int64_t var_120_1 = var_1f0;
        char const* const var_118_1 = r14;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hbcb5dc5d4efdabe2(&var_1c8, &var_128);
        int32_t var_20c_2 = 0;
        rbp_1 = alloc::boxed::Box$LT$T$GT$::new::h818cf8d1bc96670b(&var_1c8);
        rbx_1 = &data_ac8428;
        var_20c_1 = 0;
        r13 = nullptr;
        
        if (r12)
        {
            label_7a822f:
            uint64_t rax_11 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0xa0);
            
            if (!rax_11)
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            rbx_1[3](&var_1c8, rbp_1);
            int64_t rsi_17;
            
            if (!var_1c8)
                rsi_17 = 0;
            else
                rsi_17 = var_1c0;
            
            bat::input::new_stdin_input::h2ae7c09cd685a9f4(&var_1c8, rsi_17);
            memcpy(rax_11, &var_1c8, 0xa0);
            *(arg1 + 8) = 1;
            *(arg1 + 0x10) = rax_11;
            *(arg1 + 0x18) = 1;
            *arg1 = 0xd;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h1f9b5db2161339be(rbp_1, rbx_1);
            int64_t result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$$RF$std..path..Path$GT$$GT$$GT$::hefbd4e8c9620bbdf(var_200, var_1f8);
            
            if (r13 || !var_20c_1)
                return result;
            
            /* tailcall */
            return
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::he862375b69ea6ca7(
                var_208, var_1f0);
        }
    }
    uint64_t rax_5 =
        alloc::boxed::Box$LT$T$GT$::new::h6027369fa272cb20(var_1f8, (r15 << 4) + var_1f8);
    int64_t var_1e0 = 0;
    int64_t var_1d8 = 8;
    int64_t var_1d0 = 0;
    void var_e8;
    core::iter::traits::iterator::Iterator::zip::h11df4a8393c6cbc2(&var_e8, rax_5, &data_ac8460, 
        rbp_1);
    
    while (true)
    {
        int32_t var_110;
        _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h4762d0fb8b5b7d97(&var_110, &var_e8);
        
        if (var_110 != 1)
            break;
        
        char* var_108;
        
        if (var_108)
        {
            int64_t var_100;
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_1c8, var_108, var_100);
            char temp0_1 = var_1c8;
            char* rsi_8 = var_1b8;
            
            if (temp0_1)
                rsi_8 = nullptr;
            
            int64_t rdi_10 = var_1c0;
            
            if (temp0_1)
                rdi_10 = 1;
            
            int64_t var_f8;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rdi_10, rsi_8, &data_485489[9], 1))
            {
                bat::input::new_file_input::h6b300303a93fad8c(&var_1c8, var_108, var_100, var_f8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hb1f08851061528ce(&var_1e0, &var_1c8);
            }
            else
            {
                bat::input::new_stdin_input::h2ae7c09cd685a9f4(&var_1c8, var_f8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hb1f08851061528ce(&var_1e0, &var_1c8);
            }
        }
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..zip..Zip$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$core..option..Option$LT$$RF$std..path..Path$GT$$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$core..option..Option$LT$$RF$std..path..Path$GT$$GT$$GT$$GT$::hc0cf50eea9912096(&var_e8);
    *(arg1 + 0x18) = var_1d0;
    *(arg1 + 8) = var_1e0;
    *arg1 = 0xd;
    /* tailcall */
    return core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$$RF$std..path..Path$GT$$GT$$GT$::hefbd4e8c9620bbdf(var_200, var_1f8);
}
